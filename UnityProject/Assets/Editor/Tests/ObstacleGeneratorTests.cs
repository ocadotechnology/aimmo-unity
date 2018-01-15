using UnityEngine;
using NUnit.Framework;
using MapFeatures.Obstacles;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class ObstacleGeneratorTests
    {
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
