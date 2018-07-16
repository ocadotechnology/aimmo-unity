using System;
using UnityEngine;

public static class VectorExtensions
{
    public const float RoughUnitDistanceSqr = 1.01f * 1.01f;
    public const float Epsilon = 0.01f;

    public static bool RoughlyEquals(this Vector3 a, Vector3 b, float epsilon = Epsilon)
    {
        return RoughlyEquals(a.x, b.x, epsilon) && RoughlyEquals(a.z, b.z, epsilon);
    }

    public static float SqrDistanceTo(this Vector3 a, Vector3 b)
    {
        return (float)(Math.Pow(a.x - b.x, 2) + Math.Pow(a.z - b.z, 2));
    }

    public static bool EastOf(this Vector3 a, Vector3 b)
    {
        return a.x - b.x > Epsilon;
    }

    public static bool WestOf(this Vector3 a, Vector3 b)
    {
        return b.x - a.x > Epsilon;
    }
    public static bool NorthOf(this Vector3 a, Vector3 b)
    {
        return a.z - b.z > Epsilon;
    }
    public static bool SouthOf(this Vector3 a, Vector3 b)
    {
        return b.x - a.z > Epsilon;
    }

    private static bool RoughlyEquals(float a, float b, float epsilon)
    {
        return Math.Abs(a - b) < epsilon;
    }
}
