using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Generator;
using MapFeatures;

namespace Serializers
{
	public class JSONSerializer
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
				AssetFetcher.WorkOnLevel (sceneName);
			}
		
			LinkedList<GameObject> objects = GetSceneObjects ();
			string serializedObjects = serializeObjects (objects);

			return serializedObjects;
		}

		// A function that gets all objects that are serializable
		// and that should be exported to the backend. The Builders 
		// *must* be fully serializable and for the moment SpriteGeneratorBuilder 
		// is the only one.
		private LinkedList<GameObject> GetSceneObjects()
		{
			GameObject[] allObjects = UnityEngine.Object.FindObjectsOfType<GameObject>() ;
			LinkedList<GameObject> serializableObjects = new LinkedList<GameObject>();

			foreach (GameObject obj in allObjects)
			{
				if (obj.GetComponent<SpriteGeneratorBuilder> ()) 
				{
					// Debug.Log (obj.ToString());
					if (obj != ObjectController.GetContext())
						serializableObjects.AddLast (obj);
				}
			}
			return serializableObjects;
		}

		// Turns the list of the serializable objects into a single string 
		// that should be exportable to the backend.
		private string serializeObjects(LinkedList<GameObject> serializableObjects)
		{
			List<string> jsonSerializedObjectList = new List<string>();
			foreach (GameObject obj in serializableObjects) 
			{
				// The Builder is attached to the game obejct. This is why
				// the Builder has to be serializable to persist after the 
				// game ends.
				var builder = obj.GetComponent<SpriteGeneratorBuilder> ();
				var generator = builder.Build ();
				string exportString = null;

				// This is how we can check is some the actual type of the generator
				// is a subclass of SpriteGenerator.
				if (typeof(SpriteGenerator).IsAssignableFrom(generator.GetType())) 
				{
					// All the attributes should be set from here. The ones that are
					// not set are kept to the values kept inside the Builder that 
					// was attached to the game object when the object was generated.
					IsometricPosition pos = obj.GetComponent<IsometricPosition> ();
					float x = pos.x;
					float y = pos.y;

					// We have to do the same thing for lights that are attached to the object
					Light lightObject = obj.GetComponentInChildren<Light>();
					if (lightObject != null) 
					{
						GameObject lightAttachedTo = lightObject.gameObject;
						float lightX = lightAttachedTo.transform.position.x;
						float lightY = lightAttachedTo.transform.position.y;

						builder =  builder.ByLightCoord(lightX, lightY);
					}

					IGenerator exportGenerator = (IGenerator) builder.ByCoord(x, y).Build();
					exportString = exportGenerator.ToJson ();
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
