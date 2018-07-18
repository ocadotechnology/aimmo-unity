using System;

namespace Players
{
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
            get
            {
                return OrientationExtensions.OrientationForString(orientation);
            }
        }
    }

    [Serializable]
    public struct PlayersDTO
    {
        public PlayerDTO[] players;
    }

}
