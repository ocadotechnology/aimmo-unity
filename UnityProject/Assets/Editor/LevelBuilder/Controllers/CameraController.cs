using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class CameraController
{
	/**
     * The "Controllers" are mostly designed as static libraries that 
	 * provide mostly Editor-releated functionality.
	 * 
	 * The Camera controller generates a new camera object. 
	 * The OrthograpicCamera can be used in both 2D and 3D modes.
	 */
	private static Camera GetCamera()
	{
		GameObject context = ObjectController.GetContext ();
		Camera camera = context.GetComponent<Camera> ();
		if (camera != null) 
		{
			return camera;
		} 
		else 
		{
			camera = context.AddComponent<Camera> ();
			camera.name = "Level Camera";

			return camera;
		}
	}

	public static void SetOrthographicCamera () 
	{
		Camera camera = GetCamera ();

		camera.transform.position.Set (0, 0, -100);
		camera.transform.rotation.Set (0, 0, 0, 0);

		camera.orthographic = true;
		camera.orthographicSize = 5;

		camera.far = 1000;
	}
}

