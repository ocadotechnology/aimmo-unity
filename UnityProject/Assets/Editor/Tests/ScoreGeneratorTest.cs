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
            GameObject scoreParent = new GameObject();
            GameObject generatedScore = ScoreGenerator.GenerateScore(scoreObject, scoreParent.transform);

            Assert.AreEqual(0, generatedScore.transform.localPosition.x);
            Assert.AreEqual(0, generatedScore.transform.localPosition.y);
            Assert.AreEqual(0, generatedScore.transform.localPosition.z);

            Assert.AreEqual(scoreParent.transform, generatedScore.transform.parent);
            Assert.AreEqual("Score", generatedScore.tag);
        }

        [Test]
        public void TestGenerateScoreFromDTO()
        {
            ScoreLocationDTO scoreDTO = new ScoreLocationDTO();
            Location pickupLocation = new Location(10, 20);
            scoreDTO.location = pickupLocation;
            GameObject scoreParent = new GameObject();

            GameObject generatedScore = ScoreGenerator.GenerateScore(scoreDTO, scoreParent.transform);

            Assert.AreEqual(pickupLocation.x, generatedScore.transform.localPosition.x);
            Assert.AreEqual(0, generatedScore.transform.localPosition.y);
            Assert.AreEqual(pickupLocation.y, generatedScore.transform.localPosition.z);

            Assert.AreEqual(scoreParent.transform, generatedScore.transform.parent);
            Assert.AreEqual("score_bluedisk_10_20", generatedScore.name);

            Assert.AreEqual(10, generatedScore.transform.localPosition.x);
            Assert.AreEqual(20, generatedScore.transform.localPosition.z);
            Assert.AreEqual(0, generatedScore.transform.localPosition.y);

            Assert.AreEqual("Score", generatedScore.tag);
        }
    }
}
