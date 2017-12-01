using UnityEngine;
using System.Collections;
using System;

public class PlayerMovement : MonoBehaviour {

		private Animator anim;
		private CharacterController controller;

		public float speed = 6.0f;

		// Not sure how to get next coordinate & direction yet, making it public
		public string direction = "north";

		public int playerIsMoving = 0;
		private Vector3 velocity = new Vector3(0, 0, 0);
				
		void Start () { 
			controller = GetComponent<CharacterController>();
			anim = GetComponentInChildren<Animator>();
		}
		
		void Update (){

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
}
