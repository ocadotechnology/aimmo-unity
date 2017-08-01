using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Still not clear what pickups will do, probably there will be different
 * types, so that will need to be taken care of.
 */

public class Pickup : MapFeature 
{
	public override void Draw(GameObject pickup)
	{
		pickup = GameObject.CreatePrimitive(PrimitiveType.Sphere);

		pickup.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
		pickup.GetComponent<Renderer>().material.color = Color.blue;
	}

	public override string MapFeatureId(string id)
	{
		return "pickup" + id;
	}
}
