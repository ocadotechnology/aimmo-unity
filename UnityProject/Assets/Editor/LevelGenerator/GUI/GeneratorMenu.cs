using UnityEditor;
using UnityEngine;
using GeneratorNS;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Serializers;

class GeneratorMenu : IMenu
{
	private bool showGrid = true;
	private GameObject grid = null;

	private bool addLight = false;
	string lightX = "x";
	string lightY = "y";

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

		// Grid toggle.
		showGrid = EditorGUILayout.Toggle("Grid", showGrid);
		if (grid == null)
			grid = GameObject.Find ("Grid");
		else if (grid.activeSelf != showGrid)
			grid.SetActive(showGrid);
			
		EditorGUILayout.LabelField ("", GUI.skin.horizontalSlider);

		// Generators.
		GeneratorGUI(typeof(ObstacleGenerator), "Generate obstacle", obstacleData);
		GeneratorGUI(typeof(HealthPointGenerator), "Generate health point", healthData);
		GeneratorGUI(typeof(ScorePointGenerator), "Generate score point", scorePointData);

		addLight = EditorGUILayout.Toggle("Add light to your sprite", addLight);
		if (addLight) 
		{
			GUILayout.Label ("Relative position in the sprite: ");
			lightX = GUILayout.TextField(lightX, GUILayout.MaxWidth(30));
			lightY = GUILayout.TextField(lightY, GUILayout.MaxWidth(30));
		}
	}

	/**
	 * Generates GUI elements given a type of generator.
	 * The GenData it points to should not be shared by multiple UI elements.
	 */
	private void GeneratorGUI(Type generatorType, string buttonName, GenData data)
	{
		SpriteGeneratorBuilder builder = ObjectController.GetContext().
			AddComponent<SpriteGeneratorBuilder>().CreateBuilder(generatorType);

		GUILayout.BeginHorizontal();

		// A dropdown list which displays all the PNG files that can be used as spites 
		// See AssetController for 
		IList<string> spriteList = AssetController.GetSprites();
		spriteList.Insert(0, "Default Sprite");

		string[] sprites = spriteList.ToArray<string>();
		GUILayout.Label("Sprite:"); 
		data.idx = EditorGUILayout.Popup(data.idx, sprites);

		GUILayout.EndHorizontal ();

		if (GUILayout.Button (new GUIContent (buttonName))) 
		{
			// We use the Builder pattern so that the GUI logic can get updated easily 
			builder = builder.ByCoord(0.0f, 0.0f);
			if (data.idx != 0) 
				builder = builder.ByPath (sprites [data.idx]);
		
			if (data.width != "") 
				builder = builder.ByWidth (int.Parse (data.width));
			
			if (data.height != "") 
				builder = builder.ByHeight (int.Parse (data.height));

			// We append the file name of the sprite at the end so the type of 
			// the object is easily identifiable
			string finalName = "object-" + sprites[data.idx].Replace(" ", "-");

			// The Builder is the component that should persist as a Script Component
			// together with the object. All the fields of the Builder *must* be serializable
			// to persist with the saved scene. The Builder can encasulate all behaviour 
			// of the generators.
			GameObject gameObject = builder.Build().GenerateObject(finalName);
			gameObject.AddComponent<SpriteGeneratorBuilder>().ByBuilder(builder);
		}

		UnityEngine.Object.DestroyImmediate(builder);
	}
}