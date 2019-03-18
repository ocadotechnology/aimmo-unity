using Players;
using MapFeatures.Interactable;
using MapFeatures.Obstacles;
using MapFeatures.ScoreLocations;

public struct GameStateDTO
{
    public string era;
    public Location southWestCorner;
    public Location northEastCorner;
    public PlayerDTO[] players;
    public InteractableDTO[] interactables;
    public ScoreLocationDTO[] scoreLocations;
    public ObstacleDTO[] obstacles;

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
            case "future":
                return Era.Future;
            default:
                return Era.Future;
        }
    }
}
