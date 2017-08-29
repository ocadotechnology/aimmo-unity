using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
public class ActionListener : MonoBehaviour
{
	private Dictionary<string, Action> actions;
	private IEnumerator coroutine;

	public void Start()
	{
		actions = new Dictionary<string, Action> ();
	
		coroutine = ExecuteActions (0.5f);
		StartCoroutine(coroutine);
	}

	public void RegisterAction(string actionName, Action action)
	{
		if (!actions.ContainsKey (actionName)) 
		{
			actions.Add (actionName, action);
		}
	}

	private IEnumerator ExecuteActions(float waitTime)
	{
		while (true) 
		{
			Debug.Log ("Executing actions.");
			foreach (Action action in actions.Values) 
			{
				action ();
			}
			yield return new WaitForSeconds(waitTime);
		}
	}
}

