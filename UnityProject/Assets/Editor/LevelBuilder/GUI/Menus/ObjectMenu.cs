using UnityEditor;
using UnityEngine;
using Generator;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Serializers;

/* A menu used for attaching and detaching key listeners 
 * when an object is selected. It also provides a basic 
 * "inspector" which shows the X and Y coordinates.
 */

public class ObjectMenu : IMenu
{
	Texture2D controlsTexture;

	private bool keysRegistered;
	private bool objectSelected;

	public ObjectMenu()
	{
		keysRegistered = false;

		// This adds a callback to the editor application update.
		// This allows us to register controlls using the key listener.
		// We use keysRegisterd to register the controlls only once as when
		// controlls are registred, the other hotkeys are temproarilly deactivated.
		// The original Unity hotkeys will not be overrided due to the += operator.
		EditorApplication.update += Update;
	}

	private void Update()
	{
		// Register the keys when an object or more are selected.
		// Disable them when nothing is selected.
		if (ObjectController.HighlightSelectedObjects()) 
		{
			if (!keysRegistered) 
			{
				keysRegistered = true;
				RegisterKeyListeners();
			}
		} 
		else if (keysRegistered) 
		{
			keysRegistered = false;
			ClearKeyListeners();
		}
	}

	public void Display()
	{
		EditorGUILayout.LabelField ("", GUI.skin.horizontalSlider);

		// Show controls image.
		controlsTexture = (Texture2D) Resources.Load("Images/controls");

		GUIContent content = new GUIContent();
		content.image = controlsTexture;

		GUIStyle style = new GUIStyle();
		style.alignment = TextAnchor.MiddleCenter;
		style.imagePosition = ImagePosition.ImageOnly;
		style.fixedHeight = 100.0f;

		GUILayout.Label(controlsTexture, style);
	}

	private void ClearKeyListeners()
	{
		KeyListener keyListener = ObjectController.GetKeyListener();
		keyListener.ClearKeys();
	}

	private void RegisterKeyListeners()
	{
		KeyListener keyListener = ObjectController.GetKeyListener();
		keyListener.ClearKeys();

		// Switch the select mode to lights.
		keyListener.RegisterKey(KeyCode.L, () => 
		{
			ObjectController.SwitchLightSelection();
		});

		// Choose if the action is to move the object or the light.
		Action<float, float> moveAction = (x, y) => ObjectController.Move(x, y);

		// Either way the keys have a similar effect on both. It is important
		// to point out though that in the case of the objects it moves them around
		// the grid, whereas for lights they are moved in the 2D plane formed by
		// the sprite.
		keyListener.RegisterKey(KeyCode.W, () => 
		{
			moveAction(1.0f, 0.0f);
		});
		keyListener.RegisterKey(KeyCode.A, () => 
		{
			moveAction(0.0f, 1.0f);
		});
		keyListener.RegisterKey(KeyCode.S, () =>
		{
			moveAction(-1.0f, 0.0f);
		});
		keyListener.RegisterKey(KeyCode.D, () => 
		{
			moveAction(0.0f, -1.0f);
		});
	}
}
