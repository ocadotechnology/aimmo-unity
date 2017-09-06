using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

/* 
 * Allows the user to choose when to display the grid and how big it should be.
 */

public class GridMenu : IMenu
{
	private bool showGrid = true;

	private string width = "10";
	private string height = "10";

	public void Display()
	{
		EditorGUILayout.LabelField ("", GUI.skin.horizontalSlider);

		GUILayout.BeginHorizontal();

		// Grid toggle.
		showGrid = EditorGUILayout.Toggle("Grid", showGrid);

		// Width and height labels and text fields.
		GUILayout.Label("Width: ");
		width = GUILayout.TextField(width, GUILayout.MaxWidth(30));
		GUILayout.Label("Height: ");
		height = GUILayout.TextField(height, GUILayout.MaxWidth(30));

		GUILayout.EndHorizontal();

		if (showGrid) 
			try 
			{
				GridController.BuildGrid (Convert.ToInt32 (width), Convert.ToInt32 (height));
			}
			catch (FormatException exception) 
			{
				Debug.Log (
					"Grid width/height format exception." +
					"Please make sure you write an integer.");
			}
		else
			GridController.DestroyGrid();
	}

}
