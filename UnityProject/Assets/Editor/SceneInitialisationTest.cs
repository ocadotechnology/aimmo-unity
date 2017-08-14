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
		public void TestCameraIsInitialisedWithCorrectRotation()
		{
			Assert.IsNotNull(parentCamera);

			Vector3 cameraRotation = parentCamera.transform.rotation.eulerAngles;

			Assert.IsTrue(
				Mathf.Abs(cameraRotation.x - Constants.CameraRotationXDeg) < epsilon);
			Assert.IsTrue(
				Mathf.Abs(cameraRotation.y - Constants.CameraRotationYDeg) < epsilon);
			Assert.IsTrue(
				Mathf.Abs(cameraRotation.z - Constants.CameraRotationZDeg) < epsilon);
		}

		[Test]
		public void TestWorldControllerHasWorldControlsAndSocketIO()
		{
			Assert.IsNotNull(worldController);

			WorldControls worldControls = worldController.GetComponent<WorldControls>();
			Assert.IsNotNull(worldControls);

			GameObject socketIOController = GameObject.Find("SocketIOController");
			Assert.IsNotNull(socketIOController);
			Assert.IsNotNull(socketIOController.GetComponent<SocketIOController>());
			Assert.AreEqual(socketIOController, worldControls.io);
		}
	}
}
