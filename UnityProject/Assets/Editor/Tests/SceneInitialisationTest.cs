using System;  
using System.Collections;
using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnitySocketIO;
using NUnit.Framework;

namespace AIMMOUnityTest
{
	[TestFixture]
	internal class SceneInitialisationTest
	{
		// For float comparisons.
		private const float epsilon = 0.00001f;

		// Game objects.
		private GameObject parentCamera;
		private GameObject worldController;

		[SetUp]
		public void InitialiseScene()
		{
			EditorSceneManager.SetActiveScene(
				EditorSceneManager.OpenScene("Assets/Scenes/Main.unity"));
			GameObject[] allGameObjects = 
				EditorSceneManager.GetActiveScene().GetRootGameObjects();

			foreach (GameObject gameObject in allGameObjects) 
			{
				if (gameObject.name.Equals("Parent Camera"))
					parentCamera = gameObject;
				else if (gameObject.name.Equals("World Controller"))
					worldController = gameObject;
			}
		}

		[Test]
		public void TestWorldControllerHasWorldControlsAndSocketIO()
		{
			Assert.IsNotNull(worldController);

			WorldControls worldControls = 
				worldController.GetComponent<WorldControls>();
			Assert.IsNotNull(worldControls);

			GameObject socketIOController = GameObject.Find("SocketIOController");
			Assert.IsNotNull(socketIOController);

			SocketIOController socketIOScript = 
				socketIOController.GetComponent<SocketIOController>();
			Assert.IsNotNull(socketIOScript);
			Assert.AreEqual(socketIOScript, worldControls.io);
		}
	}
}
