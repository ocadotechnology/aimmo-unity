using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;

/* The "Controllers" are mostly designed as static libraries that 
 * provide mostly Editor-releated functionality.
 * 
 * A Library used for accessing scenes and assets.
 * 
 * The functionality is implemented using mostly the System.IO functions 
 * and it works only on Linux and Mac for the moment.
 */

public class AssetController
{
	public static void WorkOnLevel(string levelName)
	{
		if (!IsScenePresent(levelName)) 
			throw new UnityException("The level name" + levelName + "seems not to be present");

		EditorApplication.OpenScene(Directory.GetCurrentDirectory() + "/Assets/Editor/LevelBuilder/Levels/" + levelName + ".unity");
	}

	private static bool IsScenePresent(string sceneName) 
	{
		foreach (string name in GetLevels()) 
			if (name == sceneName) 
				return true;

		return false;
	}

	public static IList<string> GetSprites()
	{
		return GetResourceNames("Assets/Resources", ".png");
	}

	public static IList<string> GetLevels()
	{
		return GetResourceNames("Assets/Scenes", ".unity").ToList();
	}

	private static List<string> GetResourceNames(string resPath, string extension)
	{
		List<string> names = new List<string>();
		foreach (string path in GetPaths(resPath)) 
		{
			if (!path.EndsWith(extension))
				continue;
			
			names.Add(GetName(path, extension));
		}

		return names;
	}

	private static string GetName(string path, string extension)
	{
		string name = path.Substring(path.LastIndexOf('/') + 1);
		name = name.Substring(0, name.Length - extension.Length);

		return name;
	}

	private static List<string> GetPaths(string directory)
	{
		List<string> paths = new List<string>();

		var info = new DirectoryInfo(directory);
		var fileInfo = info.GetFiles();

		foreach (FileInfo file in fileInfo) 
			paths.Add(file.FullName);
	

		return paths;
	}
}

