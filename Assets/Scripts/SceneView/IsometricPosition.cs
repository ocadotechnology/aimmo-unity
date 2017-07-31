using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IsometricPosition : MonoBehaviour {

	public float x;
	public float y;

	private const float scale = 1.0f;
	private const float xDirection = 1.0f;
	private const float yDirection = -1.41421356237f; // -sqrt(2)
	private const float zDirection = 1.0f;

	public void Set(float x, float y, bool floor)
	{
		Vector3 realPosition = new Vector3(x, 0.0f, y);

		float depth = (x + y + (floor ? 3.0f : 0.0f)) * scale;
		Vector3 depthDisplacement = depth * new Vector3(xDirection, yDirection, zDirection);
	
		transform.position = realPosition + depthDisplacement;
	}

	public void Set(float x, float y)
	{
		Set(x, y, false);
	}

	public void Set(Vector2 position)
	{
		Set(position.x, position.y);
	}
}
