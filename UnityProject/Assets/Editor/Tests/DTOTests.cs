using System;
using UnityEngine;
using NUnit.Framework;

namespace AIMMOUnityTest 
{
    [TestFixture]
    internal class DTOTests
    {
        [Test]
        public void TestPlayerDTOSerialisation()
        {
            string playerJSON = @" {
                ""players"": [
                    {
                        ""id"": 1,
                        ""score"": 10,
                        ""health"": 5,
                        ""location"": {
                            ""x"": 2,
                            ""y"": 2
                        },
                        ""orientation"": ""East""
                    },
                    {
                        ""id"": 1,
                        ""score"": 11,
                        ""health"": 8,
                        ""location"": {
                            ""x"": 2,
                            ""y"": 1
                        },
                        ""orientation"": ""South""
                    }
                ]
            }";
            PlayersDTO playersDTO = JsonUtility.FromJson<PlayersDTO>(playerJSON);
            Assert.AreEqual(2, playersDTO.players.Length);
            PlayerDTO player = playersDTO.players[0];
            Assert.IsNotNull(player);
            Assert.AreEqual(1, player.id);
            Assert.AreEqual(10, player.score);
            Assert.AreEqual(5, player.health);
            Assert.AreEqual(new Location(2, 2), player.location);
            Assert.AreEqual(Orientation.East, player.orientationType);
        }

        [Test]
        public void TestPickupDTOSerialisation()
        {
            string pickupJSON = @" {
                ""pickups"": [
                    {
                        ""type"": ""Invulnerability"",
                        ""location"": {
                            ""x"": 1,
                            ""y"": 3
                        } 
                    },
                    {
                        ""type"": ""health"",
                        ""location"": {
                            ""x"": -2,
                            ""y"": 9
                        } 
                    }
                ]
            }";

            PickupsDTO pickupsDTO = JsonUtility.FromJson<PickupsDTO>(pickupJSON);
            Assert.AreEqual(2, pickupsDTO.pickups.Length);
            PickupDTO pickupDTO = pickupsDTO.pickups[0];
            Assert.AreEqual(new Location(1, 3), pickupDTO.location);
            Assert.AreEqual(PickupType.Invulnerability, pickupDTO.pickupType);
        }

        [Test]
        public void TestScoreDTOSerialisation()
        {
            string scoreLocationJSON = @" {
                ""scoreLocations"": [
                    {
                        ""location"": {
                            ""x"": -2,
                            ""y"": -9
                        } 
                    },
                    {
                        ""location"": {
                            ""x"": -2,
                            ""y"": 1
                        } 
                    },
                    {
                        ""location"": {
                            ""x"": -2,
                            ""y"": 4
                        } 
                    }
                ]
            } ";

            ScoreLocationsDTO scoreLocationsDTO = JsonUtility.FromJson<ScoreLocationsDTO>(scoreLocationJSON);
            Assert.AreEqual(3, scoreLocationsDTO.scoreLocations.Length);
            ScoreLocationDTO scoreLocationDTO = scoreLocationsDTO.scoreLocations[0];
            Assert.AreEqual(new Location(-2, -9), scoreLocationDTO.location);
        }

        [Test]
        public void TestObstacleDTOSerialisation()
        {
            string obstacleJSON = @" {
                ""obstacles"": [
                    {
                        ""location"": {
                            ""x"": 0,
                            ""y"": 1
                        },
                        ""width"": 2,
                        ""height"": 1,
                        ""type"": ""van"",
                        ""orientation"": ""east""
                    },
                    {
                        ""location"": {
                            ""x"": 9,
                            ""y"": 1
                        },
                        ""width"": 20,
                        ""height"": 2,
                        ""type"": ""wall"",
                        ""orientation"": ""west""
                    }
                ]
            } ";

            ObstaclesDTO obstaclesDTO = JsonUtility.FromJson<ObstaclesDTO>(obstacleJSON);
            Assert.AreEqual(2, obstaclesDTO.obstacles.Length);

            ObstacleDTO obstacleDTO = obstaclesDTO.obstacles[0];
            Assert.AreEqual(new Location(0, 1), obstacleDTO.location);
            Assert.AreEqual(2, obstacleDTO.width);
            Assert.AreEqual(1, obstacleDTO.height);
            Assert.AreEqual(ObstacleType.Van, obstacleDTO.ObstacleType);
            Assert.AreEqual(Orientation.East, obstacleDTO.OrientationType);
        }
    }
}