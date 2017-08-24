using UnityEditor;
using UnityEngine;
using GeneratorNS;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Serializers;

class GeneratorMenu : Menu
{
	/**
	 * GeneratorMenu:
	 *   a menu used for generating different types of objects in the same 
	 *   way objects are generated for the Main.unity scene
	 */
	private class GenData
	{
		/**
		 * GenData is a class that encapsulates all the values used by the UI interface.
		 * All of the values get updated each time. We use this design as we have multiple 
		 * chunks of data, each for different types of Generators.
	 	*/
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

	/**
	 * Generates GUI elements given a type of generator.
	 * The GenData it points to should not be shared by multiple UI elements.
	 */
	private void GeneratorGUI(Type generatorType, string buttonName, GenData data)
	{
		SpriteGeneratorBuilder builder = ObjectController.GetContext().
			AddComponent<SpriteGeneratorBuilder>().CreateBuilder(generatorType);

		GUILayout.BeginHorizontal ();
		// Update the data fields from the UI
		GUILayout.Label ("Name:"); data.name = GUILayout.TextField (data.name);
		GUILayout.Label ("X:"); data.x = GUILayout.TextField (data.x, GUILayout.MaxWidth(30));
		GUILayout.Label ("Y:"); data.y = GUILayout.TextField (data.y, GUILayout.MaxWidth(30));

		// A dropdown list which displays all the PNG files that can be used as spites 
		// See AssetController for 
		IList<string> spriteList = AssetController.GetSprites ();
		spriteList.Insert (0, "Default Sprite");

		string[] sprites = spriteList.ToArray<string> ();
		GUILayout.Label ("Sprite:"); 
		data.idx = EditorGUILayout.Popup(data.idx, sprites);

		GUILayout.Label ("Width:"); data.width = GUILayout.TextField (data.width, GUILayout.MaxWidth(30));
		GUILayout.Label ("Height:"); data.height = GUILayout.TextField (data.height, GUILayout.MaxWidth(30));

		GUILayout.EndHorizontal ();

		if (GUILayout.Button (new GUIContent (buttonName))) 
		{
			// We use the Builder pattern so that the GUI logic can get updated easily 
			builder = builder.ByCoord (float.Parse (data.x), float.Parse (data.y));
			if (data.idx != 0) 
			{
				builder = builder.ByPath (sprites [data.idx]);
			}
			if (data.width != "") 
			{
				builder = builder.ByWidth (int.Parse (data.width));
			}
			if (data.height != "") 
			{
				builder = builder.ByHeight (int.Parse (data.height));
			}

			// We append the file name of the sprite at the end so the type of 
			// the object is easily identifiable
			string finalName = data.name;
			finalName += "-" + sprites [data.idx].Replace (" ", "-");

			// The Builder is the component that should persist as a Script Component
			// together with the object. All the fields of the Builder *must* be serializable
			// to persist with the saved scene. The Builder can encasulate all behaviour 
			// of the generators.
			GameObject gameObject = builder.Build ().GenerateObject (finalName);
			gameObject.AddComponent<SpriteGeneratorBuilder> ().ByBuilder (builder);
		}

		UnityEngine.Object.DestroyImmediate(builder);
	}
}