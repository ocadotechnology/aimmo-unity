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

	private const float xOffset = -5.0f - 100.0f;
	private const float yOffset = 5.0f + 100.0f * 1.41421356237f;
	private const float zOffset = -5.0f - 100.0f;


	private const float dampTime = 0.2f;
	private Vector3 velocity = Vector3.zero;

	void Update() 
	{
		if (target == null) 
		{
			// TEMPORARY
			target = GameObject.Find("player1");
			return;
		}

		Vector3 destination = new Vector3(
			target.transform.position.x + xOffset,
			target.transform.position.y + yOffset,
			target.transform.position.z + zOffset);

		if (destination != transform.position) 
		{
			transform.position = Vector3.SmoothDamp (
				transform.position, 
				destination, 
				ref velocity, 
				dampTime);
		}
	}


}
