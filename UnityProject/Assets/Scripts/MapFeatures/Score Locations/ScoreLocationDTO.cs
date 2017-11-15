using System;

namespace MapFeatures.ScoreLocations
{
    [Serializable]
    public struct ScoreLocationsDTO
    {
        public ScoreLocationDTO[] scoreLocations;
    }

    [Serializable]
    public struct ScoreLocationDTO
    {
        public Location location;
    }
   
}