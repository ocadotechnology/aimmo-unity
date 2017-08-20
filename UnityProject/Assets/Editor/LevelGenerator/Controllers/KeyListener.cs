using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class KeyListener : MonoBehaviour
{
	private SortedDictionary<string, Action> actions = new SortedDictionary<String, Action>();

	public void RegisterKey(string key, Action action)
	{
		actions.Add (key, action);
	}

	void Update() 
	{
		foreach (KeyValuePair<string, Action> listener in actions)
		{
			string key = listener.Key;
			Action action = listener.Value;
		
			if (Input.GetKeyDown (key)) 
			{
				action ();
			}
		}
	}
}
	