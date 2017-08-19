using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using MapFeatures;

namespace GeneratorNS {
	public abstract class SpriteGenerator : MapFeatureGenerator
	{
		public abstract string GetSprite();
	}
}