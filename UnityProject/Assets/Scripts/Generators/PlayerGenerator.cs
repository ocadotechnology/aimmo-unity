using UnityEngine;
using Players;

public class PlayerGenerator : MonoBehaviour
{
    public static Material[] materials = Resources.LoadAll<Material>("Materials/Players");
    static GameObject characterPrefab = Resources.Load<GameObject>("Prefabs/Players/player_dee");
    static GameObject markerPrefab = Resources.Load<GameObject>("Prefabs/Players/player_arrow");
    public static int numberOfSkins = materials.Length;
    private static GameObject playersFolder;

    void Awake()
    {
        playersFolder = GameObject.Find("Players");
    }

    public static GameObject GeneratePlayer(GameObject playerPrefab, GameObject playerFolder = null)
    {
        playerFolder = playerFolder ?? playersFolder;

        GameObject player = Object.Instantiate(
                                playerPrefab, 
                                Vector3.zero, 
                                Quaternion.identity) as GameObject;
        player.transform.SetParent(playerFolder.transform, false);

        return player;
    }

    public static GameObject GeneratePlayer(PlayerDTO playerDTO, GameObject playerFolder = null)
    {
        playerFolder = playerFolder ?? playersFolder;

        GameObject player = Object.Instantiate(
                                PlayerGenerator.characterPrefab,
                                new Vector3(playerDTO.location.x, 0, playerDTO.location.y),
                                Quaternion.identity) as GameObject;
        
        player.transform.SetParent(playerFolder.transform, false);
        player.transform.Find("Dee").GetComponent<Renderer>().material = PlayerGenerator.mapIDToSkin(playerDTO.id);

        return player;            
    }

    public static bool AppendMarker(GameObject player)
    {
        GameObject marker = Object.Instantiate(PlayerGenerator.markerPrefab,
                                               new Vector3(0, 1.1f, 0),
                                               Quaternion.identity) as GameObject;

        marker.transform.SetParent(player.transform, false);

        return false;
    }

    public static Material mapIDToSkin(int playerID)
    {
        return PlayerGenerator.materials[playerID % numberOfSkins];
    }
}

