using UnityEngine;
using Players;
using UnitySocketIO;

public class PlayerGenerator : MonoBehaviour
{
    public static Material[] materials = Resources.LoadAll<Material>("Materials/Players");
    static GameObject deePrefab = Resources.Load<GameObject>("Prefabs/Players/player_dee");
    static GameObject markerPrefab = Resources.Load<GameObject>("Prefabs/Players/player_arrow");
    public static int numberOfSkins = materials.Length;
    static GameObject worldController = GameObject.Find("World Controller");
    static SocketIOController io = worldController.GetComponent(typeof(SocketIOController)) as SocketIOController;

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
        player.transform.Find("Dee").GetComponent<Renderer>().material = PlayerGenerator.mapIDToSkin(playerDTO.id);

        if(io == null)
        {
            Debug.LogWarning("SocketIOController object not found!");
        }

        if(io.settings.avatarID == playerDTO.id) 
        {
            PlayerGenerator.AppendMarker(playerDTO.location, player);
        }

        return player;            
    }

    private static bool AppendMarker(Location playerLocation, GameObject playerObject)
    {
        GameObject marker = Object.Instantiate(PlayerGenerator.markerPrefab,
                                               new Vector3(0, 1.1f, 0),
                                               Quaternion.identity) as GameObject;

        marker.transform.SetParent(playerObject.transform, false);

        return false;
    }

    public static Material mapIDToSkin(int playerID)
    {
        return PlayerGenerator.materials[playerID % numberOfSkins];
    }
}

