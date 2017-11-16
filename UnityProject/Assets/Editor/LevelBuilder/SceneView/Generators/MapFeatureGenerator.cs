using UnityEngine;
using System;
using MapFeatures;

namespace Generator 
{
	public abstract class MapFeatureGenerator<FeatureDTO>: IGenerator 
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
            throw new NotImplementedException();
		}

		public abstract string MapFeatureToJson();
        public abstract IMapFeatureManager<FeatureDTO> GetManager ();
	}

    /* Stub Classes */
    public abstract class SpriteGenerator: MapFeatureGenerator<GameObject> {}
    public abstract class ObstacleGenerator : SpriteGenerator {}
}
