using UnityEngine;
using UnityEditor;
using NUnit.Framework;
using SimpleJSON;

namespace AIMMOUnityTest
{
	[TestFixture]
	internal class MapFeatureManagerTest
	{
		private static string mapFeatureDataJson = @" {
			""x"": ""1"",
			""y"": ""2"",
			""sprite"": {
				""path"" : ""mock_path"",
				""width"" : ""5"",
				""height"" : ""6""
    		}
		}";
		private static MapFeatureData mfd 
			= new MapFeatureData(JSON.Parse(mapFeatureDataJson));

		public class ConcreteMapFeatureManager : MapFeatureManager
		{
			public bool drawCalled = false;
			public string id;

			public ConcreteMapFeatureManager(string id)
			{
				this.id = id;
			}

			override
			public string MapFeatureId(string id)
			{
				return id;
			}

			override
			public void Draw(GameObject mapFeature, Sprite mapFeatureSprite)
			{	
				drawCalled = true;
			}
		}

		[Test]
		public void TestCreatingMapFeatureCallsDraw() {
			var mapFeatureManager = new ConcreteMapFeatureManager ("id1");

			Assert.IsFalse (mapFeatureManager.drawCalled);
			mapFeatureManager.Create (mapFeatureManager.id, mfd);
			Assert.IsTrue (mapFeatureManager.drawCalled);
		}

		[Test]
		public void TestCreatingMapFeatureAddsGameObject() {
			var mapFeatureManager = new ConcreteMapFeatureManager ("id2");

			GameObject go = GameObject.Find(mapFeatureManager.id);
			Assert.IsNull (go);

			mapFeatureManager.Create (mapFeatureManager.id, mfd);

			go = GameObject.Find(mapFeatureManager.id);
			Assert.IsNotNull (go);
		}
			
		[Test]
		public void TestCreatingMapFeatureAddsComponents() {
			var mapFeatureManager = new ConcreteMapFeatureManager ("id3");
		
			mapFeatureManager.Create (mapFeatureManager.id, mfd);
			GameObject go = GameObject.Find(mapFeatureManager.id);

			Assert.IsNotNull (go.GetComponent<IsometricPosition>());
			Assert.AreEqual (go.transform.rotation, Quaternion.Euler(45.0f, 45.0f, 0.0f));

			IsometricPosition component = go.GetComponent<IsometricPosition> ();
			Vector2 position = new Vector2(1.0f, 2.0f);

			Assert.AreEqual (component.Vector(), position);
		}
	}
}