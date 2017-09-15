using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

#if UNITY_EDITOR
using UnityEditor;
#endif

using UnityEngine;
using MapFeatures;

/* Generators mirror MapFeatures and are used to export to JSON. For more 
 * information, check them in Editor/SceneView/Generators.
 */

[ExecuteInEditMode]
public interface IGenerator
{
	string ToJson();
	GameObject GenerateObject(string id);
}
