using UnityEditor;
using UnityEngine;
using MapFeatures;

namespace GeneratorNS {
	public class ObstacleGenerator : SpriteGenerator
	{
		private const string defaultSprite = @"""sprite"" : {
			""width"" : ""512"",
			""height"" : ""1024"",
			""path"" :  ""Obstacle-512x1024-isometric-top""
		}";

		public ObstacleGenerator (float x, float y, string sprite = defaultSprite) : base (x, y, sprite) 
		{
		}

		public override IMapFeatureManager GetManager ()
		{
			return new GameObject ().AddComponent<ObstacleManager> ();
		}
	}
}