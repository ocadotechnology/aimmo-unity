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

	// Main menus.
	private IMenu[] menus = {
		new LevelControlMenu(),
		new GridMenu(),
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

		SetUpScene();
	}

	// 'Help' drop-down option. Go to github.
	[MenuItem("Level Builder/Help")]
	public static void Help()
	{
		Application.OpenURL("https://github.com/ocadotechnology/aimmo-unity/");
	}

	// Any intialisation required for the scene when building a level goes here.
	private static void SetUpScene()
	{
		Camera camera = Camera.main;

		camera.transform.position = new Vector3(0.0f, 0.0f, -100.0f);
		camera.transform.rotation = Quaternion.Euler(Vector3.zero);
		camera.orthographic = true;
		camera.orthographicSize = 5.0f;
		camera.farClipPlane = 1000.0f;
		camera.nearClipPlane = 0.3f;
	}

	public void OnGUI()
	{
		// Level buttons.
		GUILayout.Label("Select a level below to work on:");
		foreach (string level in AssetController.GetLevels()) 
			if (GUILayout.Button(new GUIContent(level, ""))) 
				AssetController.WorkOnLevel(level);
		
		// Only let the level designer operate if it's a level. 
		if (SceneManager.GetActiveScene().name.Equals("Main"))
			return;

		foreach (IMenu menu in menus) 
			menu.Display();
	}
}
