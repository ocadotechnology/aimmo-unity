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
		private string direction = "north";
		private int playerIsMoving = 0;
                

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

		// Set next destination.
		public void SetNextState(PlayerDTO playerDTO)
		{
			nextState = playerDTO;

			nextPosition = new Vector2(nextState.location.x, nextState.location.y);
		}

	}
}