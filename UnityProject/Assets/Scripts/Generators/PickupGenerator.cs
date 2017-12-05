using UnityEngine;
using UnityEditor;
using MapFeatures.Pickups;

public class PickupGenerator
{
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
        GameObject pickupPrefab = Resources.Load<GameObject>("Prefabs/Pickups/pickup_" + pickupDTO.type);

        GameObject pickup = Object.Instantiate(
                                pickupPrefab,
                                new Vector3(pickupDTO.location.x, 0, pickupDTO.location.y),
                                Quaternion.identity) as GameObject;
        pickup.transform.SetParent(GameObject.Find("Pickups").transform, false);

        return pickup;            
    }
}
