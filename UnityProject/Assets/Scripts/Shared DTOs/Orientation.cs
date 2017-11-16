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
}
