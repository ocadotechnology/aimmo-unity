using System;
using UnityEngine;

/* Constants that control the general aspect of the game. Constants that are 
 * used for very specific tasks are put in the class that uses them.
 */

public class Constants
{
	public const float SceneRotationXDeg = 45.0f; 
	public const float SceneRotationYDeg = 30.0f;

	public const float SceneRotationX = Mathf.Deg2Rad * SceneRotationXDeg;
	public const float SceneRotationY = Mathf.Deg2Rad * SceneRotationYDeg;
}
