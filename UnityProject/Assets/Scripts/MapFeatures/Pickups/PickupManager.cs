using UnityEngine;

/* Still not clear what pickups will do, probably there will be different
 * types, so that will need to be taken care of.
 */

namespace MapFeatures.Pickups
{
    public class PickupManager : MapFeatureManager<PickupDTO>
    {
        public override bool Create(PickupDTO dto)
        {
            throw new System.NotImplementedException();
        }

        public override bool Delete(PickupDTO dto)
        {
            throw new System.NotImplementedException();
        }

        public override string MapFeatureId(string id)
        {
            return string.Format("Pickup{0}", id);
        }

        public override string MapFeatureTag()
        {
            return "Pickup";
        }

        public override bool UpdateFeature(PickupDTO dto)
        {
            throw new System.NotImplementedException();
        }
    }
}
