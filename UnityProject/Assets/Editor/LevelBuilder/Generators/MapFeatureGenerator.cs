using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using MapFeatures;
using SimpleJSON;

namespace GeneratorNS {
	public abstract class MapFeatureGenerator: IGenerator 
	{
		/***
		 * The interface IGenerator can be found inside Scripts/LevelGenerator:
		 *  - ToJson
		 *  - GenerateObject
		 * */

		public string ToJson()
		{
			string incompleteJson = MapFeatureToJson();

			string fullJson =  @"{
				" + incompleteJson + @"
	    		}";
			
			return fullJson;
		}

		/**
		* We want to generate object in the exact same way as the objects are generated 
		* inside the main scene. Thus, we get the JSON that the generator produces and 
		* we pass it to a manager that will build the object.
		* */
		public GameObject GenerateObject(string id)
		{
			IMapFeatureManager manager = GetManager ();
			MapFeatureData mfd = new MapFeatureData (JSON.Parse (ToJson ()));
			manager.Create (id, mfd);

			GameObject gameObject = GameObject.Find (manager.MapFeatureId (id));
			UnityEngine.Object.DestroyImmediate((Component) manager);

			return gameObject;
		}

		public abstract string MapFeatureToJson();
		public abstract IMapFeatureManager GetManager ();
	}
}