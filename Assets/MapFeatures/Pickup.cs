using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* 
 * Still not clear what pickups will do, probably there will be different
 * types, so that will need to be taken care of.
 * 
 * TODO: Change this comment!
 */

public class Pickup : MonoBehaviour, MapFeature 
{
	static bool Create(int id, float x, float y)
	{
		// Create small blue sphere.
		GameObject pickup = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		if (pickup == null)
			return false;

		pickup.transform.position = new Vector3(x, 0.5f, y);
		pickup.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
		pickup.GetComponent<Renderer>().material.color = Color.blue;

		return true;
	}

	static bool Delete(int id)
	{
		GameObject pickupToDestroy = GameObject.Find(MapFeatureId(id));
		if (pickupToDestroy == null)
			return false;

		Destroy(pickupToDestroy);

		return true;
	}

	private static string MapFeatureId(int id)
	{
		return "pickup" + Convert.ToString(id);
	}
}
