using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class ObjectController
{
	private static string contextName = "levelGeneratorContext";
	private static KeyListener keyListener = new KeyListener();

	public static GameObject GetContext()
	{
		GameObject go = GameObject.Find (contextName);
		if (go == null) 
		{
			return new GameObject (contextName);
		}
		return go;
	}
		
	public static KeyListener GetKeyListener()
	{
		return keyListener;
	}

	public static GameObject GetGameObject()
	{
		return Selection.activeGameObject;
	}

	public static bool SelectedGameObject()
	{
		try 
		{
			var t = Selection.activeGameObject.name;
		}
		catch (Exception e)
		{
			return false;
		}
		return true;
	}
}

