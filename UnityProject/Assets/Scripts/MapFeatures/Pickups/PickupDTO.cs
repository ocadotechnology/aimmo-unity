using System;

namespace MapFeatures.Pickups
{
    [Serializable]
    public struct PickupsDTO
    {
        public PickupDTO[] pickups;
    }


    [Serializable]
    public struct PickupDTO : IEquatable<PickupDTO>
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

        public bool Equals(PickupDTO other)
        {
            if (type == other.type && location.Equals(other.location))
                return true;

            return false;
        }

        public override int GetHashCode()
        {
            int hash = 17;
            hash = hash * 23 + type.GetHashCode();
            hash = hash * 23 + location.x.GetHashCode();
            hash = hash * 23 + location.y.GetHashCode();
            return hash;
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
