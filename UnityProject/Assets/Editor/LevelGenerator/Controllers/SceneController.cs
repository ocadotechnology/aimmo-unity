using UnityEditor;
using UnityEngine;
using System;
using System.Collections;

public class SceneController
{
	private static SceneController controllerInstace = new SceneController();

	public static void CreateLevel (string sceneName)
	{
		if (!controllerInstace.IsScenePresent (sceneName)) 
		{
			Debug.Log ("Creating new scene " + sceneName);	
		}
	}

	private bool IsScenePresent(string sceneName) 
	{
		foreach (EditorBuildSettingsScene S in EditorBuildSettings.scenes) 
		{
			string name = S.path.Substring(S.path.LastIndexOf('/') + 1);
			name = name.Substring(0, name.Length - 6);
			if (name == sceneName) 
			{
				return true;
			}
		}	
		return false;
	}
}

