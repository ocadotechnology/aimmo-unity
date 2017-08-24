using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class AvatarController
{
	private static string avatarName = "AvatarView";

	public static void CreateAvatar(float x, float y)
	{
		Debug.Log ("Creating avatar");

		GameObject avatarView = GameObject.CreatePrimitive (PrimitiveType.Sphere);
		avatarView.name = avatarName;

		Avatar avatar = avatarView.AddComponent<Avatar> ();
		avatar.Init (x, y);
	}

	public static void RemoveAvatar()
	{
		if (UnityEngine.GameObject.Find (avatarName)) 
		{
			Debug.Log ("Removing Avatar");
			UnityEngine.Object.DestroyImmediate (GameObject.Find (avatarName));	
		}
	}
}

