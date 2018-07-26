using UnityEditor;
using System.IO;

public class GameExporter
{
    [MenuItem("Build Game/Build WebGL Game into aimmo")]
    static void BuildGame()
    {
        // Adding the tilde at the end of the plugin, and reimporting results in Unity ignoring the library
        Directory.Move("Assets/Scripts/Plugins/UnitySocketIO", "Assets/Scripts/Plugins/UnitySocketIO~");
        AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);

        string path = EditorUtility.SaveFolderPanel("Select Location of `aimmo` Repository", "", "");
        path = path + "/aimmo/static/unity";
        if (!Directory.Exists(path))
        {
            EditorUtility.DisplayDialog("No Unity folder", "I cannot find a Unity folder at: " + path, "Cancel");
        }
        else 
        {
            BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions
            {
                scenes = new string[] { "Assets/Scenes/Main.unity" },
                locationPathName = path,
                target = BuildTarget.WebGL,
                options = BuildOptions.None
            };
            BuildPipeline.BuildPlayer(buildPlayerOptions);
        }

        Directory.Move("Assets/Scripts/Plugins/UnitySocketIO~", "Assets/Scripts/Plugins/UnitySocketIO");
        AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
    }
}
