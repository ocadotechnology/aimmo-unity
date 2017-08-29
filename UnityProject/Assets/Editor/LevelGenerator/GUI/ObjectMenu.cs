using UnityEditor;
using UnityEngine;
using GeneratorNS;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Serializers;


public class ObjectMenu : IMenu
{
	/***
	 * ObjectMenu:
	 *   a menu used for attaching and detaching key listeners 
	 *   when an object is selected. It also provides a basic 
	 *   "inspector" which shows the X and Y coordinates.
	 */

	private bool keysRegistered;

	public ObjectMenu()
	{
		keysRegistered = false;
		EditorApplication.update = Update;
	}

	private void Update()
	{
		if (ObjectController.SelectedGameObject ()) 
		{
			if (!keysRegistered) 
			{
				keysRegistered = true;
				RegisterKeyListeners ();
			}
		} 
		else 
		{
			if (keysRegistered) 
			{
				keysRegistered = false;
				ClearKeyListeners ();
			}
		}
	}

	public void Display()
	{
		if (ObjectController.SelectedGameObject ()) 
		{
			InternalObjectMenu ();
		}
	}


	private void ClearKeyListeners()
	{
		KeyListener keyListener = ObjectController.GetKeyListener ();
		keyListener.ClearKeys ();
	}

	private void RegisterKeyListeners()
	{
		KeyListener keyListener = ObjectController.GetKeyListener ();
		keyListener.ClearKeys ();

		// Switch the select mode to lights
		keyListener.RegisterKey (KeyCode.L, () => {
			Debug.Log("Switching light selection");
			ObjectController.SwitchLightSelection();
		});

		Action<float, float> moveAction;
		if (!ObjectController.GetLightSelection ()) 
		{
			moveAction = (x, y) => ObjectController.Move (x, y);
		} 
		else 
		{
			moveAction = (x, y) => ObjectController.MoveLight (- 0.1f * y, 0.1f * x);
		}

		keyListener.RegisterKey (KeyCode.W, () => {
			Debug.Log("Up");
			moveAction(+1, 0);
		});
		keyListener.RegisterKey (KeyCode.A, () => {
			Debug.Log("Left");
			moveAction(0, +1);
		});
		keyListener.RegisterKey (KeyCode.S, () => {
			Debug.Log("Down");
			moveAction(-1, 0);
		});
		keyListener.RegisterKey (KeyCode.D, () => {
			Debug.Log("Right");
			moveAction(0, -1);
		});
		keyListener.RegisterKey (KeyCode.C, () => {
			EditorApplication.ExecuteMenuItem("Edit/Copy");
			EditorApplication.ExecuteMenuItem("Edit/Paste");
		});
	}

	private void InternalObjectMenu()
	{
		EditorGUILayout.LabelField ("", GUI.skin.horizontalSlider);

		GameObject go = ObjectController.GetGameObjects()[0];

		GUILayout.Label("Use W, A, S, D to move objects once they are selected.");
		GUILayout.Label("Use C to copy objects.");
		GUILayout.Label("Use L to switch to light selection.");

		GUILayout.BeginHorizontal ();
		IsometricPosition pos = ObjectController.GetPosition();

		GUILayout.Label("Current selected object: " + go.name);

		if (pos != null) 
		{
			float X = pos.x;
			float Y = pos.y;

			GUILayout.Label ("X:");
			X = EditorGUILayout.FloatField (X, GUILayout.MaxWidth (30));
			GUILayout.Label ("Y:");
			Y = EditorGUILayout.FloatField (Y, GUILayout.MaxWidth (30));

			pos.Set (X, Y);
		}

		GUILayout.EndHorizontal ();
	}

}