using UnityEditor;
using UnityEngine;
using MapFeatures;

namespace Generator 
{
	public class HealthPointGenerator : SpriteGenerator
	{
		public HealthPointGenerator (float x, float y, string sprite) : base (x, y, sprite) {}
		 
		public HealthPointGenerator (float x, float y) : base (x, y, @"""sprite"": {}") {}

		public override IMapFeatureManager GetManager()
		{
			return ObjectController.GetContext().AddComponent<HealthPointManager> ()  as IMapFeatureManager;
		}
	}
}
