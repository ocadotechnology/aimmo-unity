using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* This class manages tehe health points, which are those cells in which the 
 * player gets an extra health point every iteration he or she stays there.
 */

public class HealthPoint : MapFeature 
{	
	public override void Draw(GameObject healthPoint)
	{
		healthPoint = GameObject.CreatePrimitive(PrimitiveType.Sphere);

		healthPoint.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
		healthPoint.GetComponent<Renderer>().material.color = Color.green;
	}

	public override string MapFeatureId(string id)
	{
		return "healthpoint" + id;
	}
}
