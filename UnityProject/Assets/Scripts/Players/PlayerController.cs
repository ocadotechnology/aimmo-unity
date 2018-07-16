using System;
using UnityEngine;

namespace Players
{

    /* Handles the avatar movement. This script is attached to each of the players.
     */

    public class PlayerController : MonoBehaviour
    {
        // General movement variables.
        private Vector3 velocity = new Vector3(0, 0, 0);
        private const float moveInterval = 0.5f;
        private const float speed = 2.0f;
        private const float error = 0.05f;
        private Animator anim;
        private CharacterController controller;

        private float startTime;

        private PlayerDTO nextState;
        private Vector3 currPosition;
        private Vector3 nextPosition;
        private Orientation? nextOrientation;
        private int health;
        private int score;

        // Temporary variables
        private bool jumpNeeded = false;
                

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
        public void FixedUpdate()
        {
            bool positionChangeNeeded = IsPositionChangeNeeded();
            if (!positionChangeNeeded)
            {
                gameObject.transform.localPosition = nextPosition;
            }
            if (jumpNeeded)
            {
                gameObject.transform.localPosition = nextPosition;
                jumpNeeded = false;
                positionChangeNeeded = false;
            }

            if (positionChangeNeeded && nextOrientation.HasValue) 
            {         
                anim.SetInteger("AnimParam", 1); // Activate animation
                velocity = GetVelocityForOrientation();
                transform.eulerAngles = OrientationMethods.VectorForOrientation(nextOrientation.Value);
            }
            else
            {
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

            jumpNeeded = IsJumpNeeded();
            // Update the health, score & orientation.
            health = nextState.health;
            score = nextState.score;
            nextOrientation = CalculateOrientation();
        }

        private bool IsPositionChangeNeeded()
        {
            return !gameObject.transform.localPosition.RoughlyEquals(nextPosition);
        }

        private bool IsJumpNeeded()
        {
            return currPosition.SqrDistanceTo(nextPosition) > VectorExtensions.RoughUnitDistanceSqr;
        }

        private Orientation? CalculateOrientation()
        {
            if (nextPosition.EastOf(currPosition)) return Orientation.East;
            if (nextPosition.WestOf(currPosition)) return Orientation.West;
            if (nextPosition.NorthOf(currPosition)) return Orientation.North;
            if (nextPosition.SouthOf(nextPosition)) return Orientation.South;
            return null;
        }

        private Vector3 GetVelocityForOrientation()
        {
            switch (nextOrientation)
            {
                case Orientation.South:
                    return new Vector3(0, 0, -speed);
                case Orientation.North:
                    return new Vector3(0, 0, speed);
                case Orientation.West:
                    return new Vector3(-speed, 0, 0);
                case Orientation.East:
                    return new Vector3(speed, 0, 0);
                default:
                    return new Vector3(0, 0, 0);
            }
        }
    }
}