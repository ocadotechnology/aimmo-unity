using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Every element in the scene has its standard position as well as its isometric
 * position, handled by this script. It translate 2D coordinates as sent by the
 * backend to 3D coordinates in our isometric space, which basically means that 
 * it makes sure that each object is in the correct depth.
 */

public class IsometricPosition : MonoBehaviour 
{
	public float x;
	public float y;

	private const float scale = 1.0f;

	// Position transformation.
	private const float xDirection =  1.00000000000f;
	private const float yDirection = -1.41421356237f;
	private const float zDirection =  1.00000000000f;

	public void Set(float x, float y, bool floor)
	{
		Vector3 realPosition = new Vector3(x, 0.0f, y);

		// Floor tiles need to be sent behind.
		float depth = (x + y + (floor ? 2.0f : 0.0f)) * scale;
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
