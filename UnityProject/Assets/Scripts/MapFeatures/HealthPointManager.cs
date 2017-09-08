using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* This class manages tehe health points, which are those cells in which the 
 * player gets an extra health point every iteration he or she stays there.
 */

namespace MapFeatures 
{
	public class HealthPointManager : MapFeatureManager 
	{	
		public override void Draw(GameObject healthPoint, Sprite healhtPointSprite)
		{
			// TEMPORARY.
			GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);

			sphere.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
			sphere.GetComponent<Renderer>().material.color = Color.green;

			sphere.transform.parent = healthPoint.transform;
			sphere.transform.position = healthPoint.transform.position;
		}

		public override string MapFeatureId(string id)
		{
			return "healthpoint" + id;
		}
	}
}
