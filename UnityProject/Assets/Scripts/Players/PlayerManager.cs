using System;
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

        public bool CreatePlayer(PlayerDTO playerDTO)
        {
            // It might have already been created.
            if (GameObject.Find(PlayerId(playerDTO.id)) != null)
                return true;

            // Generate sphere.
            GameObject player = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            if (player == null)
                return false;

            player.tag = PLAYER_TAG;
            player.name = PlayerId(playerDTO.id);
            player.AddComponent<IsometricPosition>()
                  .Set(playerDTO.location.x, playerDTO.location.y);
            player.AddComponent<PlayerController>();

            // Add score text.
            string initialScore = Convert.ToString(playerDTO.score);
            player.AddComponent<PlayerScoreText>().SetScore(initialScore);

            // Add health bar.
            player.AddComponent<PlayerHealthBar>().SetHealthPoints(playerDTO.health);

            return true;
        }

        public bool DeletePlayer(int id)
        {
            GameObject playerToDestroy = GameObject.Find(PlayerId(id));
            if (playerToDestroy == null)
                return false;

            Destroy(playerToDestroy);

            return true;
        }

        public bool UpdatePlayer(PlayerDTO playerDTO)
        {
            GameObject playerToUpdate = GameObject.Find(PlayerId(playerDTO.id));
            if (playerToUpdate == null)
                return false;

            PlayerController controller = playerToUpdate.GetComponent<PlayerController>();
            if (controller == null)
                return false;

            // The controller will change the position, score and health.
            controller.SetNextState(playerDTO);

            return true;
        }

        public void OverwritePlayersState(PlayerDTO[] players) {
            //RemoveAllPlayers();
            foreach (PlayerDTO player in players) {
                if (GameObject.Find(PlayerId(player.id)) == null)
                {
                    CreatePlayer(player);
                } else 
                {
                    UpdatePlayer(player);
                }
            }
        }

        private void RemoveAllPlayers()
        {
            GameObject[] players = GameObject.FindGameObjectsWithTag(PLAYER_TAG);
            foreach (GameObject player in players) {
                Destroy(player);
            }
        }

        public string PlayerId(int id)
        {
            return "player" + Convert.ToString(id);
        }
    }
}