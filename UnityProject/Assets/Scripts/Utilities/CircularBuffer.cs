using System;
using System.Collections.Generic;
using System.Linq;

namespace Utilities
{
    public class CircularBuffer<T> : IBuffer<T>
    {
        public readonly int Capacity;
        private readonly List<T> Buffer;

        public CircularBuffer(int Capacity)
        {
            this.Capacity = Capacity;
            Buffer = new List<T>();
        }

        public void Enqueue(T item)
        {
            Buffer.Add(item);
            if (Buffer.Count > Capacity) 
            {
                Buffer.RemoveAt(0);
            }
        }

        public T Pop()
        {
            if (!HasNext()) throw new InvalidOperationException("Buffer is empty");
            T item = Buffer.ElementAt(0);
            Buffer.RemoveAt(0);
            return item;
        }

        public bool HasNext()
        {
            return Buffer.Count > 0;
        }
    }
}
