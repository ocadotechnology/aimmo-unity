using UnityEngine;
using UnityEditor;

public class GameExporter
{
	[MenuItem("Build Game/Build WebGL Game into aimmo")]
	static void BuildGame()
	{
        string path = EditorUtility.SaveFolderPanel("Select Location of `aimmo` Repository", "", "");
        string[] levels = new string[] { "Assets/Scenes/Main.unity" };

        BuildPipeline.BuildPlayer(levels, path + "/players/static/unity", BuildTarget.WebGL, BuildOptions.None);

        FileUtil.ReplaceFile(path + "/players/static/unity/index.html", path + "/players/templates/players/viewer.html");
	}
}
