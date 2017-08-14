using UnityEditor;
using UnityEngine;
using NUnit.Framework;

using System;  
using System.Collections;
using System.Threading;

namespace AIMMOUnityTest
{
	[TestFixture]
	internal class PlayerControllerTest
	{
		public class PlayerControllerWrapper 
		{
			private GameObject context = new GameObject();
			public PlayerController playerController;

			public PlayerControllerWrapper(float x, float y)
			{
				IsometricPosition pos = context.AddComponent<IsometricPosition>();
				pos.Set(new Vector2(x, y));

				playerController = context.AddComponent<PlayerController>();
				playerController.transform.position = new Vector3(pos.Vector().x, pos.Vector().y, 0);
				playerController.Awake();
			}

			public Vector2 GetPosition() 
			{
				return playerController.transform.GetComponent<IsometricPosition> ().Vector();
			}

			public void SetNextPosition (float x, float y)
			{	
				PlayerData playerData = new PlayerData (new Vector2 (x, y));
				playerController.SetNextState (playerData);
				playerController.transform.position = new Vector3(x, y, 0);
			}

			public void PassTime(float time) 
			{
				var prop = playerController.GetType().GetField("startTime", 
					  System.Reflection.BindingFlags.NonPublic
					| System.Reflection.BindingFlags.Instance);
				prop.SetValue(playerController, Time.time - time);
			}
		}

		[TestCase(1.0f, 2.0f, 2.0f, 3.0f)]
		[TestCase(0.0f, 0.0f, 10.0f, 10.0f)]
		[TestCase(1.0f, 1.0f, 1.0f, 1.0f)]
		[TestCase(0.0f, 0.0f, 0.0f, 10.0f)]
		public void TestPlayerMovesToNextState(float x, float y, float x2, float y2) 
		{
			var wrapper = new PlayerControllerWrapper(x, y);
			wrapper.SetNextPosition (x, y);
			wrapper.playerController.Update();

			wrapper.SetNextPosition(x2, y2);
			wrapper.PassTime (1.0f);

			try { wrapper.playerController.Update();} 
			catch (Exception) {}

			Assert.IsTrue(wrapper.GetPosition() == new Vector2(x2, y2));
		}
			
		[TestCase(1.0f, 2.0f, 2.0f, 3.0f)]
		[TestCase(0.0f, 0.0f, 10.0f, 10.0f)]
		[TestCase(0.0f, 0.0f, 0.0f, 10.0f)]
		public void TestPlayerLurps(float x, float y, float x2, float y2)
		{
			var wrapper = new PlayerControllerWrapper(x, y);
			wrapper.SetNextPosition (x, y);
			wrapper.playerController.Update();

			wrapper.SetNextPosition(x2, y2);
			wrapper.PassTime (0.05f);

			try { wrapper.playerController.Update();} 
			catch (Exception) {}

			Assert.IsTrue(wrapper.GetPosition() != new Vector2(x2, y2));
		}

	}
}
