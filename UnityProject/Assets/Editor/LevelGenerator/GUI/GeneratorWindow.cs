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

	// Displays directions.
	Texture2D controlsTexture;

	// Main menus
	private IMenu[] menus = {
		new UtilityMenu(),
		new GeneratorMenu(),
		new ObjectMenu()	
	};

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

	private void OnOpen()
	{
		Focus();
		Show();

		GridController.BuildGrid ();
	
		// Load resource.
		controlsTexture = Resources.Load("Images/controls") as Texture2D;
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

		foreach (IMenu menu in menus) 
			menu.Display();

		// Close editor window.
		EditorGUILayout.LabelField("", GUI.skin.horizontalSlider);
		BuildButton ("Close", () => Close ());

		// Directions to know how to move the objects.
		if (controlsTexture) 
		{
			GUIContent content = new GUIContent();
			content.image = controlsTexture;

			GUIStyle style = new GUIStyle();
			style.alignment = TextAnchor.MiddleCenter;
			style.imagePosition = ImagePosition.ImageOnly;
			style.stretchHeight = true;
			style.stretchWidth = true;

			GUILayout.Label(controlsTexture, style);
		}
	}
}
