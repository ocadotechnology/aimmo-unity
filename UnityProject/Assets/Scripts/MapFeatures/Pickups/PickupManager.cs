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
        List<PickupDTO> currentPickups = new List<PickupDTO>();
        List<PickupDTO> pickupsToDelete = new List<PickupDTO>();
        List<PickupDTO> pickupsToCreate = new List<PickupDTO>();

        public override bool Create(PickupDTO dto)
        {
            // TODO: some checking that this location is free to place on.
            GameObject pickup = PickupGenerator.GeneratePickup(dto);

            // Update currentPickups for next UpdateFeatures call.
            if (pickup == null)
            {
                Debug.Log("Generated pickup is null!");
                return false;
            }

            currentPickups.Add(dto);

            return true;
        }

        public override bool Delete(PickupDTO dto)
        {
            if (currentPickups.Contains(dto))
            {
                currentPickups.Remove(dto);
                return true;
            }

            Debug.Log("dto not found in currentPickups!");
            return false;
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
            CreatePickups(dtoArray);
            DeletePickups(dtoArray);

            return true;
        }

        private bool CreatePickups(PickupDTO[] dtoArray)
        {
            // We need a list for mutable sizing of the data structure.
            List<PickupDTO> newPickups = dtoArray.OfType<PickupDTO>().ToList();

            // Clear old contents.
            pickupsToCreate.Clear();

            // Find elements that exist in provided array that doesn't exist
            // in current world pickups.
            pickupsToCreate = (List<PickupDTO>) newPickups.Except(currentPickups).ToList();

            foreach (PickupDTO pickup in pickupsToCreate)
            {
                Create(pickup);
            }

            return true;
        }

        private bool DeletePickups(PickupDTO[] dtoArray)
        {
            // We need a list for mutable sizing of the data structure.
            List<PickupDTO> newPickups = dtoArray.OfType<PickupDTO>().ToList();

            // Clear old contents.
            pickupsToDelete.Clear();

            // We find elements that exist in currentPickups but not dtoArray 
            // (ie. newPickups).
            pickupsToCreate = (List<PickupDTO>)  currentPickups.Except(newPickups).ToList();

            foreach (PickupDTO pickup in pickupsToDelete)
            {
                Delete(pickup);
            }


            return true;
        }
    }
}
