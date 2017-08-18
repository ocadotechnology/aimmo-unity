using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using GeneratorNS;

public class Generators
{
	public static void GenerateSphere(string name, float x, float y, float z)
	{
		GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		sphere.transform.position = new Vector3(0, 1.5F, 0);
		sphere.name = name;
	}

	public static void GenerateObstacle(string name, float x, float y)
	{
		new ObstacleGenerator (x, y).Build (name);
	}
}

