using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class ObjectController
{
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

	public static void GetKeys()
	{
		Debug.Log ("here");
	}
}

