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

	private PlayerData nextState;
	private Vector2 currPosition;
	private Vector2 nextPosition;

	// Initialisation.
	void Awake()
	{
		startTime = Time.time;
		currPosition = transform.position;
		nextState = new PlayerData(transform.position);
	}

	// Move the player to next position.
	void Update() 
	{
		// TODO: Rotation transition. Maybe an animation?

		float step = (Time.time - startTime) * speed;

		if (step < moveInterval) 
		{
			transform.GetComponent<IsometricPosition>().Set(Vector2.Lerp(currPosition, nextPosition, step));
		}
		else 
		{
			transform.position = nextPosition;
			currPosition = nextPosition;

			transform.GetComponentInChildren<TextMesh>().text = Convert.ToString(nextState.score);
			transform.GetComponent<PlayerHealthBar>().SetHealthPoints(nextState.health);

			startTime = Time.time;
		}
	}

	// Set next destination.
	public void SetNextState(PlayerData playerData)
	{
		nextState = playerData;

		transform.position = nextPosition;
		nextPosition = new Vector3(nextState.x, 0.5f, nextState.y);


	}
}
