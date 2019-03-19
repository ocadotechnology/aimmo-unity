using UnityEngine;
using MapFeatures.Interactables;

public class InteractableGenerator
{
    /* As we don't pass ID from the back-end as of now, instead we get the
     * location (xy) and append to the end of a "pickup_type_" string.
     */
    public static GameObject GenerateInteractable(GameObject interactablePrefab)
    {
        GameObject interactable = Object.Instantiate(
                                interactablePrefab, 
                                Vector3.zero, 
                                Quaternion.identity) as GameObject;
        interactable.transform.SetParent(GameObject.Find("Interactables").transform, false);

        return interactable;
    }

    public static GameObject GenerateInteractable(InteractableDTO InteractableDTO)
    {
        string resource = "Prefabs/Interactables/interactable_" + InteractableDTO.type;
        GameObject interactablePrefab = Resources.Load<GameObject>(resource);



        GameObject interactable = Object.Instantiate(
                                interactablePrefab,
                                new Vector3(InteractableDTO.location.x, 0, InteractableDTO.location.y),
                                Quaternion.identity) as GameObject;
        interactable.transform.SetParent(GameObject.Find("Interactables").transform, false);

        interactable.name = "interactable_" + InteractableDTO.type + "_" + InteractableDTO.location.x + "_" + InteractableDTO.location.y;

        return interactable;            
    }
}
