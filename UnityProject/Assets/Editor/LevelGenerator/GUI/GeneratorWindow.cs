using UnityEditor;
using UnityEngine;
using GeneratorNS;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

public class GeneratorWindow : EditorWindow
{
	private static GeneratorWindow windowInstace;
	private string sceneName = "Name";

	private class GenData
	{
		public string name = "name";
		public string x = "0";
		public string y = "0";
		public int idx = 0;
		public string width = "";
		public string height = "";
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
			AssetController.WorkOnLevel (level);
		}
	}

	private void ClearKeyListeners()
	{
		KeyListener keyListener = ObjectController.GetKeyListener ();
		keyListener.ClearKeys ();
	}

	private void RegisterKeyListeners()
	{
		KeyListener keyListener = ObjectController.GetKeyListener ();
		keyListener.ClearKeys ();
		keyListener.RegisterKey (KeyCode.W, () => {
			Debug.Log("Up");
		});
		keyListener.RegisterKey (KeyCode.A, () => {
			Debug.Log("Left");
		});
		keyListener.RegisterKey (KeyCode.S, () => {
			Debug.Log("Down");
		});
		keyListener.RegisterKey (KeyCode.D, () => {
			Debug.Log("Right");
		});
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
		EditorGUILayout.LabelField ("", GUI.skin.horizontalSlider);
		GUILayout.Label ("Create an object using the GUI below");
		EditorGUILayout.LabelField ("", GUI.skin.horizontalSlider);

		GeneratorGUI (typeof(ObstacleGenerator), "Gen obstacle", obstacleData);
		GeneratorGUI (typeof(HealthPointGenerator), "Gen health point", healthData);
	}

	private void GeneratorGUI(Type generatorType, string buttonName, GenData data)
	{
		SpriteGeneratorBuilder builder = new SpriteGeneratorBuilder (generatorType);

		GUILayout.BeginHorizontal ();
		GUILayout.Label ("Name:"); data.name = GUILayout.TextField (data.name);
		GUILayout.Label ("X:"); data.x = GUILayout.TextField (data.x, GUILayout.MaxWidth(30));
		GUILayout.Label ("Y:"); data.y = GUILayout.TextField (data.y, GUILayout.MaxWidth(30));

		LinkedList<string> spriteList = AssetController.GetSprites ();
		spriteList.AddFirst ("Use Default Sprite");

		string[] sprites = spriteList.ToArray<string> ();
		GUILayout.Label ("Sprite:"); 
		data.idx = EditorGUILayout.Popup(data.idx, sprites);

		GUILayout.Label ("Width:"); data.width = GUILayout.TextField (data.width, GUILayout.MaxWidth(30));
		GUILayout.Label ("Height:"); data.height = GUILayout.TextField (data.height, GUILayout.MaxWidth(30));

		GUILayout.EndHorizontal ();

		if (GUILayout.Button (new GUIContent (buttonName))) 
		{
			builder = builder.ByCoord (float.Parse(data.x), float.Parse(data.y));
			if (data.idx != 0) 
			{
				builder = builder.ByPath (sprites[data.idx]);
			}
			if (data.width != "") 
			{
				builder = builder.ByWidth (int.Parse(data.width));
			}
			if (data.height != "") 
			{
				builder = builder.ByHeight (int.Parse(data.height));
			}
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
		foreach (string level in AssetController.GetLevels()) 
		{
			LevelButton (level);
		}

		SaveButton ();

		GeneratorMenu ();

		if (ObjectController.SelectedGameObject ()) {
			EditorGUILayout.LabelField ("", GUI.skin.horizontalSlider);

			ObjectMenu ();
			RegisterKeyListeners ();
		} 
		else 
		{
			ClearKeyListeners ();
		}

		EditorGUILayout.LabelField("", GUI.skin.horizontalSlider);

		CloseButton ();
	}
}
