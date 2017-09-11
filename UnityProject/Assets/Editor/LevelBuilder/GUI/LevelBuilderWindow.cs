using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEditor.SceneManagement;
using Generator;
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

[System.Serializable] 
public class LevelBuilderWindow : EditorWindow
{
	private static LevelBuilderWindow windowInstance = null;
	private int optionChosenByUser = 0;

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

		// Get all levels currently in the game.
		IList<string> levelList = AssetFetcher.GetLevels();

		// Popup() expects a string[] array, so convert it.
		string[] levels = levelList.ToArray<string>();

		// optionChosenByUser initialised to 0, so the dropdown will be blank. 
		// After an option is chosen for the first time, we update this.

		optionChosenByUser--;

		optionChosenByUser = EditorGUILayout.Popup(optionChosenByUser, levels);

		// Index is returned and levels start from 1 so incrementing it.
		optionChosenByUser++;

		if (GUILayout.Button (new GUIContent ("Work!")))
			AssetFetcher.WorkOnLevel ("Level" + optionChosenByUser);
		
		// Only let the level designer operate if it's a level.
		// ie. If the scene is called "Main" then it is not a level.
		// See the file hierarchy to understand.
		if (SceneManager.GetActiveScene().name.Equals("Main"))
			return;

		if (GUILayout.Button (new GUIContent ("Create a new level."))) {

			// We have a bug where Unity doesn't recognise our dynamically 
			// added objects through the level builder so we need to force
			// the change to be saved.
			EditorSceneManager.MarkAllScenesDirty();
			EditorSceneManager.SaveOpenScenes ();

			// Unload the scenes so we can create a new one.
			SceneHandler.unloadScenes();

			Scene newScene = SceneHandler.createScene();

			// Calling countScenes() inside SceneHandler to find the new 
			// filename to save our scene with. 
			int currentNoOfLevels = SceneHandler.countScenes ();
			currentNoOfLevels++;

			GameObject cameraGameObject = new GameObject("Main Camera");
			cameraGameObject.AddComponent<Camera>();


			if (!EditorSceneManager.SaveScene (newScene, "Assets/Scenes/Levels/Level" + currentNoOfLevels + ".unity")) {
				Debug.Log ("The savescene line failed!!!!!!!!!!!!!");
				// TODO: check for errors here and remove the curly brackets.
			}

		} // if

		foreach (IMenu menu in menus) 
			menu.Display();
	} 
}
