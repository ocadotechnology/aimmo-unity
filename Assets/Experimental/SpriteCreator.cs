using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteCreator : MonoBehaviour 
{
	void Start () 
	{
		// Create a grass.
		GameObject grass = new GameObject("Grass");
		grass.transform.position = new Vector3(0.0f, 0.0f, 0.0f);
		Texture2D grassTexture = Resources.Load<Texture2D>("Grass-400x400-isometric-top");
		Sprite grassSprite = Sprite.Create(grassTexture, 
			new Rect(0.0f, 0.0f, 512.0f, 512.0f),
			new Vector2(0.5f, 0.5f),
			100.0f);
		SpriteRenderer grassRenderer = grass.AddComponent<SpriteRenderer>();
		grassRenderer.sprite = grassSprite;

	}
}
