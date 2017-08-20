using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class AssetController
{
	public static void WorkOnLevel (string levelName)
	{
		if (!IsScenePresent (levelName)) 
		{
			throw new UnityException("The level name" + levelName + "seems not to be present");
		}

		Debug.Log ("Working on level " + levelName);

		EditorApplication.OpenScene(Directory.GetCurrentDirectory() + "/Assets/Scenes/" + levelName + ".unity");
	}

	public static LinkedList<string> GetSprites()
	{
		return GetResurceNames ("Assets/Resources", ".png");
	}

	public static LinkedList<string> GetLevels()
	{
		return GetResurceNames ("Assets/Scenes", ".meta");
	}

	private static bool IsScenePresent(string sceneName) 
	{
		foreach (string name in GetLevels()) 
		{
			if (name == sceneName) 
			{
				return true;
			}
		}	
		return false;
	}

	private static LinkedList<string> GetResurceNames(string resPath, string extension)
	{
		LinkedList<string> names = new LinkedList<string>();
		foreach (string path in GetPaths(resPath)) 
		{
			if (path.EndsWith (extension))
			{
				continue;
			}
			names.AddLast (GetName(path, extension));
		}
		return names;
	}

	private static string GetName(string path, string extension)
	{
		string name = path.Substring(path.LastIndexOf('/') + 1);
		name = name.Substring(0, name.Length - extension.Length - 1);

		return name;
	}

	private static LinkedList<string> GetPaths(string directory)
	{
		LinkedList<string> paths = new LinkedList<string>();

		var info = new DirectoryInfo(directory);
		var fileInfo = info.GetFiles();
		foreach (FileInfo file in fileInfo) 
		{
			paths.AddLast (file.FullName);
		}

		return paths;
	}
}

