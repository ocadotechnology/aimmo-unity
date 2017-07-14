using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvatarController : MonoBehaviour 
{
	// General movement variables.
	private const float speed = 1.5f;
	private float startTime;
	private Vector3 currPosition;
	private Vector3 nextPosition;

	// Used to avoid laggy movement.
	private Queue<Vector3> positionsQueue;

	// This is needed to make the updates of the score coherent with
	// the movement.
	private Queue<int> scoresQueue;

	// Player state.
	private int health;
	private int score;

	// Initialisation.
	void Start()
	{
		startTime = Time.time;
		currPosition = transform.position;
		nextPosition = transform.position;
		positionsQueue = new Queue<Vector3>();
		scoresQueue = new Queue<int>();
		scoresQueue.Enqueue(0);
	}

	// Move the player to next position.
	void Update() 
	{
		// TODO: Rotation transition. Maybe an animation?

		float step = (Time.time - startTime) * speed;

		if (step < 1.0f) 
		{
			transform.position = Vector3.Lerp(currPosition, nextPosition, step);
		} 
		else 
		{
			transform.position = nextPosition;
			currPosition = nextPosition;

			// Only ask for a next position if there is one. Stay still otherwise.
			if (positionsQueue.Count > 0) 
			{
				nextPosition = positionsQueue.Dequeue();

				int nextScore = scoresQueue.Dequeue();
				transform.GetComponentInChildren<TextMesh>().text = Convert.ToString(nextScore);

				/*Vector3 direction = nextPosition - currPosition;

				// Calculate the rotation. Useful when we have a 3D model of a character.
				if (direction.x > 0.0f) 
				{
					transform.rotation = Quaternion.Euler(0.0f, 0.0f, 0.0f);
				} 
				else if (direction.x < 0.0f) 
				{
					transform.rotation = Quaternion.Euler(0.0f, 180.0f, 0.0f);
				} 
				else if (direction.z > 0.0f) 
				{
					transform.rotation = Quaternion.Euler(0.0f, 90.0f, 0.0f);
				} 
				else if (direction.z < 0.0f) 
				{
					transform.rotation = Quaternion.Euler(0.0f, 270.0f, 0.0f);
				}*/

				startTime = Time.time;
			}
		}
	}

	// Set next destination.
	public void SetNextState(Vector3 position, int score)
	{
		positionsQueue.Enqueue(position);
		scoresQueue.Enqueue(score);
	}

	// Detect focus
	void OnApplicationFocus(bool hasFocus)
	{
		if (hasFocus) 
		{
			while (positionsQueue.Count > 1) 
			{
				positionsQueue.Dequeue();
				scoresQueue.Dequeue();
			}

			startTime = Time.time;
			currPosition = positionsQueue.Dequeue();
			nextPosition = currPosition;
			transform.position = currPosition;

			int nextScore = scoresQueue.Dequeue();
			transform.GetComponentInChildren<TextMesh>().text = Convert.ToString(nextScore);
		}
	}
}
