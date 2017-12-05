using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

/* Still not clear what pickups will do, probably there will be different
 * types, so that will need to be taken care of.
 */

namespace MapFeatures.Pickups
{
    public class PickupManager : MapFeatureManager<PickupDTO>
    {
        PickupDTO[] currentPickups;
        PickupDTO[] pickupsToDelete;
        PickupDTO[] pickupsToCreate;

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

        /* Receives a PickupDTO array and handles it appropriately. */
        public override bool UpdateFeatures(PickupDTO[] dtoArray)
        {
            // Create newly added pickups.
            pickupsToCreate = (PickupDTO[]) dtoArray.Except(currentPickups);
            foreach (PickupDTO pickup in pickupsToCreate)
            {
                Create(pickup);
            }

            // Delete no longer existing pickups.
            pickupsToDelete = (PickupDTO[]) currentPickups.Except(dtoArray);
            foreach (PickupDTO pickup in pickupsToDelete)
            {
                Delete(pickup);
            }
        }
    }
}
