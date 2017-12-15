using System;
using UnityEngine;
using NUnit.Framework;
using MapFeatures.ScoreLocations;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class ScoreGeneratorTest
    {            
        [Test]
        public void TestGenerateScoreFromPrefab()
        {
            GameObject scoreObject = Resources.Load<GameObject>("Prefabs/Scores/score_bluedisk");

            GameObject generatedScore = ScoreGenerator.GenerateScore(scoreObject);

            Assert.AreEqual(0, generatedScore.transform.localPosition.x);
            Assert.AreEqual(0, generatedScore.transform.localPosition.y);
            Assert.AreEqual(0, generatedScore.transform.localPosition.z);

            Assert.AreEqual(generatedScore.transform.parent.name, "Scores");
            Assert.AreEqual(generatedScore.tag, "Score");
        }

        [Test]
        public void TestGenerateScoreFromDTO()
        {
            ScoreLocationDTO scoreDTO = new ScoreLocationDTO();
            Location pickupLocation = new Location(10, 20);
            scoreDTO.location = pickupLocation;

            GameObject generatedScore = ScoreGenerator.GenerateScore(scoreDTO);

            Assert.AreEqual(pickupLocation.x, generatedScore.transform.localPosition.x);
            Assert.AreEqual(0, generatedScore.transform.localPosition.y);
            Assert.AreEqual(pickupLocation.y, generatedScore.transform.localPosition.z);

            Assert.AreEqual(generatedScore.transform.parent.name, "Scores");
            Assert.AreEqual(generatedScore.name, "score_bluedisk_10_20");

            Assert.AreEqual(generatedScore.transform.localPosition.x, 10);
            Assert.AreEqual(generatedScore.transform.localPosition.z, 20);
            Assert.AreEqual(generatedScore.transform.localPosition.y, 0);

            Assert.AreEqual(generatedScore.tag, "Score");
        }
    }
}
