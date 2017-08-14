using System;
using UnityEngine;

/* Constants that control the general aspect of the game. Constants that are 
 * used for very specific tasks are put in the class that uses them.
 */

public class Constants
{
	// Camera Transform. Do NOT change 'y' or 'z' since these make the view be 
	// isometric and everything to make sense. We can change the 'x' rotation
	// to achieve different types of isometric views.
	public const float CameraRotationXDeg = 45.0f; 
	public const float CameraRotationYDeg = 45.0f;
	public const float CameraRotationZDeg = 0.0f;

	public const float CameraRotationX = Mathf.Deg2Rad * CameraRotationXDeg;
	public const float CameraRotationY = Mathf.Deg2Rad * CameraRotationYDeg;
	public const float CameraRotationZ = Mathf.Deg2Rad * CameraRotationZDeg;
}
