using UnityEngine;
using System;

public class TerrainGenerator
{
    public const float TerrainScalingFactor = 0.1f;
    public const float TerrainSnapToGridShift = 0.5f;
    private GameObject terrainGameObject;
    private GameObject terrainMMOFolder;
        
    public void GenerateTerrain(TerrainDTO terrain)
    {
        if (!terrainGameObject) {
            terrainGameObject = GetTerrainGameObject();
        }
        Vector3 newScale = new Vector3(TerrainScalingFactor * terrain.width, 
                                       TerrainScalingFactor, 
                                       TerrainScalingFactor * terrain.height);
        if (terrainGameObject.transform.localScale != newScale) {
            float shiftX = terrain.width % 2 == 0 ? TerrainSnapToGridShift : 0f;
            float shiftZ = terrain.height % 2 == 0 ? TerrainSnapToGridShift : 0f;
            terrainGameObject.transform.localPosition = new Vector3(shiftX, 0f, shiftZ);
            terrainGameObject.transform.localScale = newScale;
        }
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


    public GameObject GenerateTerrainMMO(TerrainDTO terrainDTO)
    {
        // TODO: make this dynamic for other types of terrains.
        GameObject terrainPrefab = Resources.Load<GameObject>("Prefabs/Terrains/terrain_lessFlat_default");
        terrainGameObject = GameObject.Instantiate(terrainPrefab) as GameObject;
        terrainGameObject.transform.SetParent(GameObject.Find("Terrain").transform, false);
        terrainGameObject.transform.localPosition = new Vector3(0, 0, 0);

        GenerateTerrain(terrainDTO);

        return terrainGameObject;
    }

    private GameObject GetTerrainGameObject() {
        return GameObject.FindWithTag("Terrain");
    }
}