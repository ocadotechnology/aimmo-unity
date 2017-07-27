using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteCreator : MonoBehaviour 
{
	void Start () 
	{
		// Floor.
		GameObject floor = GameObject.CreatePrimitive(PrimitiveType.Plane);
		floor.transform.position = new Vector3(0.0f, -0.5f, 0.0f);
		floor.transform.localScale = new Vector3(10.0f, 10.0f, 10.0f);
		floor.GetComponent<Renderer>().material.color = Color.gray;

		// Create a wall.
		GameObject wall = new GameObject();
		wall.transform.position = new Vector3(0.0f, 0.0f, 0.0f);
		Texture2D wallTexture = Resources.Load("../Art/brick-400x400-isometric-left.png") as Texture2D;
		Sprite wallSprite = Sprite.Create(wallTexture, 
			new Rect(0.0f, 0.0f, 400.0f, 400.0f),
			new Vector2(0.5f, 0.5f),
			100.0f);
		SpriteRenderer wallRenderer = wall.AddComponent<SpriteRenderer>();
		wallRenderer.sprite = wallSprite;

	}
}
