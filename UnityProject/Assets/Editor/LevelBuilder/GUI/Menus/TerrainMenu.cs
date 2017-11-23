using UnityEngine;
using UnityEditor;

public class TerrainMenu : IMenu
{
    private TerrainDTO terrainDTO;
    private TerrainDTO displayedTerrain;
    private TerrainGenerator terrainGenerator;

    public TerrainMenu() {
        terrainDTO = new TerrainDTO(10, 10);
        terrainGenerator = new TerrainGenerator();
    }

    public void Display()
    {
        DisplayTitle();
        DisplayTerrainSizeInputs();
    }

    private void DisplayTitle()
    {
        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("Terrain", EditorStyles.largeLabel);
        EditorGUILayout.EndHorizontal();
    }

    private void DisplayTerrainSizeInputs()
    {
        EditorGUILayout.BeginHorizontal();
        EditorGUI.BeginChangeCheck();
        terrainDTO.width = EditorGUILayout.IntField("Width: ", terrainDTO.width);
        terrainDTO.height = EditorGUILayout.IntField("Height: ", terrainDTO.height);
        if (EditorGUI.EndChangeCheck())
        {
            terrainGenerator.GenerateTerrain(terrainDTO);
        }
        EditorGUILayout.EndHorizontal();

    }
}
