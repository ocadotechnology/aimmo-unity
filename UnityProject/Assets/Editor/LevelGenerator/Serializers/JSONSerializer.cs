using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using GeneratorNS;

namespace Serializers
{
	class JSONSerializer : ISerializer
	{
		private string sceneName;

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
			Debug.Log (serializedObjects);

			return serializedObjects;
		}

		private LinkedList<GameObject> GetSceneObjects()
		{
			GameObject[] allObjects = UnityEngine.Object.FindObjectsOfType<GameObject>() ;
			LinkedList<GameObject> serializableObjects = new LinkedList<GameObject>();
			foreach (GameObject obj in allObjects)
			{
				if (obj.GetComponent<WrapperIGenerator> ()) 
				{
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
				IGenerator generator = obj.GetComponent<WrapperIGenerator> ().Generator;
				string exportString = null;

				if (generator is SpriteGenerator) 
				{
					SpriteGenerator spriteGenerator = (SpriteGenerator) generator;

					IsometricPosition pos = obj.GetComponent<IsometricPosition> ();
					float x = pos.x;
					float y = pos.y;

					string sprite = spriteGenerator.GetSprite();

					IGenerator exportGenerator = (IGenerator) Activator.CreateInstance(generator.GetType(), new object[] { x, y, sprite });
					exportString = exportGenerator.ToJson ();
				}

				jsonSerializedObjectList.Add (exportString);
			}

			return "[" + String.Join(",", jsonSerializedObjectList.ToArray()) +  "]";
		}
	}
}
