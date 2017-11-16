using UnityEngine;

/* This class manages obstacles, i.e. the walls in the scene.
 */

namespace MapFeatures.Obstacles
{
    public class ObstacleManager : MapFeatureManager<ObstacleDTO>
    {
        public override bool Create(ObstacleDTO dto)
        {
            throw new System.NotImplementedException();
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

        public override bool UpdateFeature(ObstacleDTO dto)
        {
            throw new System.NotImplementedException();
        }
    }
}
