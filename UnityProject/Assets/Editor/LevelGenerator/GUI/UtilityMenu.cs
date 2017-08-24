using UnityEditor;
using UnityEngine;
using GeneratorNS;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Serializers;
using MonoNS;

class UtilityMenu : Menu
{
	/**
	 * Utility Menu:
	 *   a menu for setting cameras, exporting levels, etc.
	 */

	private int exportedLevelIdx;

	public UtilityMenu()
	{
		exportedLevelIdx = 0;
	}

	public void Display()
	{
		EditorGUILayout.LabelField("", GUI.skin.horizontalSlider);

		GUILayout.Label("Click on the camera you want to choose.");
		if (GUILayout.Button (new GUIContent ("Orthographic Projection")))
		{
			CameraController.SetOrthographicCamera ();
		}

		IList<string> levelList = AssetController.GetLevels ();
		levelList.Insert (0, "Default Level");
		string[] levels = levelList.ToArray ();

		GUILayout.Label("Choose the level you want to export.");
		exportedLevelIdx = EditorGUILayout.Popup(exportedLevelIdx, levels);

		if (GUILayout.Button (new GUIContent ("Export Level")))
		{
			string exportJson = ExportController.GetExportFromSerializer (
				new JSONSerializer(exportedLevelIdx != 0 ? levels[exportedLevelIdx] : null)
			);
			Debug.Log (exportJson);

			ExportController.ExportFile (exportJson);
		}
	}
}