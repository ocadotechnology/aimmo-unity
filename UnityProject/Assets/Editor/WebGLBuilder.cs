using UnityEditor;

/* To be used on the command line to build from the command line / script. The
 * syntax is the following:
 * 
 * path/to/Unity -quit -batchmode -executeMethod WebGLBuilder.build
 * 
 * More details in https://docs.unity3d.com/Manual/CommandLineArguments.html
 */

class WebGLBuilder 
{
	static void build() 
	{
		string[] scenes = {"Assets/main.unity"};
		BuildPipeline.BuildPlayer(
			scenes, 
			"WebGL-Dist", 
			BuildTarget.WebGL, 
			BuildOptions.Development);
	}
}