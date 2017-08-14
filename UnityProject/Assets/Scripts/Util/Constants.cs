using System;

/* Constants that control the general aspect of the game. Constants that are 
 * used for very specific tasks are put in the class that uses them.
 */

public class Constants
{
	// Camera Transform. Do NOT change 'y' or 'z' since these make the view be 
	// isometric and everything to make sense. We can change the 'x' rotation
	// to achieve different types of isometric views.
	public const float CameraRotationX = (float) Math.PI / 4.0f; 
	public const float CameraRotationY = (float) Math.PI / 4.0f;
	public const float CameraRotationZ = 0.0f;
}
