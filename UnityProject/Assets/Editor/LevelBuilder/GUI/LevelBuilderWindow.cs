using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEditor.SceneManagement;
using System.Linq;
using System.Collections.Generic;

/* The UI Window from Level Generator/Create Level.
 *
 * The Window is split in Menu components. Each Menu component is a class
 * that drows on the currently selected UI using the GUILayout and GUIEditorLayout
 * static methods.
 *
 * OnGUI looks for events that are applied on the surface of the UI each time.
 * We use the Singleton pattern in this situation as there should be only one
 * object of this type: i.e. the open window.
 *
 */

public class LevelBuilderWindow : EditorWindow
{
    public static float SectionTitleHeight = 20;

    private static LevelBuilderWindow windowInstance = null;
    private int optionChosenByUser = 0;

    // Main menus.
    private IMenu[] menus =
    {
        new TerrainMenu(),
        new OverlayMenu(),
        new PickupMenu(),
        new ObstacleMenu(),
    };

    private static LevelBuilderWindow GetWindow()
    {
        return windowInstance;
    }

    // 'Open' drop-down option.
    [MenuItem("Level Builder/Open")]
    public static void Open()
    {
        windowInstance = GetWindow<LevelBuilderWindow>(false, "Level Builder");

        windowInstance.Show();
        windowInstance.Focus();

    }

    // 'Help' drop-down option. Go to github.
    [MenuItem("Level Builder/Help")]
    public static void Help()
    {
        Application.OpenURL("https://github.com/ocadotechnology/aimmo-unity/");
    }

    public void OnGUI()
    {
        minSize = new Vector2(225, 0);

        // Level buttons.
        GUILayout.Label("Select a level below to work on:");

        // Get all levels currently in the game.
        IList<string> levelList = AssetFetcher.GetLevels();

        // Popup() expects a string[] array, so convert it.
        string[] levels = levelList.ToArray<string>();

        // optionChosenByUser initialised to 0, so the dropdown will be blank.
        // After an option is chosen for the first time, we update this.

        optionChosenByUser--;

        optionChosenByUser = EditorGUILayout.Popup(optionChosenByUser, levels);

        // Index is returned and levels start from 1 so incrementing it.
        optionChosenByUser++;

        if (GUILayout.Button(new GUIContent("Work!")))
        {
            EditorSceneManager.MarkAllScenesDirty();
            EditorSceneManager.SaveOpenScenes();

            AssetFetcher.WorkOnLevel("Level" + optionChosenByUser);
        }

        // Only let the level designer operate if it's a level.
        // ie. If the scene is called "Main" then it is not a level.
        // See the file hierarchy to understand.
        if (SceneManager.GetActiveScene().name.Equals("Main"))
            return;

        if (GUILayout.Button(new GUIContent("Create a new level.")))
        {
            EditorSceneManager.MarkAllScenesDirty();
            EditorSceneManager.SaveOpenScenes();

            Scene newScene = SceneHandler.createScene();

            // Unload the scenes so we can create a new one.
            SceneHandler.unloadScenes();

            // Calling countScenes() inside SceneHandler to find the new
            // filename to save our scene with.
            int currentNoOfLevels = SceneHandler.countScenes();
            currentNoOfLevels++;

            LevelGenerator levelGenerator = new LevelGenerator();
            levelGenerator.GenerateLevel();

            EditorSceneManager.SaveScene(newScene, "Assets/Scenes/Levels/Level" + currentNoOfLevels + ".unity");
        }

        EditorGUILayout.BeginScrollView(Vector2.zero);
        foreach (IMenu menu in menus)
        {
            menu.Display();
        }
        EditorGUILayout.EndScrollView();

        ListenForPickerEvents();
    }

    private void ListenForPickerEvents()
    {
        if (Event.current.commandName == "ObjectSelectorClosed"
            && Event.current.type != EventType.Layout)
        {
            GameObject objectPickerObject = EditorGUIUtility.GetObjectPickerObject() as GameObject;
            if (objectPickerObject != null)
            {
                if (objectPickerObject.tag == "Obstacle")
                {
                    ObstacleGenerator.GenerateObstacle(objectPickerObject);
                }
                else if (objectPickerObject.tag == "Pickup")
                {
                    PickupGenerator.GeneratePickup(objectPickerObject);
                }
            }
        }
    }
}
