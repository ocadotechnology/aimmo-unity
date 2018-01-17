using UnityEngine;
using MapFeatures.Obstacles;

public class ObstacleGenerator
{
    public static GameObject GenerateObstacle(GameObject obstaclePrefab, Transform parent)
    {
        Vector2 adjustedLocation = GetAdjustedLocation(obstaclePrefab);
        GameObject obstacle = Object.Instantiate(
            obstaclePrefab,
            new Vector3(adjustedLocation.x, 0, adjustedLocation.y),
            Quaternion.identity) as GameObject;
        obstacle.transform.SetParent(parent, false);
        return obstacle;
    }

    public static GameObject GenerateObstacle(ObstacleDTO obstacleDTO, Transform parent)
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

        obstacle.transform.SetParent(parent, false);

        obstacle.name = "obstacle_" + obstacleDTO.type + "_" + obstacleDTO.location.x + "_" + obstacleDTO.location.y;

        return obstacle;
    }

    public static Vector2 GetAdjustedLocation(GameObject gameObject)
    {
        ObstacleDTO obstacleDTO = new ObstacleDTO();
        obstacleDTO.location = new Location(x: 0, y: 0);
        obstacleDTO.width = (int)Mathf.Ceil(gameObject.GetComponent<Renderer>().bounds.size.x);
        obstacleDTO.height = (int)Mathf.Ceil(gameObject.GetComponent<Renderer>().bounds.size.z);
        return GetAdjustedLocation(obstacleDTO);
    }

    /* 
     * ObstacleDTOs define the bottom left corner of the obstacle.
     * We need to adjust the location to the center of the obstacle for
     * Unity's coordinate system.
     */
    public static Vector2 GetAdjustedLocation(ObstacleDTO obstacleDTO)
    {
        Location bottomLeftCorner = obstacleDTO.location;
        float shiftX = obstacleDTO.width > 1f ? -0.5f : 0f;
        float shiftY = obstacleDTO.height > 1f ? -0.5f : 0f;
        float centerX = bottomLeftCorner.x + obstacleDTO.width / 2f + shiftX;
        float centerY = bottomLeftCorner.y + obstacleDTO.height / 2f + shiftY;
        return new Vector2(centerX, centerY);
    }
}

