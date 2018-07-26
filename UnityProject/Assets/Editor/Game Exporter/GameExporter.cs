using UnityEditor;
using System.IO;

public class GameExporter
{
    [MenuItem("Build Game/Build WebGL Game into aimmo")]
    static void BuildGame()
    {
        Directory.Move("Assets/Scripts/Plugins/UnitySocketIO", "Assets/Scripts/Plugins/UnitySocketIO~");
        AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
        string path = EditorUtility.SaveFolderPanel("Select Location of `aimmo` Repository", "", "");

        BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
        buildPlayerOptions.scenes = new string[] { "Assets/Scenes/Main.unity" };
        buildPlayerOptions.locationPathName = path + "/aimmo/static/unity";
        buildPlayerOptions.target = BuildTarget.WebGL;
        buildPlayerOptions.options = BuildOptions.None;
        var report = BuildPipeline.BuildPlayer(buildPlayerOptions);

        Directory.Move("Assets/Scripts/Plugins/UnitySocketIO~", "Assets/Scripts/Plugins/UnitySocketIO");
        AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
    }
}
