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
        private bool positionChangeNeeded = false, jumpNeeded = false;
                

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
            if (Math.Abs(transform.localPosition.x - nextPosition.x) <= 0.05 && Math.Abs(transform.localPosition.z - nextPosition.z) <= 0.05)
            {
                gameObject.transform.localPosition = nextPosition;
                positionChangeNeeded = false;
            }
            if (jumpNeeded)
            {
                gameObject.transform.localPosition = nextPosition;
                jumpNeeded = false;
                positionChangeNeeded = false;
                return;
            }
            // If the player's location needs to change and the player hasn't hit next square yet
            if (positionChangeNeeded) {
                // Activate animation
                anim.SetInteger ("AnimParam", 1);

                if (nextState.orientationType == Orientation.South){
                    velocity = new Vector3(0, 0, -speed);
                    transform.eulerAngles = OrientationMethods.VectorForOrientation(Orientation.South);
                }
                if (nextState.orientationType == Orientation.North){
                    velocity = new Vector3(0, 0, speed);
                    transform.eulerAngles = OrientationMethods.VectorForOrientation(Orientation.North);
                }
                if (nextState.orientationType == Orientation.West){
                    velocity = new Vector3(-speed, 0, 0);
                    transform.eulerAngles = OrientationMethods.VectorForOrientation(Orientation.West);
                }
                if (nextState.orientationType == Orientation.East){
                    velocity = new Vector3(speed, 0, 0);
                    transform.eulerAngles = OrientationMethods.VectorForOrientation(Orientation.East);
                }
            }
            else{
                // Deactivate animation
                velocity = new Vector3(0, 0, 0);
                anim.SetInteger ("AnimParam", 0);
            }

            gameObject.transform.localPosition += velocity * Time.deltaTime;

        }

        /*
         * Set next position, health, score, etc. Makes it ready to be updated next
         * time Unity calls Update() above.
         */
        public void SetNextState(PlayerDTO playerDTO)
        {
            nextState = playerDTO;

            // Keep track of current position and note the next one.
            currPosition = gameObject.transform.localPosition;
            nextPosition = new Vector3(nextState.location.x, 0, nextState.location.y);

            // PositionChangeNeded checks if the player has to move to another square
            positionChangeNeeded = PositionChangeNeeded();
            jumpNeeded = IsJumpNeeded();
            // Update the health, score & orientation.
            health = nextState.health;
            score = nextState.score;
        }

        private bool PositionChangeNeeded()
        {
            return !(currPosition.x == nextPosition.x && currPosition.z == nextPosition.z);
        }

        private bool IsJumpNeeded()
        {
            return Math.Pow(gameObject.transform.localPosition.x - nextPosition.x, 2) + 
                       Math.Pow(gameObject.transform.localPosition.z - nextPosition.z, 2) > 1.05 * 1.05;
        }
    }
}