using UnityEngine;
using UnityEngine.TestTools;
using NUnit.Framework;
using System.Collections;
using Players;

public class PlayerControllerTests
{
    GameObject parentStub;
    GameObject playersFolder;
    PlayerManager playerManager;
    PlayerDTO playerDTO;
    PlayerDTO player2DTO;
    GameObject player;

    [SetUp]
    public void SetUpPlayerManager()
    {
        parentStub = new GameObject("ParentStub");
        playersFolder = new GameObject("PlayersFolder");
        playerManager = parentStub.AddComponent<PlayerManager>();
        playerManager.parentPlayerFolder = playersFolder;
        player = PlayerGenerator.GeneratePlayer(new PlayerDTO
        {
            id = 0,
            location = new Location(5, 5),
            orientation = "north"
        }, playersFolder);
        player.AddComponent<PlayerController>();

    }

    [UnityTest]
    public IEnumerator PlayerGoesToCorrectSquare()
    {
        var controller = player.GetComponent<PlayerController>();

        controller.SetNextState(new PlayerDTO
        {
            id = 0,
            location = new Location(4, 5),
            orientation = "east"
        });
        yield return new WaitForSeconds(2);
        Assert.AreEqual(player.transform.localPosition.x, 4f);
        Assert.AreEqual(player.transform.localPosition.z, 5f);
    }

    [UnityTest]
    public IEnumerator PlayerGoesInCorrectDirection()
    {
        var controller = player.GetComponent<PlayerController>();
        Assert.NotNull(controller);
        controller.SetNextState(new PlayerDTO
        {
            id = 0,
            location = new Location(4, 5),
            orientation = "east"
        });
        yield return new WaitForFixedUpdate();
        Assert.Less(player.transform.localPosition.x, 5f);
        Assert.AreEqual(player.transform.localPosition.z, 5f);
    }

    //[TestCase(3, 5)]
    //[TestCase(7, 5)]
    //[TestCase(5, 3)]
    //[TestCase(5, 7)]
    //[TestCase(6, 6)]
    //[TestCase(6, 4)]
    //[TestCase(4, 6)]
    //[TestCase(4, 4)]
    [UnityTest]
    public IEnumerator PlayerJumpsIfTooFar()
    {
        int[] xs = { 3, 7, 5, 5, 6, 6, 4, 4, 13 };
        int[] ys = { 5, 5, 3, 7, 6, 4, 6, 4, 13 };
        for (int i = 0; i < xs.Length; i++) 
        {
            var controller = player.GetComponent<PlayerController>();

            controller.SetNextState(new PlayerDTO
            {
                id = 0,
                location = new Location(xs[i], ys[i]),
                orientation = "east"
            });
            yield return new WaitForFixedUpdate();
            Assert.AreEqual(player.transform.localPosition.x, xs[i]);
            Assert.AreEqual(player.transform.localPosition.z, ys[i]);

        }
    }
}
