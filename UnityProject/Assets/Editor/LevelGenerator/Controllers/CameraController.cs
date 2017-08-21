using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class CameraController
{
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

