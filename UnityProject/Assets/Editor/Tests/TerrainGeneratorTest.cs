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
        GameObject terrainFolder;
        GameObject terrain;
        GameObject terrainEdge;
        private static float EPSILON = 0.0001f;

        [SetUp]
        public void SetUpTerrainGenerator()
        {
            terrainFolder = new GameObject("TerrainFolder");
            terrain = new GameObject("terrain");
            terrainEdge = new GameObject("terrainEdge");
            generator = new TerrainGenerator(terrainFolder: terrainFolder, terrain: terrain, terrainEdge: terrainEdge);
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
            terrainDTO.width = 21;
            terrainDTO.height = 11;

            terrain = generator.GenerateTerrainMMO(terrainDTO);
            Assert.AreEqual(terrainFolder.transform, terrain.transform.parent);

            Vector3 expectedPosition = new Vector3(0.0f, 0.0f, 0.0f);
            Assert.IsTrue(Vector3.SqrMagnitude(expectedPosition - terrainFolder.transform.localPosition) < EPSILON);

            Vector3 expectedScale = new Vector3(2.1f, 0.1f, 1.1f);
            Assert.IsTrue(expectedScale == terrain.transform.localScale);
        }

        [Test]
        public void TestEvenDimensionsTerrainGenerationMMO()
        {
            terrainDTO.width = 4;
            terrainDTO.height = 4;

            terrain = generator.GenerateTerrainMMO(terrainDTO);
            Assert.AreEqual(terrainFolder.transform, terrain.transform.parent);

            Vector3 expectedPosition = new Vector3(0.5f, 0f, 0.5f);
            Debug.Log(terrainFolder.transform.localPosition);
            Assert.IsTrue(Vector3.SqrMagnitude(expectedPosition - terrainFolder.transform.localPosition) < EPSILON);

            Vector3 expectedScale = new Vector3(0.4f, 0.1f, 0.4f);
            Assert.IsTrue(expectedScale == terrain.transform.localScale);
        }

        [Test]
        public void TestTerrainEdgeDepth()
        {
            terrain = generator.GenerateTerrainMMO(terrainDTO);
            terrainEdge = generator.GenerateTerrainEdgeMMO(terrainDTO);
            Assert.IsTrue(terrainEdge.transform.position.y < terrain.transform.position.y);
        }
    }
}