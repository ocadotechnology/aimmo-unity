using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;

public class GridController
{
	private const float pointScale = 0.1f;
	private const float lineScale = 0.02f;

	private static int height;
	private static int width;

	private static GameObject grid;
	private static GameObject points;
	private static GameObject lines;

	public static void BuildGrid()
	{
		grid = GameObject.Find("Grid");
		if (grid != null) 
			return;

		grid = new GameObject("Grid");
		points = new GameObject("Points");
		lines = new GameObject("Lines");

		points.transform.parent = grid.transform;
		lines.transform.parent = grid.transform;

		float maxX = Convert.ToSingle((width - 1) / 2);
		float minX = Convert.ToSingle(-width / 2);
		float maxY = Convert.ToSingle((width - 1) / 2);
		float minY = Convert.ToSingle(-width / 2);

		for (float x = minX; x <= maxX; x += 1.0f) 
		{
			GameObject horizontalLine = GenerateLine(x - 0.5f, -0.5f, width, true);
			horizontalLine.transform.parent = lines.transform;
		}

		for (float y = minY; y <= maxY; y += 1.0f) 
		{
			GameObject verticalLine = GenerateLine(-0.5f, y -0.5f, height, false);
			verticalLine.transform.parent = lines.transform;
		}

		/*for (int y = -5; y <= 5; y++) 
			{
				GameObject point = GameObject.CreatePrimitive(PrimitiveType.Sphere);
				point.GetComponent<Renderer>().sharedMaterial = new Material(Shader.Find("Diffuse"));
				point.GetComponent<Renderer>().sharedMaterial.color = Color.green;
				point.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);

				depth = x + y + 1;
				isoX = ((float)x) - 0.5f;
				isoY = ((float)y) - 0.5f;

				point.name = "point(" +
					Convert.ToString(isoX) + "," +
					Convert.ToString(isoY) + ")";

				point.transform.position = new Vector3 (
					(isoX - isoY) * shiftX,
					(isoX + isoY) * shiftY,
					depth);

				point.transform.parent = points.transform;
			}*/
	}

	// Generate a long yellow cilinder representing a line.
	private static GameObject GenerateLine(float x, float y, float length, bool xAxis)
	{
		GameObject line = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
		line.GetComponent<Renderer>().sharedMaterial = new Material(Shader.Find("Diffuse"));
		line.GetComponent<Renderer>().sharedMaterial.color = Color.yellow;

		// Pin the line.
		line.AddComponent<IsometricPosition>().Set(x, y, 1.0f);

		// Rescale it.
		line.transform.localScale = new Vector3(
			lineScale, 
			width * Constants.IsometricShiftX, 
			lineScale);

		// Rotate it facing towards the nearest point up left or up right. To
		// understand the maths better, go to the IsometricPosition class.
		Vector3 finalDirection = new Vector3(
             (xAxis ? 1.0f : -1.0f) * Constants.IsometricShiftX, 
             Constants.IsometricShiftY, 
             1.0f);
		Quaternion requiredRotation = Quaternion.FromToRotation(
        	Vector3.up,
        	finalDirection);
		line.transform.rotation = requiredRotation * line.transform.rotation;

		return line;
	}

	public static bool IsActive()
	{
		return grid.activeSelf;
	}

	public static void SetActive(bool showGrid)
	{
		grid.SetActive (showGrid);
	}
}

