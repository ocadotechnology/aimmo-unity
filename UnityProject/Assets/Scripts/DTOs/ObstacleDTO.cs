using System;

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
            return ObstacleTypeMethods.ObstacleType(type);
        }
    }
    public string orientation;
    public Orientation OrientationType
    {
        get
        {
            return OrientationMethods.Orientation(orientation);
        }
    }
}

public enum ObstacleType {
    Van,
    Wall
}

public static class ObstacleTypeMethods
{
    public static ObstacleType ObstacleType(string obstacleType) {
        switch (obstacleType.ToLower())
        {
            case "van":
                return global::ObstacleType.Van;
            case "wall":
                return global::ObstacleType.Wall;
            default:
                return global::ObstacleType.Wall;
        }
    }
}