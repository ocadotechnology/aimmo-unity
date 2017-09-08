using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimpleJSON;

/* The struct MapFeatureData holds all the necessary information to create a
 * map feature in the scene.
 */

namespace MapFeatures 
{
	public struct MapFeatureData
	{
		public float x, y;
		public float spriteWidth, spriteHeight;
		public Texture2D texture; 
		public string spritePath;

		public LightData lightData;
		public bool hasLight;

		// Construct from JSON.
		public MapFeatureData(JSONNode json)
		{
			this.x = json["x"].AsFloat;
			this.y = json["y"].AsFloat;

			JSONNode spriteJSON = json["sprite"];

			// Loading the 2D texture from the path provided in the JSON
			// so we can specify the size using the width and height parameters.
			// We no longer need to give a size in the filename and parse it
			// via JSON.
			texture = Resources.Load<Texture2D>(spriteJSON["path"]);

			this.spritePath = spriteJSON["path"];

			// Calling the width and height parameters in the Texture2D object.
			this.spriteWidth = texture.width;
			this.spriteHeight = texture.height;

			this.lightData = new LightData(Vector3.zero);
			this.hasLight = false;

			if (spriteJSON["lights"] != null) 
			{
				this.lightData = new LightData(spriteJSON["lights"]);
				this.hasLight = true;
			} 
		}
	}

	/* Every object that appears in the scene apart from avatars and the floor is
	 * considered a map feature. An object inheriting from MapFeatureManager can
	 * create and delete the map features with the corresponding identifier. This
	 * objects must specify how this identifier is built as well as how the map
	 * feature is drawn on the scene.
	 *
	 * It is important to note that we are NOT concerned about the game logic. For
	 * instance we don't detect if an avatar is in a health point. All of that is
	 * implemented in the backend.
	 */

	public interface IMapFeatureManager
	{
		bool Create(string id, MapFeatureData mapFeatureData);
		bool Delete(string id);

		string MapFeatureId(string id);
	}

	public abstract class MapFeatureManager : MonoBehaviour, IMapFeatureManager
	{
		// Create map feature with given id and location.
		public bool Create(string id, MapFeatureData mapFeatureData)
		{
			// It might have already been created.
			if (GameObject.Find(MapFeatureId(id)) != null)
				return true;

			// Create an obstacle.
			GameObject mapFeature = new GameObject(MapFeatureId(id));
			if (mapFeature == null)
				return false;

			mapFeature.tag = "MapFeature";

			// Add to scene in the correct position and angle.
			float x = mapFeatureData.x;
			float y = mapFeatureData.y;

			mapFeature.AddComponent<IsometricPosition>().Set(x, y);
			mapFeature.transform.rotation = Quaternion.Euler(0.0f, 0.0f, 0.0f);

			float tileWidth = 2.0f * Constants.IsometricShiftX;
			float scale = tileWidth * 100.0f / mapFeatureData.spriteWidth;

			// Create sprite.
			Texture2D mapFeatureTexture = Resources.Load<Texture2D>(
				mapFeatureData.spritePath);
			Sprite mapFeatureSprite = Sprite.Create(
				mapFeatureTexture,
				new Rect(
					0.0f,
					0.0f,
					mapFeatureData.spriteWidth,
					mapFeatureData.spriteHeight),
				new Vector2(0.5f, Constants.IsometricShiftY * 100.0f / (mapFeatureData.spriteHeight * scale)),
				100.0f);

			mapFeature.transform.localScale = new Vector3(scale, scale, 0.0f);

			Draw(mapFeature, mapFeatureSprite);

			if (mapFeatureData.hasLight)
				AttachLight(mapFeature, mapFeatureData.lightData);

			return true;
		}

		// Delete map feature with given id.
		public bool Delete(string id)
		{
			GameObject mapFeatureToDestroy = GameObject.Find(MapFeatureId(id));
			if (mapFeatureToDestroy == null)
				return false;

			DestroyImmediate(mapFeatureToDestroy);

			return true;
		}

		// Attach Light
		public void AttachLight(GameObject mapFeature, LightData lightData)
		{
			LightManager lightManager = mapFeature.AddComponent<LightManager>();
			lightManager.Draw(mapFeature, lightData);
		}

		// Helps identify the different map features by each having their
		// name in their game object id.
		public abstract string MapFeatureId(string id);

		// Sprite initialisation.
		public abstract void Draw(GameObject mapFeature, Sprite mapFeatureSprite);
	}
}
