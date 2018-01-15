using UnityEngine;
using MapFeatures.Obstacles;

public class ObstacleGenerator
{
    public static GameObject GenerateObstacle(GameObject obstaclePrefab)
    {
        Vector2 adjustedLocation = GetAdjustedLocation(obstaclePrefab);
        GameObject obstacle = Object.Instantiate(
            obstaclePrefab,
            new Vector3(adjustedLocation.x, 0, adjustedLocation.y),
            Quaternion.identity) as GameObject;
        obstacle.transform.SetParent(GameObject.Find("Obstacles").transform, false);
        Debug.Log(obstacle);
        return obstacle;
    }

    public static GameObject GenerateObstacle(ObstacleDTO obstacleDTO)
    {
        // TODO: era is hardcoded until we find a efficient way to pass
        // this from WorldControls.
        string resource = "Prefabs/Obstacles/obstacle_" + "future" + "_" + obstacleDTO.type;
        GameObject obstaclePrefab = Resources.Load<GameObject>(resource);
        Vector2 adjustedLocation = GetAdjustedLocation(obstacleDTO);
        GameObject obstacle = Object.Instantiate(
            obstaclePrefab,
            new Vector3(adjustedLocation.x, 0, adjustedLocation.y),
            Quaternion.identity) as GameObject;

        obstacle.transform.SetParent(GameObject.Find("Obstacles").transform, false);

        obstacle.name = "obstacle_" + obstacleDTO.type + "_" + obstacleDTO.location.x + "_" + obstacleDTO.location.y;

        return obstacle;
    }

    public static Vector2 GetAdjustedLocation(GameObject gameObject)
    {
        ObstacleDTO obstacleDTO = new ObstacleDTO();
        obstacleDTO.location = new Location(x: 0, y: 0);
        obstacleDTO.width = (int)Mathf.Ceil(gameObject.GetComponent<Renderer>().bounds.size.x);
        obstacleDTO.height = (int)Mathf.Ceil(gameObject.GetComponent<Renderer>().bounds.size.z);
        Debug.Log(obstacleDTO.width);
        Debug.Log(obstacleDTO.height);
        return GetAdjustedLocation(obstacleDTO);
    }

    public static Vector2 GetAdjustedLocation(ObstacleDTO obstacleDTO)
    {
        Location bottomLeftCorner = obstacleDTO.location;
        float shiftX = obstacleDTO.width > 1 ? -0.5f : 0f;
        float shiftY = obstacleDTO.height > 1 ? -0.5f : 0f;
        float centerX = bottomLeftCorner.x + obstacleDTO.width / 2 + shiftX;
        float centerY = bottomLeftCorner.y + obstacleDTO.height / 2 + shiftY;
        return new Vector2(centerX, centerY);
    }
}

