using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using MapFeatures;
using SimpleJSON;
using MonoNS;

namespace GeneratorNS {
	public abstract class MapFeatureGenerator: IGenerator 
	{
		public string ToJson()
		{
			string incompleteJson = MapFeatureToJson();

			string fullJson =  @"{
				" + incompleteJson + @"
	    		}";
			
			return fullJson;
		}

		public GameObject GenerateObject(string id)
		{
			IMapFeatureManager manager = GetManager ();
			MapFeatureData mfd = new MapFeatureData (JSON.Parse (ToJson ()));
			manager.Create (id, mfd);

			GameObject gameObject = GameObject.Find (manager.MapFeatureId (id));

			return gameObject;
		}

		public abstract string MapFeatureToJson();
		public abstract IMapFeatureManager GetManager ();
	}
}