using UnityEngine;
using System.Collections;
using Players;

public class PlayerGenerator : MonoBehaviour
{
    public static GameObject GeneratePlayer(GameObject playerPrefab)
    {
        GameObject player = Object.Instantiate(
                                playerPrefab, 
                                Vector3.zero, 
                                Quaternion.identity) as GameObject;
        player.transform.SetParent(GameObject.Find("Players").transform, false);

        return player;
    }

    public static GameObject GeneratePlayer(PlayerDTO playerDTO)
    {
        GameObject deePrefab = Resources.Load<GameObject>("Prefabs/Players/player_dee");

        GameObject player = Object.Instantiate(
                                deePrefab,
                                new Vector3(playerDTO.location.x, 0, playerDTO.location.y),
                                Quaternion.identity) as GameObject;
        player.transform.SetParent(GameObject.Find("Players").transform, false);

        return player;            
    }

}

