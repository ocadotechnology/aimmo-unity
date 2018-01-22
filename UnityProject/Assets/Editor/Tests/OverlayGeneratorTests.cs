using UnityEngine;
using NUnit.Framework;
using MapFeatures.Pickups;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class OverlayGeneratorTests
    {
        [Test]
        public void TestGridGeneratedByDTO()
        {
            TerrainDTO terrainDTO = new TerrainDTO(81, 2);
            OverlayGenerator overlayGenerator = new OverlayGenerator();

            GameObject generatedGrid = overlayGenerator.GenerateGridForTerrain(terrainDTO);

            Assert.AreEqual(generatedGrid.transform.parent.name, "Terrain");
            Assert.AreEqual(generatedGrid.transform.name, "overlay_grid");

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
