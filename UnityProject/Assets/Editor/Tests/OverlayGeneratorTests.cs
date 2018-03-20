using UnityEngine;
using NUnit.Framework;
using UnityEditor.SceneManagement;


namespace AIMMOUnityTest
{
    [TestFixture]
    internal class OverlayGeneratorTests
    {
        private void SetUpMainScene()
        {
            EditorSceneManager.OpenScene("Assets/Scenes/Main.unity", OpenSceneMode.Single);
        }

        [Test]
        public void TestGridGeneratedByDTO()
        {
            SetUpMainScene();

            TerrainDTO terrainDTO = new TerrainDTO(81, 2);
            GameObject terrainFolder = new GameObject();
            OverlayGenerator overlayGenerator = new OverlayGenerator(terrainFolder: terrainFolder);

            GameObject generatedGrid = overlayGenerator.GenerateGridForTerrain(terrainDTO);

            Assert.AreEqual(generatedGrid.transform.parent, terrainFolder.transform);
            Assert.AreEqual(generatedGrid.transform.name, "overlay_grid(Clone)");

            Assert.AreEqual(generatedGrid.transform.transform.localPosition.x, 0);
            Assert.AreEqual(generatedGrid.transform.transform.localPosition.y, 0.01f);
            Assert.AreEqual(generatedGrid.transform.transform.localPosition.z, 0);
            Assert.AreEqual(
                generatedGrid.GetComponent<Renderer>().sharedMaterial.mainTextureScale,
                new Vector2(81, 2)
            );
        }
    }
}
