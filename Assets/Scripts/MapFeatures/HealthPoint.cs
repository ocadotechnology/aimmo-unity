using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* 
 * This class manages tehe health points, which are those cells
 * in which the player gets an extra health point every iteration
 * he or she stays there.
 */

public class HealthPoint : MapFeature 
{	
	public static bool Create(string id, float x, float y)
	{
		// It might have already been created
		if (GameObject.Find(MapFeatureId(id)) != null)
			return true;

		// Create new green cell.
		GameObject healthPoint = GameObject.CreatePrimitive(PrimitiveType.Cube);
		if (healthPoint == null)
			return false;

		healthPoint.transform.position = new Vector3(x, 0.0f, y);
		healthPoint.transform.localScale = new Vector3(1.0f, 0.01f, 1.0f);
		healthPoint.transform.name = MapFeatureId(id);
		healthPoint.GetComponent<Renderer>().material.color = Color.green;

		return true;
	}

	public static bool Delete(string id)
	{
		GameObject healthPointToDestroy = GameObject.Find(MapFeatureId(id));
		if (healthPointToDestroy == null)
			return false;

		Destroy(healthPointToDestroy);

		return true;
	}

	private static string MapFeatureId(string id)
	{
		return "healthpoint" + id;
	}
}
