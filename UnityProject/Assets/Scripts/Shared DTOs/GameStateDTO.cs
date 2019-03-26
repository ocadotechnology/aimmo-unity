using Players;
using MapFeatures.Interactables;
using MapFeatures.Obstacles;

public struct GameStateDTO
{
    public string era;
    public Location southWestCorner;
    public Location northEastCorner;
    public PlayerDTO[] players;
    public InteractableDTO[] interactables;
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
