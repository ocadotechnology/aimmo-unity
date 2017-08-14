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

		[Test]
		public void TestPlayerMovesToNextState() 
		{
			var wrapper = new PlayerControllerWrapper(1.0f, 2.0f);
			wrapper.SetNextPosition (1.0f, 2.0f);
			wrapper.playerController.Update();

			wrapper.SetNextPosition(2.0f, 3.0f);
			wrapper.PassTime (1.0f);

			try { wrapper.playerController.Update();} 
			catch (Exception e) {}

			Assert.IsTrue(wrapper.GetPosition() == new Vector2(2.0f, 3.0f));
		}
	}
}
