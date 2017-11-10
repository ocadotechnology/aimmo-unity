using System;

[Serializable]
public struct PickupDTO
{
    public string type;
    public Location location;

    public PickupType pickupType {
        get {
            return PickupTypeMethods.PickupTypeFromString(type);
        }
    }
}
