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
		GameObject parent = new GameObject("Grid");
		for (int x = -5; x <= 5; x++) 
		{
			float depth = x;
			float isoX = ((float)x) - 0.5f;
			float isoY = -0.5f;

			GameObject lineH = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
			lineH.GetComponent<Renderer>().sharedMaterial.color = Color.green;
			lineH.transform.position = new Vector3(
				(isoX - isoY) * shiftX,
				(isoX + isoY) * shiftY,
				depth);

			GameObject lineV = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
			lineV.GetComponent<Renderer>().sharedMaterial.color = Color.green;
			lineV.transform.position = new Vector3(
				(isoY - isoX) * shiftX,
				(isoY + isoX) * shiftY,
				depth);

			for (int y = -5; y <= 5; y++) 
			{
				GameObject point = GameObject.CreatePrimitive(PrimitiveType.Sphere);
				point.GetComponent<Renderer>().sharedMaterial.color = Color.yellow;
				point.transform.localScale = new Vector3(0.07f, 0.07f, 0.07f);

				depth = x + y;
				isoX = ((float)x) - 0.5f;
				isoY = ((float)y) - 0.5f;

				point.name = "point(" +
					Convert.ToString(isoX) + "," +
					Convert.ToString(isoY) + ")";

				point.transform.position = new Vector3 (
					(isoX - isoY) * shiftX,
					(isoX + isoY) * shiftY,
					depth);

				point.transform.parent = parent.transform;
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
