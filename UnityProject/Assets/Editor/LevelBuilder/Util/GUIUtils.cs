using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class GUIUtils
{
	// A utility method that takes creates EditorGUILayout.TextField
	// with no space between the label and the textfield.
	public static string TextField(string label, string text)
	{
		var textDimensions = GUI.skin.label.CalcSize (new GUIContent (label));
		EditorGUIUtility.labelWidth = textDimensions.x;

		return EditorGUILayout.TextField (label, text);
	}
}
	