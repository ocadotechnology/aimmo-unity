using UnityEditor;
using UnityEngine;

public class GeneratorWindow : EditorWindow
{
	private static GeneratorWindow windowInstace;
	private string sceneName = "Name";

	[MenuItem("Window/Create Level")]
	public static void OpenWindow()
	{
		windowInstace = GetWindow<GeneratorWindow>(false, "Unity Level Generator");

		windowInstace.Focus ();
		windowInstace.Show ();
	}

	private void CloseButton() 
	{
		if (GUILayout.Button (new GUIContent ("Close", ""))) 
		{
			windowInstace.Close ();
		}
	}

	private void LevelButton(string level)
	{
		if (GUILayout.Button (new GUIContent ("Level: " + level, ""))) 
		{
			SceneController.WorkOnLevel (level);
		}
	}

	public void OnGUI()
	{
		// TODO: Replace with drop-down
		GUILayout.Label("Select a level below to work on.");
		foreach (string level in SceneController.GetLevels()) 
		{
			LevelButton (level);
		}

		CloseButton ();
	}
}
