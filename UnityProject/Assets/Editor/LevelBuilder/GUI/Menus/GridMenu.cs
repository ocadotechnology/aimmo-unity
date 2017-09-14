using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

/* 
 * Allows the user to choose when to display the grid and how big it should be.
 */

public class GridMenu: IMenu {
	private bool showGrid = true;

	private string width = "10";
	private string height = "10";

	public void Display() {
		EditorGUILayout.LabelField("", GUI.skin.horizontalSlider);

		// Enclosing in a BeginHorizontal() to indicate when to end and
		// move to the next horizontal line.
		GUILayout.BeginHorizontal();

		// Grid toggle.
		showGrid = EditorGUILayout.Toggle("Grid", showGrid);

		// Move to next line in the GUI.
		GUILayout.EndHorizontal();
		GUILayout.BeginHorizontal();

		width = GUIUtils.TextField("Width: ", width);
		height = GUIUtils.TextField("Height: ", height);

		// Move to next line in the GUI.
		GUILayout.EndHorizontal();

		if (showGrid) try {
			GridVisualiser.BuildGrid(Convert.ToInt32(width), Convert.ToInt32(height));
		}
		catch(FormatException exception) {
			Debug.Log("Grid width/height format exception. Make sure you input a valid number (integer).");
		}
		else GridVisualiser.DestroyGrid();
	}

}
