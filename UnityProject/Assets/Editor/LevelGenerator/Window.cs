using UnityEditor;
using UnityEngine;

public class Window : EditorWindow
{
	public static Window windowInstace;

	[MenuItem("Edit/Create Level")]
	public static void OpenWindow()
	{
		windowInstace = GetWindow<Window>(false, "Level Generator");
		windowInstace.Focus ();
		windowInstace.Show ();
	}

	public void OnGUI()
	{
		if (GUILayout.Button (new GUIContent ("Close", ""))) 
		{
			windowInstace.Close ();
		}
	}
}
