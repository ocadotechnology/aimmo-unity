using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* This class manages the score points. If an avatar is in a score point its 
 * score is incremented by one every iteration.
 */

public class ScorePointManager : MapFeatureManager 
{
	public override void Draw(GameObject scorePoint)
	{
		string spriteName = "Grass-400x400-isometric-top";

		scorePoint.transform.localScale = new Vector3(0.35f, 0.35f, 0.0f);
		Texture2D scorePointTexture = Resources.Load<Texture2D>(spriteName);
		Sprite scorePointSprite = Sprite.Create(scorePointTexture, 
			new Rect(0.0f, 0.0f, 400.0f, 400.0f),
			new Vector2(0.5f, 0.5f),
			100.0f);
		SpriteRenderer scorePointRenderer = scorePoint.AddComponent<SpriteRenderer>();
		scorePointRenderer.sprite = scorePointSprite;
		scorePointRenderer.sortingLayerName = "ScorePoint";
	}

	public override string MapFeatureId(string id)
	{
		return "scorepoint" + id;
	}
}
