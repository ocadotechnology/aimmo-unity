using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimpleJSON;

namespace MapFeatures 
{
	public class LightData
	{
		public float x, y, z;

		// Construct from JSON.
		public LightData(JSONNode json)
		{
			this.x = json["x"].AsFloat;
			this.y = json["y"].AsFloat;
			this.z = json["z"].AsFloat;
		}

		public LightData(Vector3 position)
		{
			this.x = position.x;
			this.y = position.y;
			this.z = position.z;
		}
	}


}
