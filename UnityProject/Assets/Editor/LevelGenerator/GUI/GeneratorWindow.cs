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

	private void BuildButton(string name, Action action)
	{
		if (GUILayout.Button (new GUIContent (name, ""))) 
		{
			action ();
		}
	}

	[MenuItem("Level Generator/Create Level")]
	public static void OpenWindow()	
	{
		windowInstace = GetWindow<GeneratorWindow>(false, "Unity Level Generator");

		windowInstace.Focus ();
		windowInstace.Show ();
	}

	private Menu[] menus = {
		new UtilityMenu(),
		new GeneratorMenu(),
		new ObjectMenu()
	};

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
		BuildButton ("Close", () => windowInstace.Close ());
	}
}
