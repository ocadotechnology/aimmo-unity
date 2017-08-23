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
		GameObject parent = new GameObject("Grid");
		for (int x = -10; x <= 10; x++)
			for (int y = -10; y <= 10; y++) 
			{
				GameObject point = GameObject.CreatePrimitive(PrimitiveType.Sphere);
				point.GetComponent<Renderer>().sharedMaterial.color = Color.yellow;
				point.transform.localScale = new Vector3(0.07f, 0.07f, 0.07f);

				float shiftX = Mathf.Sqrt(2.0f) / 2;
				float shiftY = Mathf.Sqrt(2.0f / 3.0f) / 2;

				float depth = x + y;
				float isoX = ((float) x) - 0.5f;
				float isoY = ((float) y) - 0.5f;

				point.name = "point(" + 
					Convert.ToString(isoX) + "," +
					Convert.ToString(isoY) + ")";

				point.transform.position = new Vector3(
					(isoX - isoY) * shiftX,
					(isoX + isoY) * shiftY,
					depth);

				point.transform.parent = parent.transform;
			}
	}

	private void BuildButton(string name, Action action)
	{
		if (GUILayout.Button (new GUIContent (name, ""))) 
		{
			action ();
		}
	}

	public void OnGUI()
	{
		GUILayout.Label("Select a level below to work on.");
		foreach (string level in AssetController.GetLevels()) 
		{
			BuildButton("Level: " + level, () => AssetController.WorkOnLevel (level));
		}

		foreach (Menu menu in menus) 
		{
			menu.Display();
		}

		EditorGUILayout.LabelField("", GUI.skin.horizontalSlider);
		BuildButton ("Close", () => Close ());
	}
}
