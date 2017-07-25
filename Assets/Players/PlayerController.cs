using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour 
{
	// General movement variables.
	private const float speed = 5.0f;
	private const float moveInterval = 0.5f;

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

		if (step < moveInterval) 
			transform.position = Vector3.Lerp (currPosition, nextPosition, step);
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
		transform.position = nextPosition;
		nextPosition = new Vector3(playerData.x, 0.5f, playerData.y);
		nextScore = playerData.score;

		//transform.position = new Vector3(playerData.x, 0.5f, playerData.y);
		//transform.GetComponentInChildren<TextMesh>().text = Convert.ToString(playerData.score);
	}
}
