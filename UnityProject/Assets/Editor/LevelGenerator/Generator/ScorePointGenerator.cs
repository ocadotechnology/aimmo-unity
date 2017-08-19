using UnityEditor;
using UnityEngine;
using MapFeatures;

namespace GeneratorNS {
	public class ScorePointGenerator : SpriteGenerator
	{
		private const string defaultSprite = @"""sprite"" : {
			""width"" : ""400"",
			""height"" : ""400"",
			""path"" : ""Grass-400x400-isometric-top""
		}";
		
		public ScorePointGenerator (float x, float y, string sprite = defaultSprite) : base (x, y, sprite) 
		{
		}

		public override IMapFeatureManager GetManager ()
		{
			return new GameObject ().AddComponent<ScorePointManager> ();
		}
	}
}
