using UnityEngine;

/* This class manages the score points. If an avatar is in a score point its 
 * score is incremented by one every iteration.
 */

namespace MapFeatures.ScoreLocations
{
    public class ScorePointManager : MapFeatureManager<ScoreLocationDTO>
    {
        public override bool Create(ScoreLocationDTO dto)
        {
            throw new System.NotImplementedException();
        }

        public override bool Delete(ScoreLocationDTO dto)
        {
            throw new System.NotImplementedException();
        }

        public override string MapFeatureId(string id)
        {
            return string.Format("ScoreLocation{0}", id);
        }

        public override string MapFeatureTag()
        {
            return "ScoreLocation";
        }

        public override bool UpdateFeature(ScoreLocationDTO dto)
        {
            throw new System.NotImplementedException();
        }
    }
}
