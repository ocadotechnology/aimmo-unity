using System.Collections;
using System.Collections.Generic;

namespace Utilities
{
    public class CircularBuffer<T> : IBuffer<T>
    {
        public readonly int Length;
        private T[] Buffer;
        private int WriteIndex, ReadIndex = 0;
        private bool ResetToDefault;

        public CircularBuffer(int Length, bool ResetToDefault = false)
        {
            this.Length = Length;
            Buffer = new T[Length];
            this.ResetToDefault = ResetToDefault;
        }

        public void Enqueue(T a)
        {
            Buffer[WriteIndex] = a;
            int Index = NextIndex(WriteIndex);
            if (Index == WriteIndex)
            {
                ReadIndex = NextIndex(ReadIndex);
            }
            WriteIndex = Index;
        }

        public T Pop()
        {
            T item = Buffer[ReadIndex];

            if (ResetToDefault)
                Buffer[ReadIndex] = default(T);

            ReadIndex = NextIndex(ReadIndex);
            return item;
        }

        private int NextIndex(int Index)
        {
            return (Index + 1) % Length;
        }
    }
}
