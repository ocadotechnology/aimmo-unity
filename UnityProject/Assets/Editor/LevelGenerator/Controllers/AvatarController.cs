using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class AvatarController
{
	private static bool running = false;

	public static bool Running()
	{
		return running;
	}

	public static void CreateAvatar(float x, float y)
	{
		Debug.Log ("Creating avatar");
		running = true;
	}

	public static void RemoveAvatar()
	{
		Debug.Log ("Removing avatar");
	}
}

