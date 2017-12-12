using System;
using System.Collections.Generic;
using UnityEngine;

namespace Players
{

    /* The struct PlayerData holds all the necessary information to create or update
     * a player in the scene. 
     * 
     * The appearance will probably change in the future.
     */

    [Serializable]
    public struct PlayerData
    {
        public float x, y, rotation;
        public int id, score, health;
        public string colour;

        // Construct from just position.
        public PlayerData(int id, Vector2 position)
        {
            this.id = id;
            this.x = position.x;
            this.y = position.y;
            this.rotation = 0.0f;
            this.score = 0;
            this.health = 5;
            this.colour = "";
        }
    }

    /* Holds the methods to Create / Delete / Update players in a similar fashion to
     * MapFeautre.
     */

    public interface IPlayerManager
    {
        bool CreatePlayer(PlayerDTO playerDTO);

        bool DeletePlayer(int id);

        bool UpdatePlayer(PlayerDTO playerDTO);
    }

    public class PlayerManager : MonoBehaviour, IPlayerManager
    {
        public static String PLAYER_TAG = "Avatar";
        Dictionary<string, GameObject> activePlayers = new Dictionary<string, GameObject>();

        public bool CreatePlayer(PlayerDTO playerDTO)
        {
            // It might have already been created.
            if (activePlayers.ContainsKey(PlayerId(playerDTO.id)))
                return true;

            GameObject player = PlayerGenerator.GeneratePlayer(playerDTO);

            if (player == null)
                return false;

            player.tag = PLAYER_TAG;
            player.name = PlayerId(playerDTO.id);
            player.AddComponent<PlayerController>();

            activePlayers.Add(PlayerId(playerDTO.id), player);

			//TODO: Random texture test

			//allow Resource.LoadAll to just return a list of objects (filtered to only have materials in)
			Material material = (Material)Resources.LoadAll("Materials/Players", typeof(Material))[UnityEngine.Random.Range(0, 100)];

			player.GetComponent<Renderer>().material = material;


            return true;
        }

        public bool DeletePlayer(int id)
        {
            if (!activePlayers.ContainsKey(PlayerId(id)))
                return false;

            Destroy(activePlayers[PlayerId(id)]);

            activePlayers.Remove(PlayerId(id));

            Debug.Log("Deleted player");

            return true;
        }

        public bool UpdatePlayer(PlayerDTO playerDTO)
        {
            GameObject playerToUpdate = activePlayers[PlayerId(playerDTO.id)];

            if (playerToUpdate == null)
                return false;

            PlayerController controller = playerToUpdate.GetComponent<PlayerController>();
            if (controller == null)
                return false;

            // The controller will change the position, score and health.
            controller.SetNextState(playerDTO);

            return true;
        }

        /*
		 * Given the PlayerDTO array, UpdatePlayersState will decide whether a new 
		 * player creation is required, or an update instead.
		 */
        public void UpdatePlayersState(PlayerDTO[] players)
        {
            foreach (PlayerDTO player in players)
            {
                if (!activePlayers.ContainsKey(PlayerId(player.id)))
                {
                    CreatePlayer(player);
                }
                else
                {
                    UpdatePlayer(player);
                }
            }
        }

        private void RemoveAllPlayers()
        {
            foreach (string player in activePlayers.Keys)
            {
                Destroy(activePlayers[player]);
            }

            activePlayers.Clear();

            Debug.Log("Removed all players");
        }

        public string PlayerId(int id)
        {
            return "player" + Convert.ToString(id);
        }
    }
}