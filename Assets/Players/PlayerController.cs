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
	private int nextScore;

	// Initialisation.
	void Awake()
	{
		startTime = Time.time;
		currPosition = transform.position;
		nextPosition = transform.position;
		nextScore = 0; // This is not right but keep it for now.
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

			transform.GetComponentInChildren<TextMesh>().text = Convert.ToString(nextScore);

			startTime = Time.time;
		}
	}

	// Set next destination.
	public void SetNextState(PlayerData playerData)
	{
		nextPosition = new Vector3(playerData.x, 0.5f, playerData.y);
		nextScore = playerData.score;
	}



	// Detect focus - Use this in world controls
	/*void OnApplicationFocus(bool hasFocus)
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
	}*/
}
