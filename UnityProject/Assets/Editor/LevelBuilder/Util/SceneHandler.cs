using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Generator;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;

public class SceneHandler
{
	private static IList<string> levelsFetched;

	// Calling this returns an empty Scene object that can be further manipulated and saved.
	public static Scene createMethod()
	{
		Scene createdScene = EditorSceneManager.NewScene (NewSceneSetup.EmptyScene, NewSceneMode.Additive);

		return createdScene;

	} // createMethod

	// Returns the number of Scenes that are currently present in the Assets/Scenes/Levels directory.
	public static int countScenes()
	{
		levelsFetched = AssetFetcher.GetLevels ();
		string[] levelsToCount = levelsFetched.ToArray<string> ();

		return levelsToCount.Length;
	} // countScenes
} // class
