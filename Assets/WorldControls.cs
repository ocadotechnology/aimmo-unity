using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnitySocketIO;
using UnitySocketIO.Events;
using SimpleJSON;

public class WorldControls : MonoBehaviour
{
	public SocketIOController io;

	public void Start()
	{
		if (Application.platform == RuntimePlatform.WebGLPlayer) 
		{
			// Ask the browsers for setup calls.
			// (See unity.html for clarifications.)
			Debug.Log("Sending message to WebGLPlayer.");
			Application.ExternalCall("SendAllConnect");
		}
		else 
		{
			// TEMPORARY: Otherwise connect directly. Just for testing.
			EstablishConnection();
		} 

		WorldInit();
	}

	// Socket setup.
	public void SetGameURL(string url)
	{
		Debug.Log("Game URL set:" + url);
		io.settings.url = url;
	}

	public void SetGamePort(int port)
	{
		Debug.Log("Game port set:" + port);
		io.settings.port = port;
	}

	// The backend calls this function to open a socket connection.
	// Once this happens, the game starts.
	public void EstablishConnection()
	{
		io.ResetSettings();

		io.On("connect", (SocketIOEvent e) => {
			Debug.Log("SocketIO Connected.");
		});

		io.Connect();

		io.On("world-update", (SocketIOEvent e) => {
			WorldUpdate(e.data);
		});
	}

	// Handle initial request and build the map.
	void WorldInit()
	{
		// TEMPORARY! For now we'll just have a massive plane. 
		GameObject floor = GameObject.CreatePrimitive(PrimitiveType.Plane);
		floor.transform.position = new Vector3(0.0f, 0.0f, 0.0f);
		floor.transform.localScale = new Vector3(10.0f, 10.0f, 10.0f);
		floor.GetComponent<Renderer>().material.color = Color.gray;
	}

	// Receive updates from the backend, parse them and delegate to the 
	// classes in charge of creating, deleting and updating game objects.
	void WorldUpdate(string updatesString)
	{
		JSONNode updates = JSON.Parse(updatesString);

		// Players updates.
		JSONNode players = updates["players"];

		foreach (JSONNode player in players["create"].AsArray) 
			Player.Create(player["id"].AsInt, new PlayerData(player));

		foreach (JSONNode player in players["delete"].AsArray)
			Player.Delete(player["id"].AsInt);

		foreach (JSONNode player in players["update"].AsArray)
			Player.Update(player["id"].AsInt, new PlayerData(player));
	
		// Map features updates.
		JSONNode mapFeatures = updates["map_features"];
		JSONNode healthPoints = mapFeatures["health_ponts"];
		JSONNode scorePoints = mapFeatures["score_points"];
		JSONNode pickups = mapFeatures ["pickups"];
		JSONNode obstacles = mapFeatures ["obstacles"];

		// Health points.
		foreach (JSONNode healthPoint in healthPoints["create"].AsArray)
			HealthPoint.Create(
				healthPoint["id"].AsInt, 
				healthPoint["x"].AsFloat, 
				healthPoint["y"].AsFloat);

		foreach (JSONNode healthPoint in healthPoints["delete"].AsArray)
			HealthPoint.Delete(healthPoint["id"].AsInt);

		// Score points.
		foreach (JSONNode scorePoint in scorePoints["create"].AsArray)
			ScorePoint.Create(
				scorePoint["id"].AsInt, 
				scorePoint["x"].AsFloat, 
				scorePoint["y"].AsFloat);

		foreach (JSONNode scorePoint in scorePoints["delete"].AsArray)
			HealthPoint.Delete(scorePoint["id"].AsInt);

		// Pickups.
		foreach (JSONNode pickup in pickups["create"].AsArray)
			HealthPoint.Create(
				pickup["id"].AsInt, 
				pickup["x"].AsFloat, 
				pickup["y"].AsFloat);
		
		foreach (JSONNode pickup in pickups["delete"].AsArray)
			HealthPoint.Delete(pickup["id"].AsInt);

		// Obstacles.
		foreach (JSONNode obstacle in obstacles["create"].AsArray)
			HealthPoint.Create(
				obstacle["id"].AsInt, 
				obstacle["x"].AsFloat, 
				obstacle["y"].AsFloat);

		foreach (JSONNode healthPoint in healthPoints["delete"].AsArray)
			HealthPoint.Delete(healthPoint["id"].AsInt);
	}
}
