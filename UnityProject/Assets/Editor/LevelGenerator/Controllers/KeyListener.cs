using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using GeneratorNS;

public class KeyListener 
{
	/**
	 * A dictionary that maps a key code to an Action.
	 * Can be used to register actions for key controlls.
	 */
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
		if (actions.ContainsKey(keyCode)) 
			actions[keyCode]();
	}
}
	