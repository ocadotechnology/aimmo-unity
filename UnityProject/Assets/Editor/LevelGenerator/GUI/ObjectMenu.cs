using UnityEditor;
using UnityEngine;
using GeneratorNS;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Serializers;
using MonoNS;

class ObjectMenu : Menu
{
	public ObjectMenu()
	{
	}

	public void Display()
	{
		if (ObjectController.SelectedGameObject ()) 
		{
			InternalObjectMenu ();
			RegisterKeyListeners ();
		} 
		else 
		{
			ClearKeyListeners ();
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
		keyListener.RegisterKey (KeyCode.W, () => {
			Debug.Log("Up");
			ObjectController.Move(+1, 0);
		});
		keyListener.RegisterKey (KeyCode.A, () => {
			Debug.Log("Left");
			ObjectController.Move(0, +1);
		});
		keyListener.RegisterKey (KeyCode.S, () => {
			Debug.Log("Down");
			ObjectController.Move(-1, 0);
		});
		keyListener.RegisterKey (KeyCode.D, () => {
			Debug.Log("Right");
			ObjectController.Move(0, -1);
		});
	}

	private void InternalObjectMenu()
	{
		EditorGUILayout.LabelField ("", GUI.skin.horizontalSlider);

		GameObject go = ObjectController.GetGameObject ();

		GUILayout.Label("Use W, A, S, D to move objects once they are selected.");

		GUILayout.BeginHorizontal ();
		IsometricPosition pos = ObjectController.GetPosition ();

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