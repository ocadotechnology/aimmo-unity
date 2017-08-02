using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* The struct PlayerData holds all the necessary information to create or update
 * a player in the scene. 
 * 
 * The appearance will probably change in the future.
 */

public struct PlayerData
{
	public float x, y, rotation;
	public int score, health;
	public string colour;

	// Construct from just position.
	public PlayerData(Vector2 position)
	{
		this.x = position.x;
		this.y = position.y;
		this.rotation = 0.0f;
		this.score = 0;
		this.health = 5; 
		this.colour = "";
	}

	// Construct from JSON.
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

/* Holds the methods to Create / Delete / Update players in a similar fashion to
 * MapFeautre.
 */

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

		player.tag = "Avatar";

		// TEMPORARY.
		if (id == 1 && debug) 
		{
			GameObject plane = GameObject.CreatePrimitive(PrimitiveType.Plane);
			plane.GetComponent<Renderer>().material.color = Color.green;
			plane.transform.localPosition = new Vector3(0.0f, -0.45f, 0.0f);
			plane.transform.localScale = new Vector3(0.8f, 1.0f, 0.8f);
			plane.transform.parent = player.transform;
		}

		player.AddComponent<IsometricPosition>().Set(playerData.x, playerData.y);
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
		player.AddComponent<PlayerHealthBar>();

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
