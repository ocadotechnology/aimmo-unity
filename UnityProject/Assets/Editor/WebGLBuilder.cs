using UnityEditor;

/* Run from Unity installation folder:
  $  ./Unity -batchmode -projectPath <projectPath> -logfile -executeMethod WebGLBuilder.build
  e.g:
  $ ./Unity -batchmode -projectPath ~/aimmo-unity/UnityProject/ -logfile -executeMethod WebGLBuilder.build
*/

public class WebGLBuilder 
{
	[MenuItem("Edit/BuildWebGL")]
	public static void build() 
	{
		string[] scenes = {"Assets/Scenes/Main.unity"};

		BuildPipeline.BuildPlayer(scenes, "WebGL-Dist", BuildTarget.WebGL,
			BuildOptions.Development |
			BuildOptions.AllowDebugging |
			BuildOptions.UncompressedAssetBundle);
	}
}
