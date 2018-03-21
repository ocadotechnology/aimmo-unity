using System;
using UnityEngine;
using NUnit.Framework;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine.UI;
using System.Collections;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class CanvasTests
    {
        [SetUp]
        public void SetUpMainScene()
        {
            EditorSceneManager.OpenScene("Assets/Scenes/Main.unity", OpenSceneMode.Single);
        }

        [Test]
        public void TestMainSceneHasCompass()
        {
            // Main game object.
            GameObject compass = GameObject.Find("Compass");

            // All relevant components.
            RectTransform rectTransform = compass.GetComponent(typeof(RectTransform)) as RectTransform;
            CanvasRenderer canvasRenderer = compass.GetComponent(typeof(CanvasRenderer)) as CanvasRenderer;
            Image image = compass.GetComponent(typeof(Image)) as Image;

            Assert.NotNull(compass);
            Assert.NotNull(rectTransform);
            Assert.NotNull(canvasRenderer);
            Assert.NotNull(image);
        }

        [Test]
        public void TestMainSceneCompassHasCorrectPositionRelativeToAnchor()
        {
            GameObject compass = GameObject.Find("Compass");

            RectTransform rectTransform = compass.GetComponent(typeof(RectTransform)) as RectTransform;

            Vector3 expectedAnchoredPos = new Vector3(64.3114f, 60.00f, -1.00f);
            Vector3 realAnchoredPos = rectTransform.anchoredPosition3D;

            Assert.True(Mathf.Approximately(expectedAnchoredPos.x, realAnchoredPos.x));
            Assert.True(Mathf.Approximately(expectedAnchoredPos.y, realAnchoredPos.y));
            Assert.True(Mathf.Approximately(expectedAnchoredPos.z, realAnchoredPos.z));
        }

        [Test]
        public void TestMainSceneHasCanvasRendererAttatched()
        {
            SetUpMainScene();
            GameObject compass = GameObject.Find("Compass");

            CanvasRenderer canvasRenderer = compass.GetComponent(typeof(CanvasRenderer)) as CanvasRenderer;

            Assert.NotNull(canvasRenderer);
        }

        [Test]
        public void TestMainSceneCompassHasImageScriptAttatchedCorrectly()
        {
            GameObject compass = GameObject.Find("Compass");
            Image image = compass.GetComponent(typeof(Image)) as Image;
            String expectedTextureName = "compass";
            Texture expectedTexture = (Texture) Resources.Load("Images/compass", typeof(Texture));

            Assert.AreEqual(expectedTextureName, image.mainTexture.name);
            Assert.AreEqual(expectedTexture, image.mainTexture);
        }
    }
}
