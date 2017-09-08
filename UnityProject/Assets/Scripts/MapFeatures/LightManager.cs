using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimpleJSON;

/* Adds a light to the scene.
 */

namespace MapFeatures 
{
	[Serializable]
	public struct LightData
	{
		public float x;
		public float y;
		public float intensity;
		public float range;
		public string color;

		// Construct from JSON.
		// TODO: color
		public LightData(JSONNode json)
		{
			this.x = json["x"].AsFloat;
			this.y = json["y"].AsFloat;

			this.color = "#000000";
			this.intensity = 1.0f;
			this.range = 4.0f;

			if (json["intensity"] != null) this.intensity = json["intensity"].AsFloat;
			if (json["color"] != null) this.intensity = json["color"];
			if (json["range"] != null) this.intensity = json["range"].AsFloat;
		}

		public LightData(Vector2 position)
		{
			this.x = position.x;
			this.y = position.y;
			this.color = "#000000";
			this.intensity = 1.0f;
			this.range = 4.0f;
		}

		public string ToJson()
		{
			string formattedColor = @"""" + color + @"""";
			return @" ""lights"" : {  
				""x"" : " + x.ToString("0.000") + @",
				""y"" : " + y.ToString("0.000") + @",
				""intensity"" : " + intensity.ToString("0.000") + @",
				""color"" : " + formattedColor + @",
				""range"" : " + range.ToString("0.000") + @"
			}";
		}
	}

	class LightManager : MonoBehaviour
	{
		public void Draw(GameObject mapFeature, LightData lightData)
		{
			Vector3 position = mapFeature.transform.position;
			string lightName = "light-" + mapFeature.name;

			GameObject lightGameObject = new GameObject(lightName);
			lightGameObject.transform.parent = mapFeature.transform;

			Light lightComp = lightGameObject.AddComponent<Light> ();
			lightComp.color = Color.white;

			lightGameObject.transform.position = new Vector3 (
				position.x + lightData.x, 
				position.y + lightData.y, 
				position.z);
		
			lightComp.intensity = lightData.intensity;
			lightComp.range = lightData.range;
		}
	}
}
