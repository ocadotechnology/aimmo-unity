using UnityEditor;
using UnityEngine;
using Generator;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Serializers;

/* A menu used for generating different types of objects in the same 
 * way objects are generated for the Main.unity scene.
 */

class GeneratorMenu : IMenu
{
	/* GenData is a class that encapsulates all the values used by the UI interface.
	 * All of the values get updated each time. We use this design as we have multiple 
	 * chunks of data, each for different types of Generators.
 	 */ 
	private class GenerationData
	{
		public int idx = 0;
		public string width = "";
		public string height = "";
	}

	private GenerationData obstacleData;
	private GenerationData healthData;
	private GenerationData scorePointData;
	private LightSubMenu lightsUI;

	public GeneratorMenu()
	{
		obstacleData = new GenerationData();
		lightsUI = new LightSubMenu();
	}

	public void Display()
	{		
		EditorGUILayout.LabelField ("", GUI.skin.horizontalSlider);

		// Generators.
		GeneratorGUI(typeof(ObstacleGenerator), "Generate obstacle", obstacleData);

		// Light Data UI
		lightsUI.Display();
	}

	/**
	 * Generates GUI elements given a type of generator.
	 * The GenData it points to should not be shared by multiple UI elements.
	 */
	private void GeneratorGUI(Type generatorType, string buttonName, GenerationData data)
	{
		SpriteGeneratorBuilder builder = ObjectController.GetContext().
			AddComponent<SpriteGeneratorBuilder>().CreateBuilder(generatorType);

		GUILayout.BeginHorizontal();

		// A dropdown list which displays all the PNG files that can be used as spites 
		// See AssetController for 
		IList<string> spriteList = AssetFetcher.GetSprites();
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

			if (lightsUI.addLight)
				builder = builder.ByLightData(lightsUI.lightData);

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