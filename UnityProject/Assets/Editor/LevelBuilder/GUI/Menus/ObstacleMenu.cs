﻿using UnityEditor;
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
        EditorGUILayout.LabelField("Obstacles", EditorStyles.largeLabel);
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

    private void ListenForPickerEvents()
    {
        if (Event.current.commandName == "ObjectSelectorClosed" 
            && Event.current.type != EventType.Layout)
        {
            GameObject objectPickerObject = EditorGUIUtility.GetObjectPickerObject() as GameObject;
            if (objectPickerObject != null)
            {
                ObstacleGenerator.GenerateObstacle(objectPickerObject);
            }
        }
    }
}

