using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using MapFeatures;

namespace GeneratorNS {
	public abstract class SpriteGenerator : MapFeatureGenerator
	{
		private float x;
		private float y;
		private string sprite;

		public SpriteGenerator(float x, float y, string sprite)
		{
			this.x = x;
			this.y = y;
			this.sprite = sprite;
		}

		public string GetSprite()
		{
			return sprite;
		}

		public override string MapFeatureToJson() 
		{
			return @"
				""x"": " + this.x.ToString ("0.0000") + @", 
				""y"": " + this.y.ToString ("0.0000") + @", 
				" + this.sprite;
		}
	}
}
