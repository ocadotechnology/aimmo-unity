using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class SceneController
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

	public static LinkedList<string> GetLevels()
	{
		return GetSceneNames ();
	}

	private static bool IsScenePresent(string sceneName) 
	{
		foreach (string name in GetSceneNames()) 
		{
			if (name == sceneName) 
			{
				return true;
			}
		}	
		return false;
	}

	private static LinkedList<string> GetSceneNames()
	{
		LinkedList<string> names = new LinkedList<string>();
		foreach (string path in GetPaths("Assets/Scenes")) 
		{
			if (path.EndsWith (".meta"))
			{
				continue;
			}

			string name = path.Substring(path.LastIndexOf('/') + 1);
			name = name.Substring(0, name.Length - 6);

			names.AddLast (name);
		}
		return names;
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

