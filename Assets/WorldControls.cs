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
			// Connect directly. JUST FOR TESTING!!!
			EstablishConnection();
		} 
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
		Debug.Log("Starting establish connection.");
		io.ResetSettings();
		Debug.Log ("Settings reseted.");

		io.On("connect", (SocketIOEvent e) => {
			Debug.Log("SocketIO Connected.");
		});

		io.Connect();

		io.On("world-update", (SocketIOEvent e) => {
			Debug.Log("Update!");
			WorldUpdate(e.data);
		});
	}

	// Handle initial request and build the map.
	void WorldInit(string rawMap)
	{
		// TEMPORARY! For now we'll just have a massive plane. 
		GameObject floor = GameObject.CreatePrimitive(PrimitiveType.Plane);
		floor.transform.position = new Vector3(0.0f, 0.0f, 0.0f);
		floor.transform.localScale = new Vector3(10.0f, 10.0f, 10.0f);
		floor.GetComponent<Renderer>().material.color = Color.gray;

		// Create cubes (walls).
		/*var objectList = map["objects"];

		for (int i = 0; i < objectList.Count; i++)
		{
			var obj = objectList[i];

			string id = "object" + Convert.ToString(obj["id"].AsInt);

			float x = (float) obj["x"].AsInt;
			float y = (float) obj["y"].AsInt;

			// Create new obstacle.
			GameObject wall = GameObject.CreatePrimitive(PrimitiveType.Cube);
			wall.transform.position = new Vector3(x, 0.5f, y);
			wall.name = id;
			wall.GetComponent<Renderer>().material.color = Color.black;

			Debug.Log(id + " is at position (" + x + ", " + y + ")");
		}

		// Create spheres (avatars)
		var playersList = map["players"];

		for (int i = 0; i < playersList.Count; i++)
		{
			var player = playersList[i];

			string id = "player" + Convert.ToString(player["id"].AsInt);

			float x = (float) player["x"].AsInt;
			float y = (float) player["y"].AsInt;

			// Create new game object.
			CreatePlayer(id, x, y);
		}

		// Create fancy cubes (score locations)
		var scoreLocations = map["score_locations"];

		for (int i = 0; i < scoreLocations.Count; i++)
		{
			var scoreLoc = scoreLocations[i];

			float x = (float) scoreLoc["x"].AsInt;
			float y = (float) scoreLoc["y"].AsInt;

			// Create new game object.
			GameObject scoreCube = GameObject.CreatePrimitive(PrimitiveType.Cube);
			scoreCube.transform.position = new Vector3(x, 0.0f, y);
			scoreCube.transform.localScale = new Vector3(1.0f, 0.01f, 1.0f);

			// Transparecy doesn't work.
			Color scoreColor = Color.magenta;
			scoreColor.a = 0.2f;
			scoreCube.GetComponent<Renderer>().material.color = scoreColor;
		}*/
	}

	// Receive just updats from the backend.
	void WorldUpdate(string updates)
	{
		/*Debug.Log("Raw players list: " + rawPlayersList);

		var playersUpdates = JSON.Parse(updates)["players"];
		var mapFeaturesUpdates = JSON.Parse()


		for (int i = 0; i < playersList.Count; i++)
		{
			var player = playersList[i];

			string id = "player" + Convert.ToString(player["id"].AsInt);
			GameObject avatar = GameObject.Find(id);

			float x = (float) player["x"].AsInt;
			float y = (float) player["y"].AsInt;

			int nextScore = player["score"].AsInt;

			AvatarController controller = avatar.GetComponent<AvatarController>();
			Vector3 nextPosition = new Vector3(x, 0.5f, y);
			controller.SetNextState(nextPosition, nextScore);

			Debug.Log("Moved " + id + " to position (" + x + ", " + y + ")");
		}*/
	}

	// Helper method
	void CreatePlayer(string id, float x, float y)
	{
		// Generate 3D shape.
		GameObject avatar = GameObject.CreatePrimitive(PrimitiveType.Sphere);

		avatar.transform.position = new Vector3(x, 0.5f, y);
		avatar.name = id;
		avatar.AddComponent<AvatarController>();

		// Assign random colour.
		avatar.GetComponent<Renderer>().material.color = UnityEngine.Random.ColorHSV();

		// Add score text.
		GameObject text = new GameObject();
		Vector3 textPosition = avatar.transform.position;
		textPosition.y += 1.5f;
		textPosition.z += 0.25f;
		text.transform.position = textPosition;
		text.transform.rotation = Quaternion.Euler(0.0f, 45.0f, 0.0f);
		text.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);

		text.AddComponent<TextMesh>();
		text.AddComponent<MeshRenderer>();
		text.GetComponent<TextMesh>().text = "0";
		text.GetComponent<TextMesh>().fontSize = 80;

		text.transform.parent = avatar.transform;

		Debug.Log("Created " + id + " at position (" + x + ", " + y + ")");
	}
}
