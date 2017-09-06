using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using GeneratorNS;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Serializers;
using MapFeatures;

/* The UI Window from Level Generator/Create Level. 
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

public class LevelBuilderWindow : EditorWindow
{
	private static LevelBuilderWindow windowInstance = null;

	// Displays directions.
	Texture2D controlsTexture;

	// Main menus.
	private IMenu[] menus = {
		new UtilityMenu(),
		new GeneratorMenu(),
		new ObjectMenu()	
	};

	private static LevelBuilderWindow GetWindow()
	{
		return windowInstance;
	}

	// 'Open' drop-down option.
	[MenuItem("Level Builder/Open")]
	public static void Open()	
	{
		windowInstance = GetWindow<LevelBuilderWindow>(false, "Level Builder");

		windowInstance.Show();
		windowInstance.Focus();
	}

	// 'Help' drop-down option. Go to github.
	[MenuItem("Level Builder/Help")]
	public static void Help()
	{
		Application.OpenURL("https://github.com/ocadotechnology/aimmo-unity/");
	}

	private void OnOpen()
	{
		// Load resource.
		controlsTexture = (Texture2D) Resources.Load("Images/controls");
	}

	public void OnGUI()
	{
		// Level buttons
		GUILayout.Label("Select a level below to work on:");
		foreach (string level in AssetController.GetLevels()) 
			if (GUILayout.Button(new GUIContent(level, ""))) 
				AssetController.WorkOnLevel(level);
		// Only
		if (SceneManager.GetActiveScene().name.Equals("Main"))
			return;

		GridController.BuildGrid();

		foreach (IMenu menu in menus) 
			menu.Display();

		// Directions to know how to move the objects.
		if (controlsTexture) 
		{
			GUIContent content = new GUIContent();
			content.image = controlsTexture;

			GUIStyle style = new GUIStyle();
			style.alignment = TextAnchor.MiddleCenter;
			style.imagePosition = ImagePosition.ImageOnly;

			GUILayout.Label(controlsTexture, style);
		}
	}
}
