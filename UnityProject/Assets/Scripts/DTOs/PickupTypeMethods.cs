
    public static class PickupTypeMethods
    {
        public static PickupType PickupTypeFromString(string pickupType)
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