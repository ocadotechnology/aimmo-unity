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

    public override string ToString()
    {
        return string.Format("[Location x:{0} y:{1}]", x, y);
    }
}
