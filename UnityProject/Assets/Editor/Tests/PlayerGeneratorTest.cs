using System;
using UnityEngine;
using NUnit.Framework;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class PlayerGeneratorTest
    {
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
