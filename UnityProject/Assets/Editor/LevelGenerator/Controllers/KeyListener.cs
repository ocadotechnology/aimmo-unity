using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using GeneratorNS;

public class KeyListener 
{
	private SortedDictionary<KeyCode, Action> actions = new SortedDictionary<KeyCode, Action>();

	public void RegisterKey(KeyCode key, Action action)
	{
		actions.Add (key, action);
	}

	public void ClearKeys()
	{
		actions = new SortedDictionary<KeyCode, Action>();
	}

	public void Receive(KeyCode keyCode) 
	{
		if (actions.ContainsKey (keyCode)) 
		{
			actions[keyCode] ();
		}
	}

	// Ctrl + H
	[MenuItem("Level Generator/Save Level %h")]
	static void PlayGame()
	{
		EditorSceneManager.SaveScene (EditorSceneManager.GetActiveScene());
	}

	// Ctrl + J
	[MenuItem("Level Generator/Copy Selected Object %j")]
	static void CopyCurrentObject()
	{
		if (ObjectController.SelectedGameObject ()) 
		{
			GameObject beforeSelectedObject = ObjectController.GetGameObject();

			EditorApplication.ExecuteMenuItem("Edit/Copy");
			EditorApplication.ExecuteMenuItem("Edit/Paste");

			GameObject currentlySelectedObject = ObjectController.GetGameObject ();


		}
	}
}
	