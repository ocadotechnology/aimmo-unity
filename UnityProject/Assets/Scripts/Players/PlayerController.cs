using System;
using UnityEngine;


namespace Players
{

    /* Handles the avatar movement. This script is attached to each of the players.
     */

    public class PlayerController : MonoBehaviour
    {
        // General movement variables.
        private const float speed = 2.0f;
        private Vector3 velocity = new Vector3(0, 0, 0);
        private const float moveInterval = 0.5f;

        private Animator anim;
        private CharacterController controller;

        private float startTime;

        private PlayerDTO nextState;
        private Vector2 currPosition;
        private Vector2 nextPosition;

        // Temporary variables
        public string direction = "north";
        public int playerIsMoving = 0;
                

        // Initialisation.
        public void Awake()
        {
            startTime = Time.time;
            currPosition = transform.position;

            controller = GetComponent<CharacterController>();
            anim = GetComponentInChildren<Animator>();
        }

        // Move the player to next position.
        public void Update()
        {
            /*// TODO: Rotation transition. Maybe an animation?
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
            }*/

            
            if (playerIsMoving == 1){
                anim.SetInteger ("AnimParam", 1);

                // positive x axis
                if (direction == "north"){
                    gameObject.transform.eulerAngles = new Vector3(0, 90, 0);
                    velocity = new Vector3(speed, 0, 0);
                }

                // negative x axix
                else if (direction == "south"){
                    gameObject.transform.eulerAngles = new Vector3(0, -90, 0);
                    velocity = new Vector3(-speed, 0, 0);
                }

                // positive z axix
                else if (direction == "east"){
                    gameObject.transform.eulerAngles = new Vector3(0, 0, 0);
                    velocity = new Vector3(0, 0, speed);
                }

                // negative z axix
                else if (direction == "west"){
                    gameObject.transform.eulerAngles = new Vector3(0, 180, 0);
                    velocity = new Vector3(0, 0, -speed);
                }
            }
            else{
                velocity = new Vector3(0, 0, 0);
                anim.SetInteger ("AnimParam", 0);
            }

            transform.position += velocity * Time.deltaTime;
        }

        // Set next destination.
        public void SetNextState(PlayerDTO playerDTO)
        {
            nextState = playerDTO;

            transform.GetComponent<IsometricPosition>().Set(nextPosition);
            nextPosition = new Vector2(nextState.location.x, nextState.location.y);
        }

    }
}