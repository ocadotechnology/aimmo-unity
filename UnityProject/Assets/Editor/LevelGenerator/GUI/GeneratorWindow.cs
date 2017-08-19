using UnityEditor;
using UnityEngine;
using GeneratorNS;

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

	private void ObjectMenu()
	{
		GameObject go = ObjectController.GetGameObject ();

		GUILayout.Label("Current selected object: " + go.name);
	}

	private void SaveButton()
	{
	}

	public void OnGUI()
	{
		// TODO: Replace with drop-down
		GUILayout.Label("Select a level below to work on.");
		foreach (string level in SceneController.GetLevels()) 
		{
			LevelButton (level);
		}

		if (ObjectController.SelectedGameObject ()) 
		{
			ObjectMenu ();
		}

		if (GUILayout.Button (new GUIContent ("Gen obstacle"))) 
		{
			new SpriteGeneratorBuilder(typeof(ObstacleGenerator)).Build().GenerateObject("id1");
		}
			
		if (GUILayout.Button (new GUIContent ("Gen health point"))) 
		{			
			new SpriteGeneratorBuilder(typeof(HealthPointGenerator)).Build().GenerateObject("hp1");
		}

		SaveButton ();

		CloseButton ();
	}
}
