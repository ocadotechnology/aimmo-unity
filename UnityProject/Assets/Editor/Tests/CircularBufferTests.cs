using System;
using NUnit.Framework;
using UnityEngine;
using Utilities;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class CircularBufferTests
    {
        IBuffer<GameStateDTO> buffer;

        [SetUp]
        public void SetUpBuffer()
        {
            buffer = new CircularBuffer<GameStateDTO>(2, true);
        }


        [Test]
        public void TestPop()
        {
            var a = new GameStateDTO();
            Assert.IsFalse(buffer.HasNext());
            buffer.Enqueue(a);
            Assert.IsTrue(buffer.HasNext());
            Assert.AreEqual(buffer.Pop(), a);
        }

        [Test]
        public void TestPopWithTwoEnqueues()
        {
            var a = new GameStateDTO() { northEastCorner = new Location(0, 0) };
            var b = new GameStateDTO() { northEastCorner = new Location(1, 0) };
            buffer.Enqueue(a);
            buffer.Enqueue(b);
            Assert.AreEqual(buffer.Pop(), a);
            Assert.AreEqual(buffer.Pop(), b);
        }

        [Test]
        public void TestPopWithThreeEnqueues()
        {
            var a = new GameStateDTO() { northEastCorner = new Location(0, 0) };
            var b = new GameStateDTO() { northEastCorner = new Location(1, 0) };
            var c = new GameStateDTO() { northEastCorner = new Location(2, 0) };
            buffer.Enqueue(a);
            buffer.Enqueue(b);
            buffer.Enqueue(c);
            Assert.AreEqual(buffer.Pop(), b);
            Assert.AreEqual(buffer.Pop(), c);
            Assert.Throws<InvalidOperationException>(() => buffer.Pop());
        }

        [Test]
        public void TestPopsWithEnqueues()
        {
            var a = new GameStateDTO() { northEastCorner = new Location(0, 0) };
            var b = new GameStateDTO() { northEastCorner = new Location(1, 0) };
            var c = new GameStateDTO() { northEastCorner = new Location(2, 0) };
            var d = new GameStateDTO() { northEastCorner = new Location(3, 0) };
            var e = new GameStateDTO() { northEastCorner = new Location(4, 0) };
            buffer.Enqueue(a);
            Assert.AreEqual(buffer.Pop(), a);
            buffer.Enqueue(b);
            buffer.Enqueue(c);
            buffer.Enqueue(d);
            Assert.AreEqual(buffer.Pop(), c);
            Assert.AreEqual(buffer.Pop(), d);
            buffer.Enqueue(e);
            Assert.AreEqual(buffer.Pop(), e);
            Assert.Throws<InvalidOperationException>(() => buffer.Pop());
        }
    }
}
