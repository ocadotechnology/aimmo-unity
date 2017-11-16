using System;

namespace MapFeatures.Pickups
{
    [Serializable]
    public struct PickupsDTO
    {
        public PickupDTO[] pickups;
    }


    [Serializable]
    public struct PickupDTO
    {
        public string type;
        public Location location;

        public PickupType PickupType
        {
            get
            {
                return PickupTypeMethods.PickupTypeForString(type);
            }
        }
    }

    public enum PickupType
    {
        Health,
        Invulnerability,
        DamageBoost
    }

    public static class PickupTypeMethods
    {
        public static PickupType PickupTypeForString(string pickupType)
        {
            switch (pickupType.ToLower())
            {
                case "health":
                    return PickupType.Health;
                case "invulnerability":
                    return PickupType.Invulnerability;
                case "damage_boost":
                    return PickupType.DamageBoost;
                default:
                    return PickupType.Health;
            }
        }
    }
}
