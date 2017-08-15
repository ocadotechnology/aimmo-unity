using UnityEngine;
using UnityEditor;
using NUnit.Framework;
using SimpleJSON;
using System;  
using UnityEngine;
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

		public class PlayerManagerWrapper
		{
			private GameObject context = new GameObject();

			public int id;
			public PlayerManager playerManager;

			public PlayerManagerWrapper(int id)
			{
				this.id = id;
				playerManager = context.AddComponent<PlayerManager>();
			}
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
	}
}
