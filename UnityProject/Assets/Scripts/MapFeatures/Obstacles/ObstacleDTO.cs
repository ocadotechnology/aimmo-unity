using System;

namespace MapFeatures.Obstacles
{

    [Serializable]
    public struct ObstaclesDTO
    {
        public ObstacleDTO[] obstacles;
    }

    [Serializable]
    public struct ObstacleDTO
    {
        public Location location;
        public int width;
        public int height;
        public string type;
        public ObstacleType ObstacleType
        {
            get
            {
                return ObstacleTypeMethods.ObstacleTypeForString(type);
            }
        }
        public string orientation;
        public Orientation OrientationType
        {
            get
            {
                return OrientationExtensions.OrientationForString(orientation);
            }
        }
    }

    public enum ObstacleType
    {
        Van,
        Wall
    }

    public static class ObstacleTypeMethods
    {
        public static ObstacleType ObstacleTypeForString(string obstacleType)
        {
            switch (obstacleType.ToLower())
            {
                case "van":
                    return ObstacleType.Van;
                case "wall":
                    return ObstacleType.Wall;
                default:
                    return ObstacleType.Wall;
            }
        }
    }
}
