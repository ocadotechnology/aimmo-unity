using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Every object that appears in the scene apart from avatars and the
 * floor is considered a MapFeature. All map features must implement
 * this interface so that game objects can be created or deleted with
 * calls of the form Obstacle.Create(id). For this reason, although it
 * is not enforced, the definitions of these methods in the classes
 * that implement them should be static.
 * 
 * It is important to note that we are NOT concerned about the game
 * logic. For instance we don't detect if an avatar is in a health 
 * point. All of that is implemented in the backend.
 */

public class MapFeature : MonoBehaviour
{
	// Create map feature with given id and location.
	bool Create(int id, float x, float y) { return true; }

	// Delete map feature with given id.
	bool Delete(int id) { return true; }

	// Helps identify the different map features by each having their
	// name in their game object id.
	string MapFeatureId(int id) { return ""; }
}
