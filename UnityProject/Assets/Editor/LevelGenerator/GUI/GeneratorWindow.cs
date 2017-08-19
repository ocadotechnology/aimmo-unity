using UnityEditor;
using UnityEngine;
using GeneratorNS;
using System;

public class GeneratorWindow : EditorWindow
{
	private static GeneratorWindow windowInstace;
	private string sceneName = "Name";

	private class GenData
	{
		public string name = "name";
		public string x = "0";
		public string y = "0";
	}

	[MenuItem("Window/Create Level")]
	public static void OpenWindow()
	{
		windowInstace = GetWindow<GeneratorWindow>(false, "Unity Level Generator");

		windowInstace.Focus ();
		windowInstace.Show ();
	}

	private void CloseButton() 
	{
		if (GUILayout.Button (new GUIContent ("Close", ""))) 
		{
			windowInstace.Close ();
		}
	}

	private void LevelButton(string level)
	{
		if (GUILayout.Button (new GUIContent ("Level: " + level, ""))) 
		{
			SceneController.WorkOnLevel (level);
		}
	}

	private void ObjectMenu()
	{
		GameObject go = ObjectController.GetGameObject ();

		GUILayout.Label("Current selected object: " + go.name);
	}

	private GenData obstacleData = new GenData();
	private GenData healthData = new GenData();

	private void GeneratorMenu()
	{
		//EditorGUILayout.LabelField("", GUI.skin.horizontalSlider);
		GUILayout.Label("Generator interface.");

		GeneratorGUI (typeof(ObstacleGenerator), "Gen obstacle", obstacleData);
		GeneratorGUI (typeof(HealthPointGenerator), "Gen health point", healthData);

	}

	private void GeneratorGUI(Type generatorType, string buttonName, GenData data)
	{
		SpriteGeneratorBuilder builder = new SpriteGeneratorBuilder (typeof(ObstacleGenerator));

		GUILayout.Label ("Name:"); data.name = GUILayout.TextField (data.name, 10);
		GUILayout.Label ("X:"); data.x = GUILayout.TextField (data.x, 5);
		GUILayout.Label ("Y:"); data.y = GUILayout.TextField (data.y, 5);

		if (GUILayout.Button (new GUIContent (buttonName))) 
		{
			builder = builder.ByCoord (float.Parse(data.x), float.Parse(data.y));
			builder.Build ().GenerateObject (data.name);
		}
	}

	private void SaveButton()
	{
	}

	public void OnGUI()
	{
		// TODO: Replace with drop-down
		GUILayout.Label("Select a level below to work on.");
		foreach (string level in SceneController.GetLevels()) 
		{
			LevelButton (level);
		}

		SaveButton ();

		GeneratorMenu ();

		if (ObjectController.SelectedGameObject ()) 
		{
			//EditorGUILayout.LabelField("", GUI.skin.horizontalSlider);
			ObjectMenu ();
		}

		//EditorGUILayout.LabelField("", GUI.skin.horizontalSlider);

		CloseButton ();
	}
}
