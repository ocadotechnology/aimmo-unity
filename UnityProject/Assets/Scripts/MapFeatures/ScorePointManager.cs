using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* This class manages the score points. If an avatar is in a score point its 
 * score is incremented by one every iteration.
 */

namespace MapFeatures 
{
	public class ScorePointManager : MapFeatureManager 
	{
		public override void Draw(GameObject scorePoint, Sprite scorePointSprite)
		{
			SpriteRenderer scorePointRenderer = scorePoint.AddComponent<SpriteRenderer>();
			scorePointRenderer.sprite = scorePointSprite;

			scorePoint.GetComponent<IsometricPosition>().ChangeRelativeDepth(2.0f);
		}

		public override string MapFeatureId(string id)
		{
			return "scorepoint" + id;
		}
	}
}