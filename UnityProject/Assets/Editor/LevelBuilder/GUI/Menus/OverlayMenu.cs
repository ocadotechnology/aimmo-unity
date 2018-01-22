using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using MapFeatures.Overlays;

/* 
 * The menu section that allows you to configure Overlays (e.g. grid)
 */

public class OverlayMenu : IMenu
{
    private bool showGrid = true;

    public void Display()
    {
        DisplayTitle();
        DisplayGridToggle();
    }

    private void DisplayTitle()
    {
        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("Overlays",
                                   EditorStyles.largeLabel,
                                   new GUILayoutOption[] { GUILayout.Height(LevelBuilderWindow.SectionTitleHeight) });
        EditorGUILayout.EndHorizontal();
    }

    private void DisplayGridToggle()
    {
        GUILayout.BeginHorizontal();

        EditorGUI.BeginChangeCheck();
        showGrid = EditorGUILayout.Toggle("Grid", showGrid);
        if (EditorGUI.EndChangeCheck())
        {
            GameObject grid = GameObject.FindWithTag("Grid");
            GridListener gridListener = grid.GetComponent<GridListener>();
            gridListener.IsGridVisible(showGrid);
        }
        GUILayout.EndHorizontal();
    }

}
