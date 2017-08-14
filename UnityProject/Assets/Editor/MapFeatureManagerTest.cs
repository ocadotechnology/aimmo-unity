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
		private static string id = "test1";

		public class ConcreteMapFeatureManager : MapFeatureManager
		{
			public bool drawCalled = false;

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
			var mapFeatureManager = new ConcreteMapFeatureManager ();

			Assert.IsFalse (mapFeatureManager.drawCalled);
			mapFeatureManager.Create (id, mfd);
			Assert.IsTrue (mapFeatureManager.drawCalled);
		}

		[Test]
		public void TestCreatingMapFeatureAddsGameObject() {
		}
	}
}