using UnityEditor;
using UnityEngine;
using GeneratorNS;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Serializers;
using MonoNS;

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

	[MenuItem("Level Generator/Create Level")]
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
			ObjectController.Move(+1, 0);
		});
		keyListener.RegisterKey (KeyCode.A, () => {
			Debug.Log("Left");
			ObjectController.Move(0, +1);
		});
		keyListener.RegisterKey (KeyCode.S, () => {
			Debug.Log("Down");
			ObjectController.Move(-1, 0);
		});
		keyListener.RegisterKey (KeyCode.D, () => {
			Debug.Log("Right");
			ObjectController.Move(0, -1);
		});
	}

	private void ObjectMenu()
	{
		EditorGUILayout.LabelField ("", GUI.skin.horizontalSlider);

		GameObject go = ObjectController.GetGameObject ();

		GUILayout.Label("Use W, A, S, D to move objects once they are selected.");

		GUILayout.BeginHorizontal ();
		IsometricPosition pos = ObjectController.GetPosition ();

		GUILayout.Label("Current selected object: " + go.name);

		if (pos != null) 
		{
			float X = pos.x;
			float Y = pos.y;

			GUILayout.Label ("X:");
			X = EditorGUILayout.FloatField (X, GUILayout.MaxWidth (30));
			GUILayout.Label ("Y:");
			Y = EditorGUILayout.FloatField (Y, GUILayout.MaxWidth (30));

			pos.Set (X, Y);
		}

		GUILayout.EndHorizontal ();
	}

	private GenData obstacleData = new GenData();
	private GenData healthData = new GenData();
	private GenData scorePointData = new GenData();

	private void GeneratorMenu()
	{
		EditorGUILayout.LabelField ("", GUI.skin.horizontalSlider);
		GUILayout.Label ("Create an object using the GUI below");
		EditorGUILayout.LabelField ("", GUI.skin.horizontalSlider);

		GeneratorGUI (typeof(ObstacleGenerator), "Gen obstacle", obstacleData);
		GeneratorGUI (typeof(HealthPointGenerator), "Gen health point", healthData);
		GeneratorGUI (typeof(ScorePointGenerator), "Gen score point", scorePointData);
	}

	private void GeneratorGUI(Type generatorType, string buttonName, GenData data)
	{
		SpriteGeneratorBuilder builder = ObjectController.GetContext().
			AddComponent<SpriteGeneratorBuilder>().CreateBuilder(generatorType);

		GUILayout.BeginHorizontal ();
		GUILayout.Label ("Name:"); data.name = GUILayout.TextField (data.name);
		GUILayout.Label ("X:"); data.x = GUILayout.TextField (data.x, GUILayout.MaxWidth(30));
		GUILayout.Label ("Y:"); data.y = GUILayout.TextField (data.y, GUILayout.MaxWidth(30));

		IList<string> spriteList = AssetController.GetSprites ();
		spriteList.Insert (0, "Default Sprite");

		string[] sprites = spriteList.ToArray<string> ();
		GUILayout.Label ("Sprite:"); 
		data.idx = EditorGUILayout.Popup(data.idx, sprites);

		GUILayout.Label ("Width:"); data.width = GUILayout.TextField (data.width, GUILayout.MaxWidth(30));
		GUILayout.Label ("Height:"); data.height = GUILayout.TextField (data.height, GUILayout.MaxWidth(30));

		GUILayout.EndHorizontal ();

		if (GUILayout.Button (new GUIContent (buttonName))) {
			builder = builder.ByCoord (float.Parse (data.x), float.Parse (data.y));
			if (data.idx != 0) {
				builder = builder.ByPath (sprites [data.idx]);
			}
			if (data.width != "") {
				builder = builder.ByWidth (int.Parse (data.width));
			}
			if (data.height != "") {
				builder = builder.ByHeight (int.Parse (data.height));
			}

			string finalName = data.name;
			finalName += "-" + sprites [data.idx].Replace (" ", "-");

			GameObject gameObject = builder.Build ().GenerateObject (finalName);
			gameObject.AddComponent<SpriteGeneratorBuilder> ().ByBuilder (builder);
		}

		UnityEngine.Object.DestroyImmediate(builder);
	}

	private UtilityMenu utilityMenu = new UtilityMenu();

	public void OnGUI()
	{
		// TODO: Replace with drop-down
		GUILayout.Label("Select a level below to work on.");
		foreach (string level in AssetController.GetLevels()) 
		{
			LevelButton (level);
		}

		utilityMenu.Menu();

		GeneratorMenu ();

		if (ObjectController.SelectedGameObject ()) 
		{
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
