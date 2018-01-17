using UnityEngine;
using UnityEditor;

public class PickupMenu : IMenu
{

    private GUIContent pickupPickerButtonTitle = new GUIContent("View Pickups");

    public void Display()
    {
        DisplayTitle();
        DisplayPickupsPickerButton();
    }

    private void DisplayTitle()
    {
        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("Pickups",
                                   EditorStyles.largeLabel,
                                   new GUILayoutOption[] { GUILayout.Height(LevelBuilderWindow.SectionTitleHeight) });
        EditorGUILayout.EndHorizontal();
    }

    private void DisplayPickupsPickerButton()
    {
        EditorGUILayout.BeginHorizontal();
        if (GUILayout.Button(pickupPickerButtonTitle))
        {

            EditorGUIUtility.ShowObjectPicker<GameObject>(null, false, "pickup_", GUIUtility.GetControlID(pickupPickerButtonTitle, FocusType.Passive));
        }
        EditorGUILayout.EndHorizontal();
    }
}
