using UnityEngine;
using UnityEditor;
using NUnit.Framework;
using SimpleJSON;
using System;  
using System.Collections;
using MapFeatures;

namespace AIMMOUnityTest
{
	[TestFixture]
	internal class MapFeatureManagerTest
	{
		private static string mapFeatureDataJson = @" {
			""x"": ""1"",
			""y"": ""2"",
			""sprite"": {
				""path"" : ""Cobbles-400x317-Isometric-top"",
				""width"" : ""5"",
				""height"" : ""6""
    		}
		}";
		
		private static MapFeatureData mapFeatureData = new MapFeatureData(
			JSON.Parse(mapFeatureDataJson));

		public class ConcreteMapFeatureManager : MapFeatureManager
		{
			public bool drawCalled = false;

			public override string MapFeatureId(string id)
			{
				return id;
			}
				
			public override void Draw(GameObject mapFeature, Sprite mapFeatureSprite)
			{	
				drawCalled = true;
			}
		}

		public class MapFeatureManagerWrapper 
		{
			public string id;
			private GameObject context = new GameObject();
			public ConcreteMapFeatureManager mapFeatureManager;

			public MapFeatureManagerWrapper(string id)
			{
				this.id = id;
				mapFeatureManager = context.AddComponent<ConcreteMapFeatureManager>();
			}
		}

		[Test]
		public void TestCreatingMapFeatureCallsDraw() 
		{
			var wrapper = new MapFeatureManagerWrapper("id1");
			var mapFeatureManager = wrapper.mapFeatureManager;

			Assert.IsFalse(mapFeatureManager.drawCalled);
			Assert.IsTrue(mapFeatureManager.Create(wrapper.id, mapFeatureData));
			Assert.IsTrue(mapFeatureManager.drawCalled);
		}

		[Test]
		public void TestCreatingMapFeatureAddsGameObject() 
		{
			var wrapper = new MapFeatureManagerWrapper("id2");
			var mapFeatureManager = wrapper.mapFeatureManager;

			GameObject go = GameObject.Find(wrapper.id);
			Assert.IsNull(go);

			Assert.IsTrue(mapFeatureManager.Create(wrapper.id, mapFeatureData));

			go = GameObject.Find(wrapper.id);
			Assert.IsNotNull(go);
		}
			
		[Test]
		public void TestCreatingMapFeatureAddsComponents() 
		{
			var wrapper = new MapFeatureManagerWrapper("id3");
			var mapFeatureManager = wrapper.mapFeatureManager;

			Assert.IsTrue(mapFeatureManager.Create(wrapper.id, mapFeatureData));
			GameObject go = GameObject.Find(wrapper.id);

			Assert.IsNotNull(go.GetComponent<IsometricPosition>());
			Assert.AreEqual(
				go.transform.rotation, 
				Quaternion.Euler(0.0f, 0.0f, 0.0f));

			IsometricPosition component = go.GetComponent<IsometricPosition>();
			Vector2 position = new Vector2(1.0f, 2.0f);

			Assert.AreEqual(component.Vector(), position);
		}

		[Test]
		public void TestCreatingAMapFeatureWithTheSameIdReturnsTrue()
		{
			var wrapper = new MapFeatureManagerWrapper("id3");
			var mapFeatureManager = wrapper.mapFeatureManager;

			Assert.IsTrue(mapFeatureManager.Create(wrapper.id, mapFeatureData));
			Assert.IsTrue(mapFeatureManager.Create(wrapper.id, mapFeatureData));
		}

		[Test]
		public void TestDeleteDestroysMapFeature()
		{
			var wrapper = new MapFeatureManagerWrapper("id3");
			var mapFeatureManager = wrapper.mapFeatureManager;

			Assert.IsTrue(mapFeatureManager.Create(wrapper.id, mapFeatureData));
			GameObject gameObject = GameObject.Find(wrapper.id);
			Assert.IsNotNull(gameObject);

			Assert.IsTrue(mapFeatureManager.Delete(wrapper.id));

			Assert.IsNull(GameObject.Find(wrapper.id));
		}
	}
}
