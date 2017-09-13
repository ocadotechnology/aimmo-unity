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
	private static string[] levelsArray;

	// Calling this returns an empty Scene object that can be further manipulated and saved.
	public static Scene createScene()
	{
		Scene createdScene = EditorSceneManager.NewScene (NewSceneSetup.EmptyScene, NewSceneMode.Additive);

		return createdScene;
	} 

	// Returns the number of Scenes that are currently present in the Assets/Scenes/Levels directory.
	public static int countScenes()
	{
		levelsFetched = AssetFetcher.GetLevels ();
		levelsArray = levelsFetched.ToArray<string> ();

		return levelsArray.Length;
	} 

	// Method that will make sure all currently loaded scenes will
	// be unloaded.
	public static void unloadScenes()
	{
		levelsFetched = AssetFetcher.GetLevels ();
		levelsArray = levelsFetched.ToArray<string> ();
		Scene sceneToUnload;

		foreach (string level in levelsArray) 
		{
			sceneToUnload = SceneManager.GetSceneByName (level);
			EditorSceneManager.CloseScene (sceneToUnload, true);
		} // foreach
			
	} 
} // class
