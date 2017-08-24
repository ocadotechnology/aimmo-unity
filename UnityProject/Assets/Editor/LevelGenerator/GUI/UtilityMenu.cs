using UnityEditor;
using UnityEngine;
using GeneratorNS;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Serializers;

class UtilityMenu : Menu
{
	/**
	 * Utility Menu:
	 *   a menu for setting cameras, exporting levels, etc.
	 */

	private int exportedLevelIdx;
	private bool isPlaying;
	private bool buttonPressed;

	public UtilityMenu()
	{
		exportedLevelIdx = 0;
	}

	private void BuildButton(string name, Action action)
	{
		if (GUILayout.Button(new GUIContent(name, ""))) 
			action();
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

		BuildButton ("Export Level", () => {
			Debug.Log (GetExportJson (levels));
			ExportController.ExportFile (GetExportJson (levels));
		});

		TryLevel (levels);
	}

	private string GetExportJson(string[] levels)
	{
		string exportJson = ExportController.GetExportFromSerializer (
			new JSONSerializer(exportedLevelIdx != 0 ? levels[exportedLevelIdx] : null)
		);

		return exportJson;
	}

	private void TryLevel(string[] levels)
	{
		BuildButton ("Start Level", () => {
			AvatarController.CreateAvatar(0.0f, 0.0f);
			EditorApplication.ExecuteMenuItem("Edit/Play");
		});

		BuildButton ("Stop Level", () => {
			if (Application.isPlaying)
			{
				EditorApplication.ExecuteMenuItem("Edit/Play");
			}
			AvatarController.RemoveAvatar ();
		});
	}
}