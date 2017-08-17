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

	private void CreateLevel()
	{
		SceneController.CreateLevel (sceneName);
	}

	private void CreateButton() 
	{
		GUILayout.Label("Select an object in the hierarchy view");
		sceneName = EditorGUILayout.TextField("Scene Name: ", sceneName);

		if (GUILayout.Button (new GUIContent ("Create Level", ""))) 
		{
			CreateLevel ();
		}
	}

	private void CloseButton() 
	{
		if (GUILayout.Button (new GUIContent ("Close", ""))) 
		{
			windowInstace.Close ();
		}
	}

	public void OnGUI()
	{
		CreateButton ();
		CloseButton ();
	}
}
