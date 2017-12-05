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
        private Vector3 currPosition;
        private Vector3 nextPosition;
        private int health;
        private int score;

        // Temporary variables
        private string orientation = "north";
        private bool playerIsMoving = false;
                

        // Initialisation.
        public void Awake()
        {
            Debug.Log("awake called");
            startTime = Time.time;
            currPosition = transform.position;

            controller = GetComponent<CharacterController>();
            anim = GetComponentInChildren<Animator>();
        }

        // Move the player to next position.
        public void Update()
        {
            /* MARIA'S MOVEMENT CODE. DON'T REMOVE
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
            */
        }

        /*
         * Set next position, health, score, etc. Makes it ready to be updated next
         * time Unity calls Update() above.
         */
        public void SetNextState(PlayerDTO playerDTO)
        {
            nextState = playerDTO;

            // Keep track of current position and note the next one.
            currPosition = gameObject.transform.position;
            nextPosition = new Vector3(nextState.location.x, 0, nextState.location.y);

            playerIsMoving = IsPlayerMoving() ? true : false;

            // Temporary solution to movement before we have animations:
            if (playerIsMoving)
            {
                gameObject.transform.localPosition = nextPosition;
            }

            // Update the health, score & orientation.
            health = nextState.health;
            score = nextState.score;
            orientation = nextState.orientation;
        }

        private bool IsPlayerMoving()
        {
            if (currPosition.x == nextPosition.x && currPosition.y == nextPosition.y)
                return false;

            return true;
        }
    }
}