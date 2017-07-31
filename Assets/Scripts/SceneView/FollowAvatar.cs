using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowAvatar : MonoBehaviour 
{
	private GameObject target = null;

	private const float xOffset = -5.0f;
	private const float yOffset =  5.0f;
	private const float zOffset = -5.0f;

	private const float dampTime = 0.3f;
	private Vector3 velocity = Vector3.zero;

	void Update() 
	{
		if (target == null) 
		{
			target = GameObject.Find("player1");
			return;
		}

		Vector3 destination= new Vector3(
			target.transform.position.x + xOffset,
			target.transform.position.y + yOffset,
			target.transform.position.z + zOffset);
	
		transform.position = Vector3.SmoothDamp(
			transform.position, 
			destination, 
			ref velocity, 
			dampTime);
	}
}
