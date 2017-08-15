using UnityEngine;
using UnityEditor;
using NUnit.Framework;

using SimpleJSON;
using System;  
using System.Collections;

namespace AIMMOUnityTest
{
	[TestFixture]
	internal class PlayerManagerTest
	{
		private static string playerDataJson = @" {
			""x"": ""1"",
			""y"": ""2"",
			""rotation"" : ""0.05"",
			""health"" : ""5"",
			""colour"" : ""#ff00ff""
		}";

		private static PlayerData playerData = new PlayerData(JSON.Parse(playerDataJson));
		private static PlayerData playerDataUpdated = new PlayerData(new Vector2(2.0f,3.0f));

		public class PlayerManagerWrapper
		{
			private GameObject context = new GameObject();
			private GameObject mockery = new GameObject();

			public int id;
			public PlayerManager playerManager;

			public PlayerManagerWrapper(int id)
			{
				this.id = id;
				playerManager = context.AddComponent<PlayerManager>();
			}
		}

		// We use reflection here rather than exposing the field or using Mockery
		public Vector2 GetNextPosition(PlayerController playerController) 
		{
			var prop = playerController.GetType().GetField(
				"nextPosition", 
				System.Reflection.BindingFlags.NonPublic |
				System.Reflection.BindingFlags.Instance);
			return (Vector2) prop.GetValue(playerController);
		}
			
		[Test]
		public void TestCreatingPlayerCreatesPlayerGameObject() 
		{
			PlayerManagerWrapper wrapper = new PlayerManagerWrapper(1);
			PlayerManager manager = wrapper.playerManager;

			manager.CreatePlayer(wrapper.id, playerData); 

			GameObject go = GameObject.Find(manager.PlayerId(wrapper.id));
			Assert.IsNotNull (go);

			IsometricPosition pos = go.GetComponent<IsometricPosition> (); 
			Assert.AreEqual (pos.Vector(), new Vector2(playerData.x, playerData.y));
		
			Assert.IsNotNull (go.GetComponent<Renderer>());			
			Assert.IsNotNull (go.GetComponent<PlayerController>());
			Assert.IsNotNull (go.GetComponent<PlayerScoreText>());
			Assert.IsNotNull (go.GetComponent<PlayerHealthBar>());
		}

		[Test]
		public void TestDeletePlayerDeletesPlayerGameObject() 
		{
			PlayerManagerWrapper wrapper = new PlayerManagerWrapper(2);
			PlayerManager manager = wrapper.playerManager;

			manager.CreatePlayer(wrapper.id, playerData); 
			Assert.IsNotNull (GameObject.Find(manager.PlayerId(wrapper.id)));

			manager.DeletePlayer (wrapper.id);
			Assert.IsNull (GameObject.Find(manager.PlayerId(wrapper.id)));
		}

		[Test]
		public void TestUpdatePlayerToUpdateCallsSetNextState()
		{
			PlayerManagerWrapper wrapper = new PlayerManagerWrapper(3);
			PlayerManager manager = wrapper.playerManager;

			manager.CreatePlayer(wrapper.id, playerData); 
			Assert.IsNotNull (GameObject.Find(manager.PlayerId(wrapper.id)));

			GameObject go = GameObject.Find (manager.PlayerId (wrapper.id));
			PlayerController pc = go.GetComponent<PlayerController> ();

			manager.UpdatePlayer (wrapper.id, playerDataUpdated);
			Assert.AreEqual (GetNextPosition(pc), new Vector2 (playerDataUpdated.x, playerDataUpdated.y));
		}

		[Test]
		public void TestCreatingPlayerTwiceRefersSameGameObject() 
		{
			PlayerManagerWrapper wrapper = new PlayerManagerWrapper(1);
			PlayerManager manager = wrapper.playerManager;

			manager.CreatePlayer(wrapper.id, playerData); 
			GameObject goBefore = GameObject.Find(manager.PlayerId(wrapper.id));
			Assert.IsNotNull (goBefore);

			manager.CreatePlayer(wrapper.id, playerData); 
			GameObject goAfter = GameObject.Find(manager.PlayerId(wrapper.id));
			Assert.IsNotNull (goAfter);

			Assert.AreEqual (goBefore, goAfter);
		}
	}
}
