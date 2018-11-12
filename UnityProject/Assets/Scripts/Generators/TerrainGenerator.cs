using UnityEngine;
using System;

public class TerrainGenerator
{
    public const float TerrainScalingFactor = 0.1f;
    public const float TerrainSnapToGridShift = 0.5f;
    public const string TerrainTag = "Terrain";
    public const string TerrainEdgeTag = "TerrainEdge";
    private GameObject terrainGameObject;
    private GameObject terrainEdgeGameObject;
    public GameObject terrainFolder;

    public TerrainGenerator(GameObject terrainFolder = null, GameObject terrain = null, GameObject terrainEdge = null)
    {
        this.terrainFolder = terrainFolder ?? GetTerrainFolder();
        this.terrainGameObject = terrain ?? GetTerrainGameObject();
        this.terrainEdgeGameObject = terrainEdge ?? GetTerrainEdgeGameObject();
    }

    public GameObject GenerateTerrain(TerrainDTO terrain)
    {
        terrainFolder = terrainFolder ?? GetTerrainFolder();
        terrainGameObject = terrainGameObject ?? GetTerrainGameObject();
        Vector3 newScale = new Vector3(TerrainScalingFactor * terrain.width,
                                       TerrainScalingFactor,
                                       TerrainScalingFactor * terrain.height);
        if (terrainGameObject.transform.localScale != newScale)
        {
            float shiftX = terrain.width % 2 == 0 ? TerrainSnapToGridShift : 0f;
            float shiftZ = terrain.height % 2 == 0 ? TerrainSnapToGridShift : 0f;
            terrainFolder.transform.localPosition = new Vector3(shiftX, 0f, shiftZ);
            terrainGameObject.transform.localScale = newScale;
        }

        return terrainGameObject;
    }

    public GameObject GenerateTerrainEdge(TerrainDTO terrain)
    {
        terrainFolder = terrainFolder ?? GetTerrainFolder();
        terrainEdgeGameObject = terrainEdgeGameObject ?? GetTerrainEdgeGameObject();
        Vector3 newScale = new Vector3(TerrainScalingFactor * (terrain.width + 100),
                               TerrainScalingFactor,
                                TerrainScalingFactor * (terrain.height + 100));
        
        terrainEdgeGameObject.transform.localScale = newScale;

        return terrainEdgeGameObject;
    }
        

    public GameObject GenerateTerrainMMO(TerrainDTO terrainDTO)
    {
        GameObject terrainPrefab = Resources.Load<GameObject>("Prefabs/Terrains/terrain_future_default");
        terrainGameObject = UnityEngine.Object.Instantiate(terrainPrefab) as GameObject;
        terrainGameObject.transform.SetParent(terrainFolder.transform, false);
        terrainGameObject.transform.localPosition = new Vector3(0, 0, 0);

        GenerateTerrain(terrainDTO);

        UpdateTerrainMaterial(terrainDTO);

        return terrainGameObject;
    }

    public GameObject GenerateTerrainEdgeMMO(TerrainDTO terrainDTO)
    {
        GameObject terrainEdgePrefab = Resources.Load<GameObject>("Prefabs/Terrains/terrainEdge_future");
        terrainEdgeGameObject = UnityEngine.Object.Instantiate(terrainEdgePrefab) as GameObject;
        terrainEdgeGameObject.transform.SetParent(terrainFolder.transform, false);
        terrainEdgeGameObject.transform.localPosition = new Vector3(0, -0.1f, 0);

        GenerateTerrainEdge(terrainDTO);

        return terrainEdgeGameObject;
    }


    public int CalculateHeightFromGameState(GameStateDTO gameState)
    {
        int height = Math.Abs(gameState.northEastCorner.y - gameState.southWestCorner.y) + 1;

        return height;
    }

    public int CalculateWidthFromGameState(GameStateDTO gameState)
    {
        int width = Math.Abs(gameState.northEastCorner.x - gameState.southWestCorner.x) + 1;

        return width;
    }

    private GameObject GetTerrainGameObject()
    {
        return GameObject.FindWithTag(TerrainTag);
    }

    private GameObject GetTerrainEdgeGameObject()
    {
        return GameObject.FindWithTag(TerrainEdgeTag);
    }

    private GameObject GetTerrainFolder()
    {
        return GameObject.Find(TerrainTag);
    }

    private void UpdateTerrainMaterial(TerrainDTO terrain)
    {
        Material material = terrainGameObject.GetComponent<Renderer>().sharedMaterial;
        material.mainTextureScale = new Vector2(terrain.width, terrain.height);
    }
}
