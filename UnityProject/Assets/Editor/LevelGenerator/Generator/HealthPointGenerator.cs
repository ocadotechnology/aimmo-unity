using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using MapFeatures;

namespace GeneratorNS {
	public class HealthPointGenerator : MapFeatureGenerator
	{
		private float x;
		private float y;
		private GameObject context; // This has to somehow be shared

		public HealthPointGenerator(float x, float y)
		{
			this.x = x;
			this.y = y;
			this.context = new GameObject("healthPointGeneratorContextObject");
		}

		public override string MapFeatureToJson() 
		{
			return @"
				""x"": " + this.x.ToString("0.0000") + @", 
				""y"": " + this.y.ToString("0.0000") + @", 
				""type"" : ""health"",
				""sprite"" : {
				}";
		}

		public override IMapFeatureManager GetManager()
		{
			HealthPointManager hpm = context.AddComponent<HealthPointManager>();
			return (IMapFeatureManager) hpm;
		}
	}
}
