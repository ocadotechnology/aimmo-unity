using System;

[Serializable]
public struct PlayerDTO
{
    public int id;
    public int score;
    public int health;
    public Location location;
    public string orientation;

    public Orientation orientationType
    {
        get {
            return OrientationMethods.Orientation(orientation);
        }
    }
}

[Serializable]
public struct PlayersDTO {
    public PlayerDTO[] players;
}
