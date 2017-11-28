using UnityEngine;
using UnityEditor;

public class PickupMenu : IMenu
{

    private GUIContent pickupPickerButtonTitle = new GUIContent("View Pickups");

    public void Display()
    {
        DisplayTitle();
        DisplayPickupsPickerButton();
        ListenForPickerEvents();
    }

    private void DisplayTitle()
    {
        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("Pickups", EditorStyles.largeLabel);
        EditorGUILayout.EndHorizontal();
    }

    private void DisplayPickupsPickerButton()
    {
        EditorGUILayout.BeginHorizontal();
        if (GUILayout.Button(pickupPickerButtonTitle))
        {
            EditorGUIUtility.ShowObjectPicker<GameObject>(null, true, "pickup_", GUIUtility.GetControlID(pickupPickerButtonTitle, FocusType.Passive));
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
                PickupGenerator.GeneratePickup(objectPickerObject);
            }
        }
    }

}
