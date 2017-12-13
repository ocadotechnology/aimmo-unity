using UnityEngine;
using System.Collections;
using Players;

public class PlayerGenerator : MonoBehaviour
{
    static Material[] materials = Resources.LoadAll<Material>("Materials/Players");
    static GameObject deePrefab = Resources.Load<GameObject>("Prefabs/Players/player_dee");

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
        GameObject player = Object.Instantiate(
                                PlayerGenerator.deePrefab,
                                new Vector3(playerDTO.location.x, 0, playerDTO.location.y),
                                Quaternion.identity) as GameObject;
        
        player.transform.SetParent(GameObject.Find("Players").transform, false);
        player.transform.Find("Dee").GetComponent<Renderer>().material = PlayerGenerator.materials[Random.Range(0, materials.Length - 1)];

        return player;            
    }

}

