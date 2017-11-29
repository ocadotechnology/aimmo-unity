using UnityEngine;
using UnityEditor;
using System.Collections;

public class ObstacleGenerator 
{
    public static void GenerateObstacle(GameObject obstaclePrefab)
    {
        GameObject obstacle = Object.Instantiate(
            obstaclePrefab, 
            Vector3.zero, 
            Quaternion.identity) as GameObject;
        obstacle.transform.SetParent(GameObject.Find("Obstacles").transform, false);
    }
}

