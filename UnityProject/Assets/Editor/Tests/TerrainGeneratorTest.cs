using System;
using UnityEngine;
using NUnit.Framework;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class TerrainGeneratorTest
    {
        TerrainGenerator generator;
        TerrainDTO terrainDTO;

        [SetUp]
        public void SetUpTerrainGenerator()
        {
            generator = new TerrainGenerator();
        }

        [SetUp]
        public void SetUpTerrainDTO()
        {
            terrainDTO = new TerrainDTO();
        }

        [Test]
        public void TestCalculateHeightFromGameState()
        {
            int southWestY = -20;
            int northEastY = 10;

            GameStateDTO gameState = new GameStateDTO();
            gameState.southWestCorner = new Location(0, southWestY);
            gameState.northEastCorner = new Location(0, northEastY);

            // Row with y=0 is expected too.
            Assert.AreEqual(31, generator.CalculateHeightFromGameState(gameState));
        }

        [Test]
        public void TestCalculateWidthFromGameState()
        {
            int southWestX = -20;
            int northEastX = 10;

            GameStateDTO gameState = new GameStateDTO();
            gameState.southWestCorner = new Location(southWestX, 0);
            gameState.northEastCorner = new Location(northEastX, 0);

            // Row with x=0 is expected too.
            Assert.AreEqual(31, generator.CalculateWidthFromGameState(gameState));
        }

        [Test]
        public void TestOddDimensionsTerrainGenerationMMO()
        {
            // This test will FAIL when dynamic terrain logic will be added, therefore
            // update when this happens. 

            terrainDTO.width = 11;
            terrainDTO.height = 11;

            GameObject terrain = generator.GenerateTerrainMMO(terrainDTO);
            Assert.AreEqual("terrain_lessFlat_default(Clone)", terrain.name);
            Assert.AreEqual("Terrain", terrain.transform.parent.name);

            Vector3 expectedPosition = new Vector3(0, 0, 0);
            Assert.IsTrue(expectedPosition == terrain.transform.localPosition);

            Vector3 expectedScale = new Vector3(1.1f, 0.1f, 1.1f);
            Assert.IsTrue(expectedScale == terrain.transform.localScale);
        }

        [Test]
        public void TestEvenDimensionsTerrainGenerationMMO()
        {
            terrainDTO.width = 4;
            terrainDTO.height = 4;

            GameObject terrain = generator.GenerateTerrainMMO(terrainDTO);
            Assert.AreEqual("terrain_lessFlat_default(Clone)", terrain.name);
            Assert.AreEqual("Terrain", terrain.transform.parent.name);

            Vector3 expectedPosition = new Vector3(0.5f, 0f, 0.5f);
            Assert.IsTrue(expectedPosition == terrain.transform.localPosition);

            Vector3 expectedScale = new Vector3(0.4f, 0.1f, 0.4f);
            Assert.IsTrue(expectedScale == terrain.transform.localScale);
        }
    }
}
