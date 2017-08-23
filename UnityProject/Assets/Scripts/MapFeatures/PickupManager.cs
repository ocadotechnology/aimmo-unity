using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Still not clear what pickups will do, probably there will be different
 * types, so that will need to be taken care of.
 */

namespace MapFeatures 
{
	public class PickupManager : MapFeatureManager
	{
		public override void Draw(GameObject pickup, Sprite pickupSprite)
		{
			// TEMPORARY.
			GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);

			sphere.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
			sphere.GetComponent<Renderer>().material.color = Color.blue;
		
			sphere.transform.parent = pickup.transform;
			sphere.transform.position = pickup.transform.position;
		}

		public override string MapFeatureId(string id)
		{
			return "pickup" + id;
		}
	}
}