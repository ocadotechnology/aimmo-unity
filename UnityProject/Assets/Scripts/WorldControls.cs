using UnityEngine;
#if UNITY_EDITOR
using UnitySocketIO;
using UnitySocketIO.Events;
#endif
using MapFeatures.Obstacles;
using MapFeatures.Pickups;
using MapFeatures.ScoreLocations;
using Players;
using Utilities;


/* Main class of the game. It has the following responsibilities:
 *  - Handle the first communication with the backend to setup the world.
 *  - Receive the updates from the backend.
 *  - Delegate the tasks from these updates to the respective objects.
 */

public class WorldControls : MonoBehaviour
{
    // The GameState buffer processes the request every `ProcessingInterval` seconds.
    IBuffer<GameStateDTO> gameStateBuffer = new CircularBuffer<GameStateDTO>(gameStateBufferLength);
    private const float ProcessingInterval = 2f;
    private float startTime;
    private const int gameStateBufferLength = 2;
    private int gameStateEventCount = 1;

#if UNITY_EDITOR
    // Socket used to receive data from the backend.
    public SocketIOController io;
#endif

    // User identifier.
    public int currentAvatarID = 0;

    // Map feature managers.
    private ObstacleManager obstacleManager;
    private ScorePointManager scorePointManager;
    private PickupManager pickupManager;

    // Player manager.
    private PlayerManager playerManager;
    bool started = false;

    // Tell WebGL to ignore keyboard input.
    void Awake()
    {

#if !UNITY_EDITOR && UNITY_WEBGL
			WebGLInput.captureAllKeyboardInput = false;
#endif
    }

    void Start()
    {
#if UNITY_EDITOR
        EstablishSocketConnection();
#endif

        // Initialise map feature managers.
        obstacleManager = gameObject.AddComponent(typeof(ObstacleManager)) as ObstacleManager;
        scorePointManager = gameObject.AddComponent(typeof(ScorePointManager)) as ScorePointManager;
        pickupManager = gameObject.AddComponent(typeof(PickupManager)) as PickupManager;

        // Initialise player manager.
        playerManager = gameObject.AddComponent(typeof(PlayerManager)) as PlayerManager;
        playerManager.playersCurrentAvatarID = currentAvatarID;

        Debug.Log(playerManager.playersCurrentAvatarID);

        Application.runInBackground = true;
        startTime = Time.time;
        QualitySettings.antiAliasing = 8;
        started = true;
    }

    void Update()
    {
        float step = Time.time - startTime;

        if (step >= ProcessingInterval)
            ProcessUpdate();
    }

#if UNITY_EDITOR
    public void EstablishSocketConnection()
    {
        io.Connect(); 

        io.On("connect", (SocketIOEvent e) =>
            {
                Debug.Log("SocketIO Connected.");
            });


        io.On("game-state", (SocketIOEvent e) =>
            {
                
                if (e.data == "")
                    return;

                Debug.Log("GAME STATE EVENT");
                NewGameState(e.data);
            });
    }
#endif

    public void ReceiveGameUpdate(string input)
    {
        if (input != "" && started)
        {
            NewGameState(input);
        }
    }

    // Sets the current players avatar ID so that a marker can be added.
    public void SetCurrentAvatarID(int playersCurrentAvatarID)
    {
        Debug.Log("Inside set curr avatar id");
        Debug.Log(playersCurrentAvatarID);
        currentAvatarID = playersCurrentAvatarID;
    }

    public void NewGameState(string gameStateString)
    {
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
        gameStateBuffer.Enqueue(gameStateDTO);
    }

    // Manage the changes in the scene.
    void ProcessUpdate()
    {
        startTime = Time.time;

        if (!gameStateBuffer.HasNext())
        {
            return;
        }
        GameStateDTO gameState = gameStateBuffer.Pop();

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
