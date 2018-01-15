using UnityEngine;
using System.Collections;

public class OverlayGenerator
{
    private GameObject terrainFolder;
    private GameObject gridGameObject;


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
            UpdateGridMaterial(terrain);
        }
        return gridGameObject;
    }

    private void UpdateGridMaterial(TerrainDTO terrain)
    {
        Material material = gridGameObject.GetComponent<Renderer>().sharedMaterial;
        material.mainTextureScale = new Vector2(terrain.width, terrain.height);
    }

    private GameObject GetGridGameObject()
    {
        return GameObject.FindWithTag("Grid");
    }
}