using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnitySocketIO;
using UnitySocketIO.Events;
using SimpleJSON;

/* Main class of the game. It has the following responsibilities:
 *  - Handle the first communication with the backend to setup the world.
 *  - Receive the updates from the backend.
 *  - Delegate the tasks from these updates to the respective objects.
 *  - Tell the backend when the game is closed (OnApplicationQuit).
 */

public class WorldControls : MonoBehaviour
{
	// Marking this as true will make a plane appear around the main game object
	// representing its view.
	public bool debug;

	// We use the dataQueue to process the request at our desired rate, i.e.
	// every ProcessingInterval seconds.
	private Queue<JSONNode> dataQueue;
	private const float ProcessingInterval = 0.75f;
	private float startTime;

	// Socket used to receive data from the backend.
	public SocketIOController io;

	// TEMPORARY. Main user id.
	private int userId = 1;

	// Map feature managers.
	private ObstacleManager obstacleManager;
	private ScorePointManager scorePointManager;
	private HealthPointManager healthPointManager;
	private PickupManager pickupManager;

	// Where all the managers will be put with the respective keys that match
	// with the JSON sent from the backend.
	private Dictionary<string, MapFeatureManager> mapFeatureManagers;
	private static readonly string[] mapFeatureNames = 
		{"obstacle", 
		 "score_point", 
		 "health_point",
		 "pickup"};

	// Tell WebGL too ignore keyboard input.
	void Awake() 
	{
		#if !UNITY_EDITOR && UNITY_WEBGL
			WebGLInput.captureAllKeyboardInput = false;
		#endif
	}

	// Initial connection
	void Start()
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

		startTime = Time.time;
		dataQueue = new Queue<JSONNode>();

		WorldInit();
	}

	// Calls ProcessUpdate every ProcessingInterval seconds.
	void Update()
	{
		float step = Time.time - startTime;

		if (dataQueue == null)
			return;

		if (step >= ProcessingInterval && dataQueue.Count > 0)
			ProcessUpdate();
	}

	// Socket setup.
	public void SetGameURL(string url)
	{
		io.settings.url = url;
	}

	public void SetGamePort(int port)
	{
		io.settings.port = port;
	}

	public void SetUserId(int userId)
	{
		this.userId = userId;
	}

	// The backend calls this function to open a socket connection.
	// Once this happens, the game starts.
	public void EstablishConnection()
	{
		io.ResetSettings();

		io.On("connect", (SocketIOEvent e) => 
		{
			Debug.Log("SocketIO Connected.");
		});

		io.Connect();

		io.On("world-init", (SocketIOEvent e) => 
		{
			Debug.Log("World init.");

			// So that the server knows that requests have started
			// being processed.
			io.Emit("client-ready", Convert.ToString(userId));

			Debug.Log("Emitted response.");
		});

		io.On("world-update", (SocketIOEvent e) => 
		{
			WorldUpdate(e.data);
		});
	}

	// Handle initial request.
	void WorldInit()
	{
		// Initialise map feature managers.
		obstacleManager = new ObstacleManager();
		scorePointManager = new ScorePointManager();
		healthPointManager = new HealthPointManager();
		pickupManager = new PickupManager();

		// Initialise dictionary.
		mapFeatureManagers = new Dictionary<string, MapFeatureManager>();
		mapFeatureManagers.Add(mapFeatureNames[0], obstacleManager);
		mapFeatureManagers.Add(mapFeatureNames[1], scorePointManager);
		mapFeatureManagers.Add(mapFeatureNames[2], healthPointManager);
		mapFeatureManagers.Add(mapFeatureNames[3], pickupManager);
	}

	// Receive updates from the backend, parse them and delegate to the 
	// classes in charge of creating, deleting and updating game objects.
	void WorldUpdate(string updatesString)
	{
		JSONNode updates = JSON.Parse(updatesString);

		// TEMPORARY. We only subscribe to the relevant updates.
		if (userId == updates["main_player"].AsInt)
			dataQueue.Enqueue(updates);
	}

	// Manage the changes in the scene.
	void ProcessUpdate()
	{
		startTime = Time.time;
		JSONNode updates = dataQueue.Dequeue();

		// Players updates.
		JSONNode players = updates["players"];

		foreach (JSONNode player in players["create"].AsArray) 
			Player.Create(player["id"].AsInt, new PlayerData(player), debug);

		foreach (JSONNode player in players["delete"].AsArray)
			Player.Delete(player["id"].AsInt);

		foreach (JSONNode player in players["update"].AsArray)
			Player.Update(player["id"].AsInt, new PlayerData(player));

		// Map features updates.
		JSONNode mapFeatures = updates["map_features"];

		foreach (string mapFeatureName in mapFeatureNames)
		{
			MapFeatureManager mapFeatureManager = mapFeatureManagers[mapFeatureName];
			JSONNode mapFeatureJSON = mapFeatures[mapFeatureName];

			// Create.
			foreach (JSONNode mapFeature in mapFeatureJSON["create"].AsArray)
				mapFeatureManager.Create(
					mapFeature["id"], 
					mapFeature["x"].AsFloat, 
					mapFeature["y"].AsFloat);

			// Delete.
			foreach (JSONNode mapFeature in mapFeatureJSON["delete"].AsArray)
				mapFeatureManager.Delete(mapFeature["id"]);
		}
	}

	public void Cleanup()
	{
		// Telling the backend I am quitting
		io.Emit("exit-game", Convert.ToString(userId));

		// Delete all map features and avatars.
		GameObject[] allMapFeatures = GameObject.FindGameObjectsWithTag("MapFeature");
		GameObject[] allAvatars = GameObject.FindGameObjectsWithTag("Avatar");

		foreach (GameObject mapFeature in allMapFeatures) 
		{
			Destroy(mapFeature);
		}
		foreach (GameObject avatar in allAvatars) 
		{
			Destroy(avatar);
		}
	}
}
