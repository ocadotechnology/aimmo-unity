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
	private Vector3 currPosition;
	private Vector3 nextPosition;

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
			transform.position = Vector3.Lerp(currPosition, nextPosition, step);
		else 
		{
			transform.position = nextPosition;
			currPosition = nextPosition;

			int layerNumber = (int)(transform.position.x + transform.position.z);
			transform.gameObject.layer = 8 + layerNumber;

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
