using System;
using UnityEngine;
using NUnit.Framework;
using Players;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class PlayerManagerTest
    {
        GameObject parentStub;
        GameObject playersFolder;
        PlayerManager playerManager;
        PlayerDTO playerDTO;
        PlayerDTO player2DTO;

        [SetUp]
        public void SetUpPlayerManager()
        {
            parentStub = new GameObject("ParentStub");
            playersFolder = new GameObject("PlayersFolder");
            playerManager = parentStub.AddComponent<PlayerManager>();
            playerManager.parentPlayerFolder = playersFolder;
        }

        [SetUp]
        public void SetUpPlayerDTO()
        {
            playerDTO = new PlayerDTO();
            playerDTO.id = 1;

            player2DTO = new PlayerDTO();
            player2DTO.id = 2;
        }

        [Test]
        public void TestCorrectPlayerAddedWithMarker()
        {
            // Set (mock) desired ID to 2
            playerManager.playersCurrentAvatarID = 2;

            playerManager.CreatePlayer(playerDTO);

            GameObject player = playersFolder.transform.Find("player1").gameObject;
            Assert.IsNotNull(player);
            Assert.AreEqual(player.tag, "Avatar");

            playerManager.CreatePlayer(player2DTO);

            GameObject player2 = playersFolder.transform.Find("player2").gameObject;
            Assert.IsNotNull(player2);
            Assert.AreEqual(player2.tag, "Avatar");


            // We expect no marker on player1
            Assert.IsNull(player.transform.Find("player_arrow(Clone)"));

            GameObject marker = player2.transform.Find("player_arrow(Clone)").gameObject;
            Assert.IsNotNull(marker);
        }
    }
}
