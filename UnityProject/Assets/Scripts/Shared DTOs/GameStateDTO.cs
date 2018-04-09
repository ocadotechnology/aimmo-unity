using Players;
using MapFeatures.Pickups;
using MapFeatures.Obstacles;
using MapFeatures.ScoreLocations;

public struct GameStateDTO
{
    public string era;
    public Location southWestCorner;
    public Location northEastCorner;
    public PlayerDTO[] players;
    public PickupDTO[] pickups;
    public ObstacleDTO[] obstacles;
    public ScoreLocationDTO[] scoreLocations;

    public Era EraType
    {
        get
        {
            return EraMethods.EraForString(era);
        }
    }
}

public enum Era
{
    PreHistory,
    LessFlat,
    Future
}

public static class EraMethods
{
    public static Era EraForString(string obstacleType)
    {
        switch (obstacleType.ToLower())
        {
            case "pre_history":
                return Era.PreHistory;
            case "less_flat":
                return Era.LessFlat;
            case "future":
                return Era.Future;
            default:
                return Era.LessFlat;
        }
    }
}