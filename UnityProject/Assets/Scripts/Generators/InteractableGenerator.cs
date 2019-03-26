using UnityEngine;
using MapFeatures.Interactables;

public class InteractableGenerator
{
    /* As we don't pass ID from the back-end as of now, instead we get the
     * location (xy) and append to the end of a "interactable_type_" string.
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

    public static GameObject GenerateInteractable(InteractableDTO interactableDTO)
    {
        string resource = "Prefabs/Interactables/interactable_" + interactableDTO.type;
        GameObject interactablePrefab = Resources.Load<GameObject>(resource);



        GameObject interactable = Object.Instantiate(
                                interactablePrefab,
                                new Vector3(interactableDTO.location.x, 0, interactableDTO.location.y),
                                Quaternion.identity) as GameObject;
        interactable.transform.SetParent(GameObject.Find("Interactables").transform, false);

        interactable.name = "interactable_" + interactableDTO.type + "_" + interactableDTO.location.x + "_" + interactableDTO.location.y;

        return interactable;            
    }
}
