using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowAvatar : MonoBehaviour 
{
	public GameObject target;

	private const float xOffset = -5.0f;
	private const float yOffset =  5.0f;
	private const float zOffset = -5.0f;

	void LateUpdate() 
	{
		this.transform.position 
			= new Vector3(target.transform.position.x + xOffset,
					 	  target.transform.position.y + yOffset,
					  	  target.transform.position.z + zOffset);
	}
}
