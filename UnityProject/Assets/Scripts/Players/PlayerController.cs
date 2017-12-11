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
            //MARIA'S MOVEMENT CODE. DON'T REMOVE
            // If the player's square needs to change and the player hasn't hit next square yet
            if (playerIsMoving && transform.localPosition.x != nextPosition.x && transform.localPosition.y != nextPosition.y){
                // Activate animation
                anim.SetInteger ("AnimParam", 1);

                // Turning the player
                if (orientation == "north"){
                    gameObject.transform.eulerAngles = new Vector3(0, 90, 0);
                    velocity = new Vector3(speed, 0, 0);
                }

                // negative x axix
                else if (orientation == "south"){
                    gameObject.transform.eulerAngles = new Vector3(0, -90, 0);
                    velocity = new Vector3(-speed, 0, 0);
                }

                // positive z axix
                else if (orientation == "east"){
                    gameObject.transform.eulerAngles = new Vector3(0, 0, 0);
                    velocity = new Vector3(0, 0, speed);
                }

                // negative z axix
                else if (orientation == "west"){
                    gameObject.transform.eulerAngles = new Vector3(0, 180, 0);
                    velocity = new Vector3(0, 0, -speed);
                }
                gameObject.transform.localPosition += velocity * Time.deltaTime;
            }

            // Deactivate animation
            else{
                velocity = new Vector3(0, 0, 0);
                anim.SetInteger ("AnimParam", 0);
            }
            
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

            //playerIsMoving checks if the player has to move to another square
            playerIsMoving = PositionChange() ? true : false;

            /*
            if (playerIsMoving)
            {
                gameObject.transform.localPosition = nextPosition;
            }*/

            // Update the health, score & orientation.
            health = nextState.health;
            score = nextState.score;
            orientation = nextState.orientation;
        }

        private bool PositionChange()
        {
            if (currPosition.x == nextPosition.x && currPosition.y == nextPosition.y)
                return false;

            return true;
        }
    }
}