using System;
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
	private string userId;

	// The offsets determine how far the camera is with respect to the target.
	private const float Offset = -100.0f;

	// Used for SmoothDamp.
	private const float DampTime = 0.2f;
	private Vector2 velocity = Vector2.zero;

	// Positions.
	private IsometricPosition cameraPosition;
	private IsometricPosition targetPosition;

	// Set user to follow.
	public void FollowUserWithId(string userId)
	{
		this.userId = userId;
	}

	public void Awake()
	{
		cameraPosition = transform.GetComponent<IsometricPosition>();
	}

	public void Update() 
	{
		Debug.Log ("in");

		if (targetPosition == null) 
		{
			Debug.Log ("here");
			GameObject target = GameObject.Find(userId);
			if (target == null)
				return;
			
			targetPosition = target.GetComponent<IsometricPosition>();
			return;
		}

		Debug.Log (targetPosition.Vector());
		Debug.Log (cameraPosition.Vector ());
		// Move the camera accordingly.
		if (targetPosition.Vector() != cameraPosition.Vector()) 
		{
			Debug.Log ("here2");
			Vector2 gridPosition = Vector2.SmoothDamp(
               cameraPosition.Vector(), 
               targetPosition.Vector(), 
               ref velocity, 
               DampTime,
               Mathf.Infinity,
               Time.deltaTime);
			cameraPosition.Set(gridPosition.x, gridPosition.y, Offset);
		} 
		else 
		{
			Debug.Log ("here3");
			cameraPosition.x = targetPosition.x;
			cameraPosition.y = targetPosition.y;
		}
	}


}
