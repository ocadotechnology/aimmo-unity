using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using MapFeatures;

namespace GeneratorNS {
	public class ObstacleGenerator : MapFeatureGenerator
	{
		private float x;
		private float y;
		private GameObject context; // This has to somehow be shared

		public ObstacleGenerator(float x, float y, string path = "Obstacle-512x1024-isometric-top")
		{
			this.x = x;
			this.y = y;
			this.path = path;
			this.context = new GameObject("obstacleGeneratorContextObject");
		}
			
		public override string MapFeatureToJson() 
		{
			return @"
				""x"": " + this.x.ToString("0.0000") + @", 
				""y"": " + this.y.ToString("0.0000") + @", 
				""sprite"": {
	 				""width"" : ""512"",
	      			""height"" : ""1024"",
					""path"" : " + this.path + @"
	    		}";
		}

		public override IMapFeatureManager GetManager()
		{
			ObstacleManager om = context.AddComponent<ObstacleManager>();
			return (IMapFeatureManager) om;
		}
	}
}