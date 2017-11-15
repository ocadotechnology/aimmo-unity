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
        bool CreatePlayer(int id, PlayerData playerData);
        bool DeletePlayer(int id);
        bool UpdatePlayer(int id, PlayerData playerData);
    }

    public class PlayerManager : MonoBehaviour, IPlayerManager
    {
        public bool CreatePlayer(int id, PlayerData playerData)
        {
            // It might have already been created.
            if (GameObject.Find(PlayerId(id)) != null)
                return true;

            // Generate sphere.
            GameObject player = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            if (player == null)
                return false;

            player.tag = "Avatar";
            player.name = PlayerId(id);
            player.AddComponent<IsometricPosition>().Set(playerData.x, playerData.y);
            player.AddComponent<PlayerController>();

            // Assign colour.
            Color playerColour;
            ColorUtility.TryParseHtmlString(playerData.colour, out playerColour);
            player.GetComponent<Renderer>().material.color = playerColour;

            // Add score text.
            string initialScore = Convert.ToString(playerData.score);
            player.AddComponent<PlayerScoreText>().SetScore(initialScore);

            // Add health bar.
            player.AddComponent<PlayerHealthBar>().SetHealthPoints(playerData.health);

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

        public bool UpdatePlayer(int id, PlayerData playerData)
        {
            GameObject playerToUpdate = GameObject.Find(PlayerId(id));
            if (playerToUpdate == null)
                return false;

            PlayerController controller = playerToUpdate.GetComponent<PlayerController>();
            if (controller == null)
                return false;

            // The controller will change the position, score and health.
            controller.SetNextState(playerData);

            return true;
        }

        public string PlayerId(int id)
        {
            return "player" + Convert.ToString(id);
        }
    }
}