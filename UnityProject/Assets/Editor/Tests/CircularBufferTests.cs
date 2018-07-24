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
            var a = new GameStateDTO();
            var b = new GameStateDTO();
            buffer.Enqueue(a);
            buffer.Enqueue(b);
            Assert.AreEqual(buffer.Pop(), b);
            Assert.AreEqual(buffer.Pop(), a);
        }

        [Test]
        public void TestPopWithThreeEnqueues()
        {
            var a = new GameStateDTO();
            var b = new GameStateDTO();
            var c = new GameStateDTO();
            buffer.Enqueue(a);
            buffer.Enqueue(b);
            buffer.Enqueue(c);
            Assert.AreEqual(buffer.Pop(), c);
            Assert.AreEqual(buffer.Pop(), b);
            Assert.AreEqual(buffer.Pop(), default(char));
        }

    }
}
