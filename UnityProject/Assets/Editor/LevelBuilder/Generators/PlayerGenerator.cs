using UnityEngine;
using System.Collections;

public class PlayerGenerator : MonoBehaviour
{
    public static void GeneratePlayer(GameObject playerPrefab)
    {
        GameObject pickup = Object.Instantiate(
                                playerPrefab, 
                                Vector3.zero, 
                                Quaternion.identity) as GameObject;
        pickup.transform.SetParent(GameObject.Find("Players").transform, false);
    }
}

