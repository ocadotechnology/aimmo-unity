using UnityEngine;
using UnityEditor;
using System.Collections;
using MapFeatures.Obstacles;

public class ObstacleGenerator 
{
    public static GameObject GenerateObstacle(GameObject obstaclePrefab)
    {
        GameObject obstacle = Object.Instantiate(
            obstaclePrefab, 
            Vector3.zero, 
            Quaternion.identity) as GameObject;
        obstacle.transform.SetParent(GameObject.Find("Obstacles").transform, false);

        return obstacle;
    }

    public static GameObject GenerateObstacle(ObstacleDTO obstacleDTO)
    {
        // TODO: era is hardcoded until we find a efficient way to pass
        // this from WorldControls.
        string resource = "Prefabs/Obstacles/obstacle_" + "lessFlat" + "_" + obstacleDTO.type;
        GameObject obstaclePrefab = Resources.Load<GameObject>(resource);

        GameObject obstacle = Object.Instantiate(
                                  obstaclePrefab,
                                  new Vector3(obstacleDTO.location.x, 0, obstacleDTO.location.y),
                                  Quaternion.identity) as GameObject;

        obstacle.transform.SetParent(GameObject.Find("Obstacles").transform, false);
         
        obstacle.name = "obstacle_" + obstacleDTO.type + "_" + obstacleDTO.location.x + "_" + obstacleDTO.location.y;

        return obstacle;
    }
}

