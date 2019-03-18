using System;

namespace MapFeatures.Interactables
{
    [Serializable]
    public struct PickupsDTO
    {
        public InteractableDTO[] interactables;
    }


    [Serializable]
    public struct InteractableDTO : IEquatable<InteractableDTO>
    {
        public string type;
        public Location location;

        public InteractableType InteractableType
        {
            get
            {
                return InteractableTypeMethods.InteractableTypeForString(type);
            }
        }

        public bool Equals(InteractableDTO other)
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

    public enum InteractableType
    {
        Health,
        Invulnerability,
        DamageBoost
    }

    public static class InteractableTypeMethods
    {
        public static InteractableType InteractableTypeForString(string pickupType)
        {
            switch (pickupType.ToLower())
            {
                case "health":
                    return InteractableType.Health;
                case "invulnerability":
                    return InteractableType.Invulnerability;
                case "damage_boost":
                    return InteractableType.DamageBoost;
                default:
                    return InteractableType.Health;
            }
        }
    }
}
