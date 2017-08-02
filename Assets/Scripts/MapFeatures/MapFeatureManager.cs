using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Every object that appears in the scene apart from avatars and the floor is 
 * considered a MapFeature. All map features must implement this interface so 
 * that game objects can be created or deleted with calls of the form 
 * Obstacle.Create(id). For this reason, although it is not enforced, the 
 * definitions of these methods in the classes that implement them should be 
 * static.
 * 
 * It is important to note that we are NOT concerned about the game logic. For 
 * instance we don't detect if an avatar is in a health point. All of that is 
 * implemented in the backend.
 */

public abstract class MapFeatureManager : MonoBehaviour
{
	// Create map feature with given id and location.
	public bool Create(string id, float x, float y) 
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
		mapFeature.AddComponent<IsometricPosition>().Set(x, y);
		mapFeature.transform.rotation = Quaternion.Euler(45.0f, 45.0f, 0.0f);

		Draw(mapFeature);

		return true;
	}

	// Delete map feature with given id.
	public bool Delete(string id) 
	{
		GameObject mapFeatureToDestroy = GameObject.Find(MapFeatureId(id));
		if (mapFeatureToDestroy == null)
			return false;

		Destroy(mapFeatureToDestroy);

		return true;
	}

	// Helps identify the different map features by each having their
	// name in their game object id.
	public abstract string MapFeatureId(string id);

	// Sprite initialisation.
	public abstract void Draw(GameObject mapFeature);
}
