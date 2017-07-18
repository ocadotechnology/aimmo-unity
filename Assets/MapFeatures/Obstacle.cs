using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* This class manages obstacles, i.e. the walls in the scene.
 */

public class Obstacle : MapFeature 
{
	public static bool Create(int id, float x, float y)
	{
		// Create new cube.
		GameObject obstacle = GameObject.CreatePrimitive(PrimitiveType.Cube);
		if (obstacle == null) 
			return false;

		obstacle.transform.position = new Vector3(x, 0.5f, y);
		obstacle.name = MapFeatureId(id);
		obstacle.GetComponent<Renderer>().material.color = Color.black;

		return true;
	}

	public static bool Delete(int id)
	{
		GameObject obstacleToDestroy = GameObject.Find(MapFeatureId(id));
		if (obstacleToDestroy == null)
			return false;

		Destroy(obstacleToDestroy);

		return true;
	}
		
	private static string MapFeatureId(int id)
	{
		return "obstacle" + Convert.ToString(id);
	}
}
