using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class AvatarController
{
	private static GameObject avatarView;

	public static void CreateAvatar(float x, float y)
	{
		Debug.Log("Creating avatar");
		avatarView = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		Avatar avatar = avatarView.AddComponent<Avatar> ();
		avatar.Init(x, y);
	}

	public static void RemoveAvatar()
	{
		Debug.Log("Removing avatar");
		UnityEngine.Object.DestroyImmediate(avatarView);
	}
}

