using System;
using System.Collections.Generic;
using UnityEngine;
using UnitySocketIO;
using UnitySocketIO.Events;
using MapFeatures.Obstacles;
using MapFeatures.Pickups;
using MapFeatures.ScoreLocations;
using Players;

/* Main class of the game. It has the following responsibilities:
 *  - Handle the first communication with the backend to setup the world.
 *  - Receive the updates from the backend.
 *  - Delegate the tasks from these updates to the respective objects.
 */

public class WorldControls : MonoBehaviour
{
    // We use the dataQueue to process the request at our desired rate, i.e.
    // every ProcessingInterval seconds.
    private Queue<GameStateDTO> dataQueue;
    private const float ProcessingInterval = 2f;
    private float startTime;

    private int gameStateEventCount = 1;

    // Socket used to receive data from the backend.
    public SocketIOController io;

    // User identifier.
    private int userId;

    // Map feature managers.
    private ObstacleManager obstacleManager;
    private ScorePointManager scorePointManager;
    private PickupManager pickupManager;

    // Player manager.
    private PlayerManager playerManager;

    // Tell WebGL to ignore keyboard input.
    void Awake()
    {
        #if !UNITY_EDITOR && UNITY_WEBGL
			WebGLInput.captureAllKeyboardInput = false;
        #endif
    }

    // Initial connection.
    void Start()
    {
        // Initialise map feature managers.
        obstacleManager = gameObject.AddComponent(typeof(ObstacleManager)) as ObstacleManager;
        scorePointManager = gameObject.AddComponent(typeof(ScorePointManager)) as ScorePointManager;
        pickupManager = gameObject.AddComponent(typeof(PickupManager)) as PickupManager;

        // Initialise player manager.
        playerManager = gameObject.AddComponent(typeof(PlayerManager)) as PlayerManager;

        if (Application.platform == RuntimePlatform.WebGLPlayer)
        {
            // Ask the browsers for setup calls.
            // (See unity.html for clarifications.)
            Debug.Log("Sending message to WebGLPlayer.");
            Application.ExternalCall("SendAllConnect");
        }
        else
        {
            // TEMPORARY. Just for testing. Connect directly. Assume id = 1.
            EstablishConnection();
            SetUserId(1);
        }

        startTime = Time.time;
        dataQueue = new Queue<GameStateDTO>();
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

    public void SetGamePath(string path)
    {
        io.settings.path = path;
    }

    // Set main user.
    public void SetUserId(int userId)
    {
        this.userId = userId;

        // Now the camera knows who to follow.
        GameObject cameraGameObject = Camera.main.transform.gameObject;
        FollowAvatar followAvatar = cameraGameObject.AddComponent<FollowAvatar>();
        followAvatar.FollowUserWithId(playerManager.PlayerId(userId));
    }

    // The backend calls this function to open a socket connection.
    // Once this happens, the game starts.
    public void EstablishConnection()
    {
        io.Connect();


        io.On("connect", (SocketIOEvent e) =>
            {
                Debug.Log("SocketIO Connected.");
            });


        io.On("world-init", (SocketIOEvent e) =>
            {
                Debug.Log("World init.");

                // So that the server knows that requests have started
                // being processed.
                io.Emit("client-ready", Convert.ToString(userId));

                Debug.Log("Emitted response for the server for world initialisation.");
            });

        io.On("game-state", (SocketIOEvent e) =>
            {
                if (e.data == "")
                  return;
                NewGameState(e.data);
            });
    }

    public void NewGameState(string gameStateString)
    {
        // Convert the string to our DTO format.
        GameStateDTO gameState = ConvertJSONtoDTO(gameStateString);

        // Check if this is the first game-state event received. If so, set
        // up the terrain and don't do it ever again.
        if (gameStateEventCount == 1)
        {
            TerrainGenerator terrainGenerator = new TerrainGenerator();
            int width = terrainGenerator.CalculateWidthFromGameState(gameState);
            int height = terrainGenerator.CalculateHeightFromGameState(gameState);

            TerrainDTO terrainDTO = new TerrainDTO(width, height);
            terrainGenerator.GenerateTerrainMMO(terrainDTO);

            OverlayGenerator overlayGenerator = new OverlayGenerator(terrainFolder: terrainGenerator.terrainFolder);
            overlayGenerator.GenerateGridForTerrain(terrainDTO);

            // Generate the obstacles only on initial game creation. Don't duplicate.
            ObstacleDTO[] obstacles = gameState.obstacles;
            obstacleManager.UpdateFeatures(obstacles);
        }

        RenderGameState(gameState);

        gameStateEventCount++;
    }

    private GameStateDTO ConvertJSONtoDTO(string gameStateJSON)
    {
        GameStateDTO gameState = JsonUtility.FromJson<GameStateDTO>(gameStateJSON);
        return gameState;
    }

    // Receive updates from the backend, parse them and delegate to the
    // classes in charge of creating, deleting and updating game objects.
    void RenderGameState(GameStateDTO gameStateDTO)
    {
        dataQueue.Enqueue(gameStateDTO);
    }

    // Manage the changes in the scene.
    void ProcessUpdate()
    {
        startTime = Time.time;
        GameStateDTO gameState = dataQueue.Dequeue();

        // TODO: era might have to be passed to each of the managers as a second
        // parameter, as some require it for the prefab name and each mapfeature
        // doesn't reach the scope of that JSON.

        // Player updates.
        PlayerDTO[] players = gameState.players;
        playerManager.UpdatePlayersState(players);

        // Pickup updates.
        PickupDTO[] pickups = gameState.pickups;
        pickupManager.UpdateFeatures(pickups);

        // Score updates.
        ScoreLocationDTO[] scores = gameState.scoreLocations;
        scorePointManager.UpdateFeatures(scores);
    }
}
