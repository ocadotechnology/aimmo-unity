using UnityEngine;
using System.Collections;

public class OverlayGenerator
{
    private GameObject terrainFolder;
    private GameObject gridGameObject;
    private static float TERRAIN_GRID_OFFSET = 0.01f;

    public OverlayGenerator(GameObject terrainFolder = null, GameObject gridGameObject = null)
    {
        this.terrainFolder = terrainFolder;
        this.gridGameObject = gridGameObject;
    }

    public GameObject GenerateGridForTerrain(TerrainDTO terrain)
    {
        if (!gridGameObject)
        {
            gridGameObject = GetGridGameObject();
        }
        Vector3 newScale = new Vector3(TerrainGenerator.TerrainScalingFactor * terrain.width,
                                       TerrainGenerator.TerrainScalingFactor,
                                       TerrainGenerator.TerrainScalingFactor * terrain.height);
        if (gridGameObject.transform.localScale != newScale)
        {
            gridGameObject.transform.localScale = newScale;
        }
        UpdateGridMaterial(terrain);
        return gridGameObject;
    }

    private void UpdateGridMaterial(TerrainDTO terrain)
    {
        Material material = gridGameObject.GetComponent<Renderer>().sharedMaterial;
        material.mainTextureScale = new Vector2(terrain.width, terrain.height);
    }

    private GameObject GetGridGameObject()
    {
        GameObject grid = GameObject.FindWithTag("Grid");
        if (grid == null)
        {
            GameObject gridPrefab = GetGridPrefab();
            grid = GameObject.Instantiate(gridPrefab);
            grid.transform.SetParent(terrainFolder.transform);
            grid.transform.localPosition = new Vector3(0f, TERRAIN_GRID_OFFSET, 0f);
        }
        return grid;
    }

    private GameObject GetGridPrefab()
    {
        return Resources.Load<GameObject>("Prefabs/Overlays/overlay_grid");
    }
}
