using System;

[Serializable]
public struct Location: IEquatable<Location> {
    public int x;
    public int y;

    public Location(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public bool Equals(Location other)
    {
        return x == other.x && y == other.y;
    }
}
