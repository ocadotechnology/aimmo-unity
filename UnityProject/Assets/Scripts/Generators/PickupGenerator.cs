using UnityEngine;
using UnityEditor;
using MapFeatures.Pickups;

public class PickupGenerator
{
    /* As we don't pass ID from the back-end as of now, instead we get the
     * location (xy) and append to the end of a "pickup_type_" string.
     */
    public static GameObject GeneratePickup(GameObject pickupPrefab)
    {
        GameObject pickup = Object.Instantiate(
                                pickupPrefab, 
                                Vector3.zero, 
                                Quaternion.identity) as GameObject;
        pickup.transform.SetParent(GameObject.Find("Pickups").transform, false);

        return pickup;
    }

    public static GameObject GeneratePickup(PickupDTO pickupDTO)
    {
        string resource = "Prefabs/Pickups/pickup_" + pickupDTO.type;
        GameObject pickupPrefab = Resources.Load<GameObject>(resource);

        Debug.Log(resource);
        GameObject pickup = Object.Instantiate(
                                pickupPrefab,
                                new Vector3(pickupDTO.location.x, 0, pickupDTO.location.y),
                                Quaternion.identity) as GameObject;
        pickup.transform.SetParent(GameObject.Find("Pickups").transform, false);

        int hash = pickupDTO.GetHashCode();

        pickup.name = "pickup_" + pickupDTO.type + "_" + pickupDTO.location.x + "_" + pickupDTO.location.y;

        return pickup;            
    }
}
