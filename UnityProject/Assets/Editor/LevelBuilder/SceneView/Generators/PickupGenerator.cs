using UnityEditor;
using UnityEngine;
using MapFeatures;

namespace Generator {
	public class PickupGenerator : SpriteGenerator
	{
		public PickupGenerator (float x, float y) : base (x, y, @"""sprite"": {}") 
		{
		}

		public override IMapFeatureManager GetManager ()
		{
			return ObjectController.GetContext().AddComponent<PickupManager> () as IMapFeatureManager;
		}
	}
}
