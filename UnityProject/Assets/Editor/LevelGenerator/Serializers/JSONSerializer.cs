using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

namespace Serializers
{
	class JSONSerializer : ISerializer
	{
		private string sceneName;

		public JSONSerializer(string sceneName)
		{
			sceneName = sceneName;
		}

		public string Serialize()
		{
			if (sceneName != null) 
			{
				AssetController.WorkOnLevel (sceneName);
			}
		
			LinkedList<GameObject> objects = GetSceneObjects ();
			return serializeObjects (objects);
		}

		private LinkedList<GameObject> GetSceneObjects()
		{
			return new LinkedList<GameObject> ();
		}

		private string serializeObjects(LinkedList<GameObject> obejcts)
		{
			return "";
		}
	}
}
