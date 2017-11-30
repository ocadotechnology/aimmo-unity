using UnityEngine;
using UnityEditor;

public class TerrainGenerator
{
    private const float TerrainScalingFactor = 0.1f;
    private const float TerrainSnapToGridShift = -0.5f;
    private GameObject terrainGameObject;

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

    private GameObject GetTerrainGameObject() {
        return GameObject.FindWithTag("Terrain");
    }
}