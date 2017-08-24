using UnityEditor;
using UnityEngine;
using GeneratorNS;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Serializers;
using MapFeatures;

public class GeneratorWindow : EditorWindow
{
	/***
	 * The UI Window from Level Generator/Create Level. 
	 * 
	 * The Window is split in Menu components. Each Menu component is a class 
	 * that drows on the currently selected UI using the GUILayout and GUIEditorLayout 
	 * static methods.
	 * 
	 * OnGUI looks for events that are applied on the surface of the UI each time.
	 * We use the Singleton pattern in this situation as there should be only one 
	 * object of this type: i.e. the open window.
	 * 
	 */ 
	private static GeneratorWindow windowInstance = null;

	private static GeneratorWindow GetWindow()
	{
		if (windowInstance == null) 
			windowInstance = GetWindow<GeneratorWindow>(false, "Unity Level Generator");

		return windowInstance;
	}

	[MenuItem("Level Generator/Create Level")]
	public static void OpenWindow()	
	{
		GetWindow();
		GetWindow().OnOpen();
	}

	public static void RefreshGUI()
	{
	}

	private Menu[] menus = {
		new UtilityMenu(),
		new GeneratorMenu(),
		new ObjectMenu()
	};

	private void OnOpen()
	{
		Focus ();
		Show ();

		// TEMPORARY
		float shiftX = Mathf.Sqrt(2.0f) / 2;
		float shiftY = Mathf.Sqrt(2.0f / 3.0f) / 2;

		GameObject grid = new GameObject("Grid");
		GameObject points = new GameObject("Points");
		GameObject lines = new GameObject("Lines");
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

	private void BuildButton(string name, Action action)
	{
		if (GUILayout.Button(new GUIContent(name, ""))) 
			action();
	}

	public void OnGUI()
	{
		GUILayout.Label("Select a level below to work on.");
		foreach (string level in AssetController.GetLevels()) 
			BuildButton("Level: " + level, () => AssetController.WorkOnLevel(level));

		foreach (Menu menu in menus) 
			menu.Display();

		EditorGUILayout.LabelField("", GUI.skin.horizontalSlider);
		BuildButton ("Close", () => Close ());
	}
}
