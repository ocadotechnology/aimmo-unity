using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* This class manages obstacles, i.e. the walls in the scene.
 */

public class ObstacleManager : MapFeatureManager 
{
	public override void Draw(GameObject obstacle)
	{
		string spriteName = "Obstacle-512x1024-isometric-top";

		obstacle.transform.localScale = new Vector3(0.27f, 0.27f, 0.0f);
		Texture2D obstacleTexture = Resources.Load<Texture2D>(spriteName);
		Sprite obstacleSprite = Sprite.Create(obstacleTexture, 
			new Rect(0.0f, 0.0f, 512.0f, 1024.0f),
			new Vector2(0.5f, 0.5f),
			100.0f);
		SpriteRenderer obstacleRenderer = obstacle.AddComponent<SpriteRenderer>();
		obstacleRenderer.sprite = obstacleSprite;

		// Assign order inversely proportional to depth as well. This is 
		// importat so that the moving sprites render in the correct order.
		float depth = obstacle.GetComponent<IsometricPosition>().depth;
		obstacleRenderer.sortingOrder = Convert.ToInt32(-depth);
	}
		
	public override string MapFeatureId(string id)
	{
		return "obstacle" + id;
	}
}
