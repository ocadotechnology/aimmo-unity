using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

/* Still not clear what interactables will do, probably there will be different
 * types, so that will need to be taken care of.
 */

namespace MapFeatures.Interactables
{
    public class InteractableManager : MapFeatureManager<InteractableDTO>
    {
        List<InteractableDTO> currentInteractables = new List<InteractableDTO>();
        List<InteractableDTO> interactablesToDelete = new List<InteractableDTO>();
        List<InteractableDTO> interactablesToCreate = new List<InteractableDTO>();

        public override bool Create(InteractableDTO dto)
        {
            // TODO: some checking that this location is free to place on.
            GameObject interactable = InteractableGenerator.GenerateInteractable(dto);

            // Update currentinteractables for next UpdateFeatures call.
            if (interactable == null)
            {
                Debug.Log("Generated interactable is null!");
                return false;
            }

            currentInteractables.Add(dto);

            return true;
        }

        public override bool Delete(InteractableDTO dto)
        {
            if (currentInteractables.Contains(dto))
            {
                if (!currentInteractables.Remove(dto))
                {
                    return false;
                }

                GameObject objectToDestroy = GameObject.Find("interactable_" + dto.type + "_" + dto.location.x + "_" + dto.location.y);

                Destroy(objectToDestroy);
                return true;
            }

            Debug.Log("dto not found in currentInteractables!");
            return false;
        }

        public override string MapFeatureId(string id)
        {
            return string.Format("Interactable{0}", id);
        }

        public override string MapFeatureTag()
        {
            return "Interactable";
        }

        /* Receives a InteractableDTO array and handles it appropriately. */
        public override bool UpdateFeatures(InteractableDTO[] dtoArray)
        {
            CreateInteractables(dtoArray);
            DeleteInteractables(dtoArray);

            return true;
        }

        private bool CreateInteractables(InteractableDTO[] dtoArray)
        {
            // We need a list for mutable sizing of the data structure.
            List<InteractableDTO> newInteractables = dtoArray.OfType<InteractableDTO>().ToList();

            // Clear old contents.
            interactablesToCreate.Clear();

            // Find elements that exist in provided array that doesn't exist
            // in current world interactables.
            interactablesToCreate = (List<InteractableDTO>) newInteractables.Except(currentInteractables).ToList();

            foreach (InteractableDTO interactable in interactablesToCreate)
            {
                Create(interactable);
            }

            return true;
        }

        private bool DeleteInteractables(InteractableDTO[] dtoArray)
        {
            // We need a list for mutable sizing of the data structure.
            List<InteractableDTO> newInteractables = dtoArray.OfType<InteractableDTO>().ToList();

            // Clear old contents.
            interactablesToDelete.Clear();

            // We find elements that exist in currentInteractables but not dtoArray 
            // (ie. newInteractables).
            interactablesToDelete = (List<InteractableDTO>)  currentInteractables.Except(newInteractables).ToList();

            foreach (InteractableDTO interactable in interactablesToDelete)
            {
                Delete(interactable);
            }

            return true;
        }
    }
}
