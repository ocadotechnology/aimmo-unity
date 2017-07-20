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

		// Create new pink cell.
		GameObject scorePoint = GameObject.CreatePrimitive(PrimitiveType.Cube);
		if (scorePoint == null)
			return false;

		scorePoint.transform.position = new Vector3(x, 0.0f, y);
		scorePoint.transform.localScale = new Vector3(1.0f, 0.01f, 1.0f);
		scorePoint.GetComponent<Renderer>().material.color = Color.magenta;
	
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
