using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* This class manages obstacles, i.e. the walls in the scene.
 */

namespace MapFeatures {
	public class ObstacleManager : MapFeatureManager 
	{
		public override void Draw(GameObject obstacle, Sprite obstacleSprite)
		{
			float scale = 2.0f * Mathf.Cos(Constants.SceneRotationX) * obstacleSprite.pixelsPerUnit / obstacleSprite.rect.width;
			obstacle.transform.localScale = new Vector3(scale, scale, 0.0f);

			SpriteRenderer obstacleRenderer = obstacle.AddComponent<SpriteRenderer>();
			obstacleRenderer.sprite = obstacleSprite;
		}
			
		public override string MapFeatureId(string id)
		{
			return "obstacle" + id;
		}
	}
}