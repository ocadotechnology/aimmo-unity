using System;
using UnityEngine;
using Players;
using NUnit.Framework;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class PlayerGeneratorTest
    {
        [Test]
        public void TestGeneratePlayerByPrefab()
        {
            GameObject deePrefab = Resources.Load<GameObject>("Prefabs/Players/player_dee");

            GameObject generatedPlayer = PlayerGenerator.GeneratePlayer(deePrefab);

            Assert.AreEqual(0, generatedPlayer.transform.localPosition.x);
            Assert.AreEqual(0, generatedPlayer.transform.localPosition.y);
            Assert.AreEqual(0, generatedPlayer.transform.localPosition.z);

            Assert.AreEqual(generatedPlayer.transform.parent.name, "Players");
        }

        [Test]
        public void TestGeneratePlayerByDTO()
        {
            PlayerDTO playerDTO = new PlayerDTO();
            Location playerLocation = new Location(10, 20);
            playerDTO.location = playerLocation;
            playerDTO.id = 1;

            GameObject generatedPlayer = PlayerGenerator.GeneratePlayer(playerDTO);

            Assert.AreEqual(playerLocation.x, generatedPlayer.transform.localPosition.x);
            Assert.AreEqual(0, generatedPlayer.transform.localPosition.y);
            Assert.AreEqual(playerLocation.y, generatedPlayer.transform.localPosition.z);

            int noOfSkins = PlayerGenerator.numberOfSkins;
            Material expectedSkin = PlayerGenerator.materials[playerDTO.id % noOfSkins];
            Material returnedSkin = generatedPlayer.transform.Find("Dee").GetComponent<Renderer>().sharedMaterial;

            Assert.IsInstanceOf<Material>(returnedSkin);
            Assert.AreEqual(expectedSkin, returnedSkin);
            Assert.AreEqual(generatedPlayer.transform.parent.name, "Players");
        }

        [Test]
        public void TestPlayerGeneratorMapIDToSkin()
        {
            // ID 1 to Material 1
            Material expectedSkin = PlayerGenerator.materials[1];
            int playerID = 1;

            Material receivedSkin = PlayerGenerator.mapIDToSkin(playerID);

            Assert.AreSame(expectedSkin, receivedSkin);

            // ID 3 to Material 3
            expectedSkin = PlayerGenerator.materials[3];
            playerID = 3;

            receivedSkin = PlayerGenerator.mapIDToSkin(playerID);

            Assert.AreSame(expectedSkin, receivedSkin);

            // ID materials.Length to Material 0
            expectedSkin = PlayerGenerator.materials[0];
            playerID = PlayerGenerator.numberOfSkins;

            receivedSkin = PlayerGenerator.mapIDToSkin(playerID);

            Assert.AreSame(expectedSkin, receivedSkin);

            // ID materials.Length + 1 to Material 1
            expectedSkin = PlayerGenerator.materials[1];
            playerID = PlayerGenerator.numberOfSkins + 1;

            receivedSkin = PlayerGenerator.mapIDToSkin(playerID);

            Assert.AreSame(expectedSkin, receivedSkin);
        }
    }
}
