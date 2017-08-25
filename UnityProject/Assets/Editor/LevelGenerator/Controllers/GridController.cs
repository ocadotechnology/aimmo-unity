using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;

public class GridController
{
	private static float shiftX = Mathf.Sqrt(2.0f) / 2;
	private static float shiftY = Mathf.Sqrt(2.0f / 3.0f) / 2;

	private static GameObject grid = null;
	private static GameObject points = null;
	private static GameObject lines = null;

	public static void BuildGrid()
	{
		if (grid != null) 
		{
			return;
		}

		grid = new GameObject("Grid");
		points = new GameObject("Points");
		lines = new GameObject("Lines");

		points.transform.parent = grid.transform;
		lines.transform.parent = grid.transform;
		for (int x = -5; x <= 5; x++) 
		{
			float depth = x + 1;
			float isoX = ((float)x) - 0.5f;
			float isoY = -0.5f;

			GameObject lineH = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
			lineH.GetComponent<Renderer>().sharedMaterial = new Material(Shader.Find("Diffuse"));
			lineH.GetComponent<Renderer>().sharedMaterial.color = Color.yellow;
			lineH.transform.position = new Vector3(
				(isoX - isoY) * shiftX,
				(isoX + isoY) * shiftY,
				depth);
			lineH.transform.localScale = new Vector3(0.02f, 5.0f * Mathf.Sqrt(2.0f), 0.02f);
			lineH.transform.rotation = Quaternion.FromToRotation(
				Vector3.up,
				new Vector3(-shiftX, shiftY, 1.0f)) * lineH.transform.rotation;
			lineH.transform.parent = lines.transform;

			GameObject lineV = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
			lineV.GetComponent<Renderer>().sharedMaterial = new Material(Shader.Find("Diffuse"));
			lineV.GetComponent<Renderer>().sharedMaterial.color = Color.yellow;
			lineV.transform.position = new Vector3(
				(isoY - isoX) * shiftX,
				(isoY + isoX) * shiftY,
				depth);
			lineV.transform.localScale = new Vector3(0.02f, 5.0f * Mathf.Sqrt(2.0f), 0.02f);
			lineV.transform.rotation = Quaternion.FromToRotation(
				Vector3.up,
				new Vector3(shiftX, shiftY, 1.0f)) * lineV.transform.rotation;
			lineV.transform.parent = lines.transform;

			for (int y = -5; y <= 5; y++) 
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
			}
		}
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

