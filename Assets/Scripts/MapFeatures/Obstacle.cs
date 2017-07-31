using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* This class manages obstacles, i.e. the walls in the scene.
 */

public class Obstacle : MapFeature 
{
	public static bool Create(string id, float x, float y)
	{
		// It might have already been created
		if (GameObject.Find(MapFeatureId(id)) != null)
			return true;

		// Create an obstacle.
		GameObject obstacle = new GameObject(MapFeatureId(id));
		if (obstacle == null)
			return false;

		obstacle.tag = "MapFeature";
		obstacle.transform.position = new Vector3(x, 0.0f, y);
		obstacle.transform.rotation = Quaternion.Euler(45.0f, 45.0f, 0.0f);
		obstacle.transform.localScale = new Vector3(0.27f, 0.27f, 0.0f);
		Texture2D obstacleTexture = Resources.Load<Texture2D>("Obstacle-512x1024-isometric-top");
		Sprite obstacleSprite = Sprite.Create(obstacleTexture, 
			new Rect(0.0f, 0.0f, 512.0f, 1024.0f),
			new Vector2(0.5f, 0.5f),
			100.0f);
		SpriteRenderer obstacleRenderer = obstacle.AddComponent<SpriteRenderer>();
		obstacleRenderer.sprite = obstacleSprite;

		int layerNumber = (int)(x + y);
		obstacle.layer = 8 + layerNumber;

		return true;
	}

	public static bool Delete(string id)
	{
		GameObject obstacleToDestroy = GameObject.Find(MapFeatureId(id));
		if (obstacleToDestroy == null)
			return false;

		Destroy(obstacleToDestroy);

		return true;
	}
		
	private static string MapFeatureId(string id)
	{
		return "obstacle" + id;
	}
}
