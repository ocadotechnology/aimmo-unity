using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* 
 * This class manages the score points. If an avatar is in a score point
 * its score is incremented by one every iteration.
 */

public class ScorePoint : MapFeature 
{
	public static bool Create(string id, float x, float y)
	{
		// It might have already been created
		if (GameObject.Find(MapFeatureId(id)) != null)
			return true;

		// Create a grass tile.
		GameObject grass = new GameObject(MapFeatureId(id));
		if (grass == null)
			return false;

		grass.tag = "FlatMapFeature";
		grass.transform.position = new Vector3(x, 0.0f, y);
		grass.transform.rotation = Quaternion.Euler(45.0f, 45.0f, 0.0f);
		grass.transform.localScale = new Vector3(0.35f, 0.35f, 0.0f);
		Texture2D grassTexture = Resources.Load<Texture2D>("Grass-400x400-isometric-top");
		Sprite grassSprite = Sprite.Create(grassTexture, 
			new Rect(0.0f, 0.0f, 400.0f, 400.0f),
			new Vector2(0.5f, 0.5f),
			100.0f);
		SpriteRenderer grassRenderer = grass.AddComponent<SpriteRenderer>();
		grassRenderer.sprite = grassSprite;

		return true;
	}

	public static bool Delete(string id)
	{
		GameObject scorePointToDestroy = GameObject.Find(MapFeatureId(id));
		if (scorePointToDestroy == null)
			return false;

		Destroy(scorePointToDestroy);

		return true;
	}

	private static string MapFeatureId(string id)
	{
		return "scorepoint" + id;
	}
}
