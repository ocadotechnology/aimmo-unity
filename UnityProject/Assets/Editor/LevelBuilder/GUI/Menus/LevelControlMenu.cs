using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using Serializers;
using GeneratorNS;

/* Part of the menu that lets the user:
 *  1) 'Play Level': to try out the level by adding an avatar and go to game mode.
 *  2) 'Stop Level': to get out of game mode and remove the avatar.
 *  3) 'Export Level': to export the level to JSON.
 */

class LevelControlMenu : IMenu
{
	public void Display()
	{
		EditorGUILayout.LabelField("", GUI.skin.horizontalSlider);

		if (GUILayout.Button("Play Level"))
		{
			AvatarController.CreateAvatar(0.0f, 0.0f);
			EditorApplication.ExecuteMenuItem("Edit/Play");
		}

		if (GUILayout.Button("Stop Level"))
		{
			if (Application.isPlaying)
				EditorApplication.ExecuteMenuItem("Edit/Play");
			
			AvatarController.RemoveAvatar ();
		}

		if (GUILayout.Button("Export Level"))
		{
			string sceneName = SceneManager.GetActiveScene().name;
			ExportController.ExportFile(sceneName);
		}
	}
}
