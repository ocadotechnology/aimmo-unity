using UnityEngine;
using NUnit.Framework;
using MapFeatures.Obstacles;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class ObstacleGeneratorTests
    {
        [Test]
        public void TestGenerateObstacleFromDTO()
        {
            ObstacleDTO obstacleDTO = new ObstacleDTO();
            obstacleDTO.location = new Location(-4, -4);
            obstacleDTO.width = 2;
            obstacleDTO.height = 6;
            obstacleDTO.type = "wall";
            GameObject obstacleParent = new GameObject();

            GameObject generatedObstacle = ObstacleGenerator.GenerateObstacle(obstacleDTO, obstacleParent.transform);

            Assert.IsNotNull(generatedObstacle);
            Assert.AreEqual(obstacleParent.transform, generatedObstacle.transform.parent);
            Assert.AreEqual("Obstacle", generatedObstacle.tag);
            Assert.AreEqual(-3.5f, generatedObstacle.transform.position.x, 0.01f);
            Assert.AreEqual(-1.5f, generatedObstacle.transform.position.z, 0.01f);
        }

        [Test]
        public void TestGenerateObstacleFromPrefab()
        {
            string resource = "Prefabs/Obstacles/obstacle_future_wall";
            GameObject obstaclePrefab = Resources.Load<GameObject>(resource);
            GameObject obstacleParent = new GameObject();

            GameObject generatedObstacle = ObstacleGenerator.GenerateObstacle(obstaclePrefab, obstacleParent.transform);

            Assert.IsNotNull(generatedObstacle);
            Assert.AreEqual(obstacleParent.transform, generatedObstacle.transform.parent);
            Assert.AreEqual("Obstacle", generatedObstacle.tag);
            Assert.AreEqual(0.5f, generatedObstacle.transform.position.x, 0.01f);
            Assert.AreEqual(0.5f, generatedObstacle.transform.position.z, 0.01f);
        }

        [Test]
        public void TestAdjustedLocation()
        {
            ObstacleDTO obstacleDTO = new ObstacleDTO();
            obstacleDTO.location = new Location(-4, -4);
            obstacleDTO.width = 2;
            obstacleDTO.height = 6;
            Vector2 adjustedLocation = ObstacleGenerator.GetAdjustedLocation(obstacleDTO);
            Assert.AreEqual(-3.5f, adjustedLocation.x, 0.01f);
            Assert.AreEqual(-1.5f, adjustedLocation.y, 0.01f);
        }


    }
}
