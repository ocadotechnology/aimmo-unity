using System;
using NUnit.Framework;
using UnityEngine;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class VectorExtensionsTests
    {
        [TestCase(1, 1, 1, 1.005f)]
        [TestCase(1, 1, 1.005f, 1)]
        [TestCase(1.009f, 1, 1, 1)]
        [TestCase(1, 1.009f, 1, 1)]
        public void TestLocationsRoughlyEqualPositive(float ax, float ay,
                                                      float bx, float by)
        {
            var a = new Vector3(ax, 0, ay);
            var b = new Vector3(bx, 0, by);
            Assert.IsTrue(a.RoughlyEquals(b, 0.01f));
        }

        [TestCase(1, 1, 1, 1.03f)]
        [TestCase(1, 1, 1.03f, 1)]
        [TestCase(1.010001f, 1, 1, 1)]
        [TestCase(1, 1.010001f, 1, 1)]
        public void TestLocationsRoughlyEqualNegative(float ax, float ay,
                                                      float bx, float by)
        {
            var a = new Vector3(ax, 0, ay);
            var b = new Vector3(bx, 0, by);
            Assert.IsFalse(a.RoughlyEquals(b, 0.01f));
        }

        [TestCase(1, 1, 1, 2, 1)]
        [TestCase(1, 1, 2, 2, 2)]
        [TestCase(1, 1, 4, 2, 10)]
        [TestCase(5, 5, 0, 0, 50)]
        public void TestSqrDistanceToPositive(float ax, float ay,
                                              float bx, float by, float expectedSqrDistance)
        {
            var a = new Vector3(ax, 0, ay);
            var b = new Vector3(bx, 0, by);
            Assert.AreEqual(a.SqrDistanceTo(b), expectedSqrDistance);
        }

        [Test]
        public void TestNorthOf()
        {
            var a = new Vector3(0, 0, 1);
            var b = new Vector3(0, 0, 0);
            Assert.IsTrue(a.NorthOf(b));
        }

        [Test]
        public void TestSouthOf()
        {
            var a = new Vector3(0, 0, 0);
            var b = new Vector3(0, 0, 1);
            Assert.IsTrue(a.SouthOf(b));
        }

        [Test]
        public void TestEastOf()
        {
            var a = new Vector3(0.1f, 0, 0);
            var b = new Vector3(0, 0, 0);
            Assert.IsTrue(a.EastOf(b));
        }

        [Test]
        public void TestWestOf()
        {
            var a = new Vector3(0, 0, 0);
            var b = new Vector3(0.1f, 0, 0);
            Assert.IsTrue(a.WestOf(b));
        }
    }
}
