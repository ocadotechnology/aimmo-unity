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
    public static Orientation Orientation(string orientation) {
        switch (orientation.ToLower()) 
        {
            case "north":
                return global::Orientation.North;
            case "east":
                return global::Orientation.East;
            case "south":
                return global::Orientation.South;
            case "west":
                return global::Orientation.West;
            default:
                return global::Orientation.North;
        }
    }
}
