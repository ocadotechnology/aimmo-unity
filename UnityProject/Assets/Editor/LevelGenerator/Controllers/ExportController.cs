using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Serializers;
using UnityEngine.SceneManagement;

public class ExportController
{
	/** 
	 * A class used for exprting the contents of a level. 
	 * 
	 * The code does not work on Windows for the moment.
	 */

	public static string GetExportFromSerializer(ISerializer serializer)
	{
		return serializer.Serialize();
	}

	public static void ExportFile(string json)
	{
		string sceneName = SceneManager.GetActiveScene ().name + ".json";
		string exportDirectory = Directory.GetCurrentDirectory () + "/Exports/";

		Directory.CreateDirectory(exportDirectory);
		string exportLocation = exportDirectory + sceneName;

		Debug.Log ("Exporting json to:" + exportLocation);
		File.WriteAllText (exportLocation, json); 
	}
}

