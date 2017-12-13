using UnityEngine;

public class LevelGenerator
{
    private GameObject levelFolder;
    private GameObject terrainFolder;

    public void GenerateLevel()
    {
        SetupCamera();
        SetupLighting();
        CreateEmptyLevelFolder();
        CreateTerrainFolder();
        CreateTerrain();
        CreatePickupsFolder();
        CreateObstaclesFolder();
        CreatePlayerFolder();

        GameObject defaultPlayerPrefab = Resources.Load<GameObject>("Prefabs/Players/player_dee");
        PlayerGenerator.GeneratePlayer(defaultPlayerPrefab);
    }

    private void CreateEmptyLevelFolder()
    {
        levelFolder = new GameObject("Level");
        levelFolder.transform.position = new Vector3(TerrainGenerator.TerrainSnapToGridShift, 0f, TerrainGenerator.TerrainSnapToGridShift);
    }

    private void CreateTerrainFolder()
    {
        terrainFolder = new GameObject("Terrain");
        terrainFolder.transform.SetParent(levelFolder.transform, false);
        terrainFolder.transform.localPosition = new Vector3(0, 0, 0);
    }

    private void CreateTerrain()
    {
        GameObject terrainPrefab = Resources.Load<GameObject>("Prefabs/Terrains/terrain_lessFlat_default");
        GameObject terrain = GameObject.Instantiate(terrainPrefab) as GameObject;
        terrain.transform.SetParent(terrainFolder.transform, false);
        terrain.transform.localPosition = new Vector3(0, 0, 0);

        TerrainGenerator terrainGenerator = new TerrainGenerator();
        TerrainDTO dto = new TerrainDTO(10, 10);
        terrainGenerator.GenerateTerrain(dto);
    }

    private void CreatePickupsFolder()
    {
        GameObject pickupFolder = new GameObject("Pickups");
        pickupFolder.transform.localPosition = Vector3.zero;
        pickupFolder.transform.SetParent(levelFolder.transform, false);
    }

    private void CreateObstaclesFolder()
    {
        GameObject obstaclesFolder = new GameObject("Obstacles");
        obstaclesFolder.transform.localPosition = Vector3.zero;
        obstaclesFolder.transform.SetParent(levelFolder.transform, false);
    }

    private void CreatePlayerFolder()
    {
        GameObject avatarFolder = new GameObject("Players");
        avatarFolder.transform.localPosition = Vector3.zero;
        avatarFolder.transform.SetParent(levelFolder.transform, false);
    }

    private void SetupCamera()
    {
        GameObject cameraGameObject = new GameObject("Main Camera");
        cameraGameObject.AddComponent<Camera>();
        cameraGameObject.tag = "MainCamera";

        Camera camera = Camera.main;
        camera.transform.position = new Vector3(0.0f, 0.0f, -100.0f);
        camera.transform.rotation = Quaternion.Euler(Vector3.zero);
        camera.orthographic = true;
        camera.orthographicSize = 5.0f;
        camera.farClipPlane = 1000.0f;
        camera.nearClipPlane = 0.3f;
    }

    private void SetupLighting()
    {
        // Setting up the light.
        GameObject directionalLight = new GameObject("Directional Light");
        Light lightSettings = directionalLight.AddComponent<Light>();
        lightSettings.type = LightType.Directional;

        // The color needs to be normalized to the 0-1 range.
        lightSettings.color = new Color(1.0f, 0.956f, 0.839f, 1.0f);
        lightSettings.intensity = 1.0f;
        lightSettings.shadowBias = 0.05f;
        lightSettings.shadowNormalBias = 0.4f;
        lightSettings.shadowNearPlane = 0.2f;
        directionalLight.transform.position = new Vector3(0.0f, 3.0f, 0.0f);
        directionalLight.transform.rotation = Quaternion.Euler(50.0f, -30.0f, 0.0f);
    }
}

