using UnityEditor;
using UnityEngine;

public class ObstacleMenu : IMenu
{
    private GUIContent obstaclePickerButtonTitle = new GUIContent("View Obstacles");

    public void Display()
    {
        DisplayTitle();
        DisplayObstaclesPickerButton();
    }

    private void DisplayTitle()
    {
        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("Obstacles",
                                   EditorStyles.largeLabel,
                                   new GUILayoutOption[] { GUILayout.Height(LevelBuilderWindow.SectionTitleHeight) });
        EditorGUILayout.EndHorizontal();
    }

    private void DisplayObstaclesPickerButton()
    {
        EditorGUILayout.BeginHorizontal();
        if (GUILayout.Button(obstaclePickerButtonTitle))
        {

            EditorGUIUtility.ShowObjectPicker<GameObject>(null, false, "obstacle_", GUIUtility.GetControlID(obstaclePickerButtonTitle, FocusType.Passive));
        }
        EditorGUILayout.EndHorizontal();
    }
}

