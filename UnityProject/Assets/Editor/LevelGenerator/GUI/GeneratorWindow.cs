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
	private static GeneratorWindow windowInstance = null;

	private static GeneratorWindow GetWindow()
	{
		if (windowInstance == null) 
		{
			windowInstance = GetWindow<GeneratorWindow>(false, "Unity Level Generator");
		}
		return windowInstance;
	}

	[MenuItem("Level Generator/Create Level")]
	public static void OpenWindow()	
	{
		GetWindow ();
		GetWindow ().OnOpen();
	}

	public static void RefreshGUI()
	{
	}

	private Menu[] menus = {
		new UtilityMenu(),
		new GeneratorMenu(),
		new ObjectMenu()
	};

	private void OnOpen()
	{
		Focus ();
		Show ();
	}

	private void BuildButton(string name, Action action)
	{
		if (GUILayout.Button (new GUIContent (name, ""))) 
		{
			action ();
		}
	}

	public void OnGUI()
	{
		GUILayout.Label("Select a level below to work on.");
		foreach (string level in AssetController.GetLevels()) 
		{
			BuildButton ("Level: " + level, () => AssetController.WorkOnLevel (level));
		}

		foreach (Menu menu in menus) 
		{
			menu.Display ();
		}

		EditorGUILayout.LabelField("", GUI.skin.horizontalSlider);
		BuildButton ("Close", () => Close ());
	}
}
