using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour 
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
	void Awake()
	{
		startTime = Time.time;
		currPosition = transform.position;
		nextPosition = transform.position;
		positionsQueue = new Queue<Vector3>();
		scoresQueue = new Queue<int>();
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

				startTime = Time.time;
			}
		}
	}

	// Set next destination.
	public void SetNextState(PlayerData playerData)
	{
		positionsQueue.Enqueue(new Vector3(playerData.x, 0.5f, playerData.y));
		scoresQueue.Enqueue(playerData.score);

		// TODO: Health and rotation. We can potentially enqueue player data instead
		// of enqueing the individual parameters.
	}

	public void SetCurrentScore(int score)
	{
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
