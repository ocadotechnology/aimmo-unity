using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Serializers;

public class ExportController
{
	public static string GetExportFromSerializer(ISerializer serializer)
	{
		return serializer.Serialize();
	}

	public static void ExportFile(string json)
	{
	}
}

