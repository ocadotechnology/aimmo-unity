using UnityEngine;

/* This class manages obstacles, i.e. the walls in the scene.
 */

namespace MapFeatures.Obstacles
{
    public class ObstacleManager : MapFeatureManager<ObstacleDTO>
    {
        public override bool Create(ObstacleDTO dto)
        {
            GameObject obstacle = ObstacleGenerator.GenerateObstacle(dto, GameObject.Find("Obstacles").transform);

            if (obstacle == null)
            {
                Debug.LogError("Generated obstacle is null!");
                return false;
            }

            return true;
        }

        public override bool Delete(ObstacleDTO dto)
        {
            throw new System.NotImplementedException();
        }

        public override string MapFeatureId(string id)
        {
            return string.Format("Obstacle{0}", id);
        }

        public override string MapFeatureTag()
        {
            return "Obstacle";
        }

        public override bool UpdateFeatures(ObstacleDTO[] dtoArray)
        {
            CreateObstacles(dtoArray);

            return true;
        }

        private bool CreateObstacles(ObstacleDTO[] dtoArray)
        {
            foreach (ObstacleDTO obstacle in dtoArray)
            {
                Create(obstacle);
            }

            return true;
        }
    }
}
