using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct PlayerData
{
	public float x, y, rotation;
	public int score, health;
	public string colour;

	// Construct from json
	public PlayerData(SimpleJSON.JSONNode json)
	{
		this.x = json["x"].AsFloat;
		this.y = json["y"].AsFloat;
		this.rotation = json["rotation"].AsFloat;
		this.score = json["score"].AsInt;
		this.health = json["health"].AsInt;
		this.colour = json["colour"];
	}
}

public class Player : MonoBehaviour
{
	public static bool Create(int id, PlayerData playerData, bool debug)
	{
		// It might have already been created.
		if (GameObject.Find(PlayerId(id)) != null)
			return true;

		// Generate sphere.
		GameObject player = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		if (player == null)
			return false;

		// TEMPORARY
		if (id == 1 && debug) 
		{
			GameObject plane = GameObject.CreatePrimitive(PrimitiveType.Plane);
			plane.GetComponent<Renderer>().material.color = Color.green;
			plane.transform.localPosition = new Vector3(0.0f, -0.45f, 0.0f);
			plane.transform.localScale = new Vector3(0.8f, 1.0f, 0.8f);
			plane.transform.parent = player.transform;
		
			//Camera.main.GetComponent<FollowAvatar>().target = player;
		}

		player.transform.position = new Vector3(playerData.x, 0.5f, playerData.y);
		player.name = PlayerId(id);
		player.AddComponent<PlayerController>();

		// Assign colour.
		Color playerColour;
		ColorUtility.TryParseHtmlString(playerData.colour, out playerColour);
		player.GetComponent<Renderer>().material.color = playerColour;

		// Add score text.
		GameObject text = new GameObject("Text");
		Vector3 textPosition = player.transform.position;
		textPosition.y += 1.5f;
		textPosition.z += 0.25f;
		text.transform.position = textPosition;
		text.transform.rotation = Quaternion.Euler(0.0f, 45.0f, 0.0f);
		text.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);

		text.AddComponent<TextMesh>();
		text.AddComponent<MeshRenderer>();
		text.GetComponent<TextMesh>().text = Convert.ToString(playerData.score);
		text.GetComponent<TextMesh>().fontSize = 80;

		text.transform.parent = player.transform;

		// Add health bar.
		GameObject healthBar = new GameObject("Health bar");
		GameObject redBar = new GameObject("Red bar");
		GameObject greenBar = new GameObject("Green bar");

		Texture2D greenTexture = new Texture2D(100, 25);
		Texture2D redTexture = new Texture2D(100, 25);
		for (int x = 0; x < 100; x++)
			for (int y = 0; y < 25; y++) 
				{
					greenTexture.SetPixel(x, y, Color.green);
					redTexture.SetPixel(x, y, Color.red);
				}

		Sprite greenBarSprite = Sprite.Create(greenTexture, 
			new Rect(0.0f, 0.0f, 10.0f, 1.0f),
			new Vector2(0.5f, 0.5f),
			100.0f);
		Sprite redBarSprite = Sprite.Create(redTexture, 
			new Rect(0.0f, 0.0f, 10.0f, 1.0f),
			new Vector2(0.5f, 0.5f),
			100.0f);

		SpriteRenderer greenBarRenderer = greenBar.AddComponent<SpriteRenderer>();
		greenBarRenderer.color = Color.green;
		greenBarRenderer.sprite = greenBarSprite;
		greenBarRenderer.sortingOrder = 1;
		SpriteRenderer redBarRenderer = redBar.AddComponent<SpriteRenderer>();
		redBarRenderer.color = Color.red;
		redBarRenderer.sprite = redBarSprite;

		greenBar.transform.parent = healthBar.transform;
		redBar.transform.parent = healthBar.transform;

		redBar.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
		redBar.transform.localRotation = Quaternion.Euler(0.0f, 0.0f, 0.0f);
		redBar.transform.localScale = new Vector3(10.0f, 10.0f, 1.0f);
		greenBar.transform.localPosition = new Vector3 (0.0f, 0.0f, 0.0f);
		greenBar.transform.localRotation = Quaternion.Euler(0.0f, 0.0f, 0.0f);
		greenBar.transform.localScale = new Vector3(10.0f, 10.0f, 1.0f);

		healthBar.transform.parent = player.transform;

		healthBar.transform.localRotation = Quaternion.Euler(0.0f, 45.0f, 0.0f);
		healthBar.transform.localPosition = new Vector3 (-0.45f, 0.25f, -0.45f);

		return true;
	}

	public static bool Delete(int id)
	{
		GameObject playerToDestroy = GameObject.Find(PlayerId(id));
		if (playerToDestroy == null)
			return false;

		Destroy(playerToDestroy);

		return true;
	}

	public static bool Update(int id, PlayerData playerData)
	{
		GameObject playerToUpdate = GameObject.Find(PlayerId(id));
		if (playerToUpdate == null)
			return false;

		PlayerController controller = playerToUpdate.GetComponent<PlayerController>();
		if (controller == null)
			return false;

		// The controller will change the position, score and health.
		controller.SetNextState(playerData);

		return true;	
	}

	private static string PlayerId(int id)
	{
		return "player" + Convert.ToString(id);
	}
}
