using NUnit.Framework;
using UnityEngine;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class IntExtensionsTests
    {
        [TestCase(1, 2)]
        [TestCase(4, 3)]
        [TestCase(8, 4)]
        public void TestPositiveModulo(int a, int b)
        {
            Assert.AreEqual(a % b, a.Mod(b));
        }

        [TestCase(-1, 2, 1)]
        [TestCase(-5, 2, 1)]
        [TestCase(-4, 3, 2)]
        [TestCase(-8, 4, 0)]
        public void TestNegativeModulo(int a, int b, expected)
        {
            Assert.AreEqual(expected, a.Mod(b));
        }
    }
}
