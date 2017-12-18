using System;
using UnityEngine;

[Serializable]
public enum Orientation
{
    North,
    East,
    South,
    West
}

public static class OrientationMethods
{
    private static Vector3 vectorNorth = new Vector3(0, 0, 0);
    private static Vector3 vectorSouth = new Vector3(0, 180, 0);
    private static Vector3 vectorWest = new Vector3(0, -90, 0);
    private static Vector3 vectorEast = new Vector3(0, 90, 0);

    public static Orientation OrientationForString(string orientation)
    {
        switch (orientation.ToLower())
        {
            case "north":
                return Orientation.North;
            case "east":
                return Orientation.East;
            case "south":
                return Orientation.South;
            case "west":
                return Orientation.West;
            default:
                return Orientation.North;
        }
    }

    public static Vector3 OrientationForVector(Orientation orientation)
    {
        switch (orientation)
        {
            case Orientation.North:
                return vectorNorth;
            case Orientation.South:
                return vectorSouth;
            case Orientation.East:
                return vectorEast;
            case Orientation.West:
                return vectorWest;
            default:
                return vectorNorth;
        }
    }
}
