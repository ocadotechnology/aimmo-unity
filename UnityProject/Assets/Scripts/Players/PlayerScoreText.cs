using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Creates the text on top of each avatar with the score.
 */

public class PlayerScoreText : MonoBehaviour
{
	// Text positioning.
	private const float ScaleX = 0.1f;
	private const float ScaleY = 0.1f;
	private const float ScaleZ = 0.1f;

	private const float OffsetX = 0.0f;
	private const float OffsetY = 1.5f;
	private const float OffsetZ = 0.0f;

	private const int fontSize = 80;

	private GameObject text;

	void Awake()
	{
		text = new GameObject("Text");
		Vector3 textPosition = transform.position;
		textPosition.x += OffsetX;
		textPosition.y += OffsetY;
		textPosition.z += OffsetZ;
		text.transform.position = textPosition;
		text.transform.rotation = Quaternion.Euler(0.0f, 0.0f, 0.0f);
		text.transform.localScale = new Vector3(ScaleX, ScaleY, ScaleZ);

		text.AddComponent<TextMesh>();
		text.GetComponent<TextMesh>().fontSize = fontSize;

		text.transform.parent = transform;
	}

	public void SetScore(string score)
	{
		text.GetComponent<TextMesh>().text = score;
	}
}
