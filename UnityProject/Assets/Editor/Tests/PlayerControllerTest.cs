using System;
using UnityEngine;
using NUnit.Framework;
using Players;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class PlayerControllerTest
    {
        public class PlayerControllerWrapper
        {
            private GameObject context = new GameObject();
            public PlayerController playerController;

            public PlayerControllerWrapper(float x, float y)
            {
                IsometricPosition position = context.AddComponent<IsometricPosition>();
                position.Set(x, y);

                playerController = context.AddComponent<PlayerController>();
            }

            public Vector2 GetPosition()
            {
                IsometricPosition position = context.GetComponent<IsometricPosition>();

                return position.Vector();
            }

            public void SetNextPosition(float x, float y)
            {
                PlayerDTO playerData = new PlayerDTO();
                playerData.location = new Location((int)x, (int)y);
                playerController.SetNextState(playerData);
            }

            public void PassTime(float time)
            {
                var prop = playerController.GetType().GetField(
                    "startTime",
                    System.Reflection.BindingFlags.NonPublic |
                    System.Reflection.BindingFlags.Instance);
                prop.SetValue(playerController, Time.time - time);
            }
        }

        [TestCase(1.0f, 2.0f, 2.0f, 3.0f)]
        [TestCase(0.0f, 0.0f, 10.0f, 10.0f)]
        [TestCase(1.0f, 1.0f, 1.0f, 1.0f)]
        [TestCase(0.0f, 0.0f, 0.0f, 10.0f)]
        public void TestPlayerMovesToNextState(float x, float y, float x2, float y2)
        {
            PlayerControllerWrapper wrapper = new PlayerControllerWrapper(x, y);

            wrapper.SetNextPosition(x2, y2);
            wrapper.PassTime(1.0f);

            try { wrapper.playerController.Update(); }
            catch (Exception) { }

            Assert.AreEqual(wrapper.GetPosition(), new Vector2(x2, y2));
        }

        [TestCase(1.0f, 2.0f, 2.0f, 3.0f)]
        [TestCase(0.0f, 0.0f, 10.0f, 10.0f)]
        [TestCase(0.0f, 0.0f, 0.0f, 10.0f)]
        public void TestPlayerLerps(float x, float y, float x2, float y2)
        {
            PlayerControllerWrapper wrapper = new PlayerControllerWrapper(x, y);

            wrapper.SetNextPosition(x2, y2);
            wrapper.PassTime(0.05f);

            try { wrapper.playerController.Update(); }
            catch (Exception) { }

            Assert.AreNotEqual(wrapper.GetPosition(), new Vector2(x, y));
            Assert.AreNotEqual(wrapper.GetPosition(), new Vector2(x2, y2));
        }

    }
}
