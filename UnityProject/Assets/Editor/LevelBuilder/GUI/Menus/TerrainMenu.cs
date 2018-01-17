using UnityEngine;
using UnityEditor;

public class TerrainMenu : IMenu
{
    private Vector2Int terrainSize;
    private TerrainGenerator terrainGenerator;
    private OverlayGenerator gridGenerator;

    public TerrainMenu()
    {
        terrainSize = new Vector2Int(10, 10);
        terrainGenerator = new TerrainGenerator();
        gridGenerator = new OverlayGenerator();
    }

    public void Display()
    {
        DisplayTitle();
        DisplayTerrainSizeInputs();
    }

    private void DisplayTitle()
    {
        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("Terrain",
                                   EditorStyles.largeLabel,
                                   new GUILayoutOption[] { GUILayout.Height(LevelBuilderWindow.SectionTitleHeight) });
        EditorGUILayout.EndHorizontal();
    }

    private void DisplayTerrainSizeInputs()
    {
        EditorGUILayout.BeginHorizontal();
        EditorGUI.BeginChangeCheck();
        terrainSize = EditorGUILayout.Vector2IntField("Size", terrainSize);
        if (EditorGUI.EndChangeCheck())
        {
            TerrainDTO terrainDTO = new TerrainDTO(terrainSize.x, terrainSize.y);
            terrainGenerator.GenerateTerrain(terrainDTO);
            gridGenerator.GenerateGridForTerrain(terrainDTO);
        }
        EditorGUILayout.EndHorizontal();

    }
}
