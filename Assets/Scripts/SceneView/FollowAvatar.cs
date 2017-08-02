using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Script attached to the partent camera. It follows the main
 * player with a bit of a delay that makes it look more 
 * natural. Also, when it has stopped moving, it notifies 
 * the cameras manager to update the layers offset used to 
 * calculate the layer fo each game object. 
 */

public class FollowAvatar : MonoBehaviour 
{
	private GameObject target = null;

	// The offsets determine how far the camera is with respect to the target.
	private const float offset = -100.0f;

	// Used for SmoothDamp.
	private const float dampTime = 0.2f;
	private Vector2 velocity = Vector2.zero;

	// Positions.
	private IsometricPosition cameraPosition;
	private IsometricPosition targetPosition;

	void Awake()
	{
		cameraPosition = transform.GetComponent<IsometricPosition>();
	}

	void Update() 
	{
		if (target == null) 
		{
			// TEMPORARY
			target = GameObject.Find("player1");
			return;
		}

		// Your avatar's position.
		targetPosition = target.GetComponent<IsometricPosition>();

		// Move the camera accordingly.
		if (targetPosition.Vector() != cameraPosition.Vector()) 
		{
			Vector2 gridPosition = Vector2.SmoothDamp(
               cameraPosition.Vector(), 
               targetPosition.Vector(), 
               ref velocity, 
               dampTime,
               Mathf.Infinity,
               Time.deltaTime);
			cameraPosition.Set(gridPosition.x, gridPosition.y, offset);
		} 
		else 
		{
			cameraPosition.x = targetPosition.x;
			cameraPosition.y = targetPosition.y;
		}
	}


}
