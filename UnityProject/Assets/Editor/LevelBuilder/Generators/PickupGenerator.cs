using UnityEngine;
using UnityEditor;

public class PickupGenerator
{
    public static void GeneratePickup(GameObject pickupPrefab)
    {
        GameObject pickup = Object.Instantiate(
            EditorGUIUtility.GetObjectPickerObject(), 
            Vector3.zero, 
            Quaternion.identity) as GameObject;
        pickup.transform.SetParent(GameObject.Find("Pickups").transform, false);
    }
}
