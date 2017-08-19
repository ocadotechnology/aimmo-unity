using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using MapFeatures;

namespace GeneratorNS {
	public interface IGenerator
	{
		string ToJson();
		GameObject GenerateObject(string id);
	}
}
