using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class ObjectController
{
	/**
	 * An object controller responsible for providing a Singleton
	 * instance for KeyListener and Context. The Context is used to 
	 * attach objects to it; the Context can be used as:
	 *   ObjectController.GetContext.AddComponent<*component-class-name*>();
	 * 
	 * It also provides a way to get the currently selected game object.
	 */
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

	public static void Move(float x, float y)
	{
		foreach (GameObject gameObject in Selection.gameObjects) 
		{
			IsometricPosition position = gameObject.GetComponent<IsometricPosition>();
			position.Set(position.x + x, position.y + y);
		}
	}

	public static void SwitchLightSelection()
	{
		lightSelection = !lightSelection;
	}

	public static bool GetLightSelection()
	{
		return lightSelection;
	}

	public static void MoveLight(float x, float y)
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
		
	// There is only one static key listener on ObjectController,
	// but more can be registered.
	public static KeyListener GetKeyListener()
	{
		return keyListener;
	}

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

