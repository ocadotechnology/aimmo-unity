using UnityEditor;
using UnityEngine;
using GeneratorNS;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Serializers;
using MonoNS;

class GeneratorMenu : Menu
{
	private class GenData
	{
		public string name = "name";
		public string x = "0";
		public string y = "0";
		public int idx = 0;
		public string width = "";
		public string height = "";
	}

	private GenData obstacleData;
	private GenData healthData;
	private GenData scorePointData;

	public GeneratorMenu()
	{
		obstacleData = new GenData();
		healthData = new GenData();
		scorePointData = new GenData();
	}
		
	public void Display()
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
}