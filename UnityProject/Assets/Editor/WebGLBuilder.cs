using UnityEditor;

/*
 Run from unity installation folder:
  $  ./Unity -batchmode -projectPath <projectPath> -logfile -executeMethod WebGLBuilder.build
 e.g:
  $ ./Unity -batchmode -projectPath ~/aimmo-unity/UnityProject/ -logfile -executeMethod WebGLBuilder.build
*/

class WebGLBuilder {
	static void build() {
		string[] scenes = {
			"Assets/Scenes/Main.unity"
		};

		/*
			Asset Bundles gives an error for the momment.
		*/
		BuildPipeline.BuildPlayer(scenes, "WebGL-Dist", BuildTarget.WebGL,
			BuildOptions.Development |
			BuildOptions.AllowDebugging |
			BuildOptions.UncompressedAssetBundle);
	}
}
