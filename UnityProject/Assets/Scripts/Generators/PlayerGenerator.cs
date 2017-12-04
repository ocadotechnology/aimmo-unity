using UnityEngine;
using System.Collections;

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
}

