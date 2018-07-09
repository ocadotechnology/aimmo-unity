using UnityEngine;
using UnityEditor;

public class GameExporter
{
    [MenuItem("Build Game/Build WebGL Game into aimmo")]
    static void BuildGame()
    {
        string path = EditorUtility.SaveFolderPanel("Select Location of `aimmo` Repository", "", "");
        string[] levels = new string[] { "Assets/Scenes/Main.unity" };

        BuildPipeline.BuildPlayer(levels, path + "/aimmo/static/unity", BuildTarget.WebGL, BuildOptions.None);
    }
}
