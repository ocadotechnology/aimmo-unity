using System;

namespace MapFeatures.Interactables
{
    [Serializable]
    public struct InteractablesDTO
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
        DamageBoost,
        Score
    }

    public static class InteractableTypeMethods
    {
        public static InteractableType InteractableTypeForString(string interactableType)
        {
            switch (interactableType.ToLower())
            {
                case "health":
                    return InteractableType.Health;
                case "invulnerability":
                    return InteractableType.Invulnerability;
                case "damage_boost":
                    return InteractableType.DamageBoost;
                case "score":
                    return InteractableType.Score;
                default:
                    return InteractableType.Health;
            }
        }
    }
}
