using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

/* Draws the yellow lines and green dots that you can see when you tick the grid
 * toggle. Also takes care of destroying it when you untick it.
 */

public class GridController
{
	private const float pointScale = 0.1f;
	private const float lineScale = 0.02f;

	private static GameObject grid;
	private static GameObject points;
	private static GameObject lines;

	// Create the grid.
	public static void BuildGrid(int width, int height)
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
		float maxY = Convert.ToSingle((height - 1) / 2);
		float minY = Convert.ToSingle(-height / 2);

		// Vertical lines, i.e. '\'.
		for (float x = minX; x <= maxX; x++) 
			GenerateLine(shiftCoordinate(x), shiftCoordinate(0.0f), height, false);

		// Horizontal lines, i.e. '/'.
		for (float y = minY; y <= maxY; y++) 
			GenerateLine(shiftCoordinate(0.0f), shiftCoordinate(y), width, true);

		// Points.
		for (float x = minX; x <= maxX; x++)
			for (float y = minY; y <= maxY; y++)
				GeneratePoint(shiftCoordinate(x), shiftCoordinate(y));
	}

	// Generate a long yellow cilinder representing a line.
	private static void GenerateLine(float x, float y, float length, bool xAxis)
	{
		GameObject line = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
		line.GetComponent<Renderer>().sharedMaterial = new Material(Shader.Find("Diffuse"));
		line.GetComponent<Renderer>().sharedMaterial.color = Color.yellow;

		// Pin the line.
		line.AddComponent<IsometricPosition>().Set(x, y, 1.0f);

		// Rescale it.
		line.transform.localScale = new Vector3(
			lineScale, 
			length * Constants.IsometricShiftX, 
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

		line.transform.parent = lines.transform;
	}

	// Generate a green sphere representing a point.
	private static void GeneratePoint(float x, float y)
	{
		GameObject point = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		point.GetComponent<Renderer>().sharedMaterial = new Material(Shader.Find("Diffuse"));
		point.GetComponent<Renderer>().sharedMaterial.color = Color.green;

		// Change transform.
		point.transform.localScale = new Vector3(pointScale, pointScale, pointScale);
		point.AddComponent<IsometricPosition>().Set(x, y, 1.0f);

		point.transform.parent = points.transform;
	}

	// Many coordinates are shifted half a unit so that the sprites are position 
	// inside the tiles that the grid forms and not on top of the intersections.
	private static float shiftCoordinate(float coordinate)
	{
		return coordinate - 0.5f;	
	}

	// Destroy grid.
	public static void DestroyGrid()
	{
		if (grid != null)
			UnityEngine.Object.DestroyImmediate(grid);
	}
}
