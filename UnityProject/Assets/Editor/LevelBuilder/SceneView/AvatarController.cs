using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class AvatarController
{
	private static string avatarName = "Avatar";

	public static void CreateAvatar(float x, float y)
	{
		GameObject avatar = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		avatar.name = avatarName;
		avatar.GetComponent<Renderer>().material = new Material(Shader.Find("Diffuse"));
		avatar.GetComponent<Renderer>().material.color = Color.cyan;
		avatar.transform.localScale = new Vector3(0.3f, 1.0f, 0.3f);

		avatar.AddComponent<Avatar>().Init(x, y);
	}

	public static void RemoveAvatar()
	{
		if (UnityEngine.GameObject.Find(avatarName)) 
			UnityEngine.Object.DestroyImmediate(GameObject.Find(avatarName));	
	}
}
