using System;
using UnityEngine;


namespace Players
{

    /* Handles the avatar movement. This script is attached to each of the players.
     */

    public class PlayerController : MonoBehaviour
    {
        // General movement variables.
        private const float speed = 5.0f;
        private const float moveInterval = 0.5f;

        private float startTime;

        private PlayerData nextState;
        private Vector2 currPosition;
        private Vector2 nextPosition;

        // Initialisation.
        public void Awake()
        {
            startTime = Time.time;
            currPosition = transform.position;
            //nextState = new PlayerData(transform.position);
        }

        // Move the player to next position.
        public void Update()
        {
            // TODO: Rotation transition. Maybe an animation?
            float step = (Time.time - startTime) * speed;

            if (step < moveInterval)
            {
                // Player is moving.
                transform.GetComponent<IsometricPosition>().Set(
                    Vector2.Lerp(
                        currPosition,
                        nextPosition,
                        step));
            }
            else
            {
                // Player has reached the destination. We reset it to be safe.
                transform.GetComponent<IsometricPosition>().Set(nextPosition);
                currPosition = nextPosition;

                startTime = Time.time;

                // Update score label.
                string scoreText = Convert.ToString(nextState.score);
                transform.GetComponent<PlayerScoreText>().SetScore(scoreText);

                // Update healthbar.
                int hp = nextState.health;
                transform.GetComponent<PlayerHealthBar>().SetHealthPoints(hp);
            }
        }

        // Set next destination.
        public void SetNextState(PlayerData playerData)
        {
            nextState = playerData;

            transform.GetComponent<IsometricPosition>().Set(nextPosition);
            nextPosition = new Vector2(nextState.x, nextState.y);
        }

    }
}