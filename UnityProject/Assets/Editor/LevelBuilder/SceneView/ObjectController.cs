using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

/* An object controller responsible for providing a Singleton
 * instance for KeyListener and Context. The Context is used to 
 * attach objects to it; the Context can be used as:
 *   ObjectController.GetContext.AddComponent<*component-class-name*>();
 * 
 * It also provides a way to get the currently selected game object.
 */

public class ObjectController
{
	private static string contextName = "Level Generator Context";
	private static KeyListener keyListener = new KeyListener();
	private static bool lightSelection = false;

	private static List<GameObject> selectedGameObjects = new List<GameObject>();

	public static GameObject GetContext()
	{
		GameObject go = GameObject.Find(contextName);
		if (go == null) 
			return new GameObject(contextName);
		
		return go;
	}

	// Main move action.
	public static void Move(float x, float y)
	{
		if (lightSelection)
			MoveLight(-0.1f * y, 0.1f * x);
		else
			MoveObjects(x, y);
	}

	// Switch called from the object menu.
	public static void SwitchLightSelection()
	{
		lightSelection = !lightSelection;
	}

	// Move child light of main gameobject.
	private static void MoveLight(float x, float y)
	{
		foreach (GameObject gameObject in Selection.gameObjects) 
		{
			Light lightObject = gameObject.GetComponentInChildren<Light>();

			if (lightObject == null) 
				continue;

			GameObject lightAttachedTo = lightObject.gameObject;

			Vector3 position = lightAttachedTo.transform.position;
			lightAttachedTo.transform.position = new Vector3(position.x + x, position.y + y, position.z);
		}
	}

	// Move current selection.
	private static void MoveObjects(float x, float y)
	{
		GameObject[] gameObjects = Selection.gameObjects;

		foreach (GameObject gameObject in gameObjects) 
		{
			IsometricPosition position = gameObject.GetComponent<IsometricPosition>();
			position.Set(position.x + x, position.y + y);
		}
	}
		
	// There is only one static key listener on ObjectController,
	// but more can be registered.
	public static KeyListener GetKeyListener()
	{
		return keyListener;
	}

	// Highlight slected objects and returns true if there were any. Also handles
	// returning the unselected objects to the normal alpha.
	public static bool HighlightSelectedObjects()
	{
		List<GameObject> previousSelection = new List<GameObject>(selectedGameObjects);
		selectedGameObjects.Clear();

		foreach (GameObject gameObject in Selection.gameObjects) 
		{
			selectedGameObjects.Add(gameObject);
			previousSelection.Remove(gameObject);

			ChangeSpriteRendererAlpha(gameObject, 0.5f);
		}

		// Handle those not selected anymore.
		foreach (GameObject gameObject in previousSelection)
			if (gameObject != null)
				ChangeSpriteRendererAlpha(gameObject, 1.0f);
				
		return Selection.gameObjects.Length > 0;
	}

	// Helper method to change the alpha.
	private static void ChangeSpriteRendererAlpha(GameObject gameObject, float alpha)
	{
		SpriteRenderer renderer = gameObject.GetComponent<SpriteRenderer>();
		if (renderer != null)
		{
			Color color = renderer.color;
			color.a = alpha;

			renderer.color = color;
		}
	}
}

