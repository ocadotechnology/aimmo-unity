using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using GeneratorNS;
using MonoNS;

namespace Serializers
{
	public class JSONSerializer : ISerializer
	{
		private string sceneName;
		private string temporaryExportName;

		public JSONSerializer(string sceneName)
		{
			this.sceneName = sceneName;
		}

		public string Serialize()
		{
			if (sceneName != null) 
			{
				AssetController.WorkOnLevel (sceneName);
			}
		
			LinkedList<GameObject> objects = GetSceneObjects ();
			string serializedObjects = serializeObjects (objects);

			return serializedObjects;
		}

		private LinkedList<GameObject> GetSceneObjects()
		{
			GameObject[] allObjects = UnityEngine.Object.FindObjectsOfType<GameObject>() ;
			LinkedList<GameObject> serializableObjects = new LinkedList<GameObject>();
			foreach (GameObject obj in allObjects)
			{
				if (obj.GetComponent<SpriteGeneratorBuilder> ()) 
				{
					Debug.Log (obj.ToString());
					if (obj != ObjectController.GetContext())
						serializableObjects.AddLast (obj);
				}
			}
			return serializableObjects;
		}

		private string serializeObjects(LinkedList<GameObject> serializableObjects)
		{
			List<string> jsonSerializedObjectList = new List<string>();
			foreach (GameObject obj in serializableObjects) 
			{
				IGenerator generator = obj.GetComponent<SpriteGeneratorBuilder> ().Build ();
				string exportString = null;

				if (typeof(SpriteGenerator).IsAssignableFrom(generator.GetType())) 
				{
					Debug.Log ("Here");

					SpriteGenerator spriteGenerator = (SpriteGenerator) generator;
					GameObject temporaryExportObject = generator.GenerateObject (temporaryExportName);

					IsometricPosition pos = temporaryExportObject.GetComponent<IsometricPosition> ();
					float x = pos.x;
					float y = pos.y;

					string sprite = spriteGenerator.GetSprite();

					IGenerator exportGenerator = (IGenerator) Activator.CreateInstance(generator.GetType(), new object[] { x, y, sprite });
					exportString = exportGenerator.ToJson ();

					UnityEngine.Object.DestroyImmediate(temporaryExportObject);
				}

				if (exportString != null) 
				{
					jsonSerializedObjectList.Add (exportString);
				}
			}

			return "[" + String.Join(",", jsonSerializedObjectList.ToArray()) +  "]";
		}
	}
}
