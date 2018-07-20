using System;

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

        public void Enqueue(T item)
        {
            Buffer[WriteIndex] = item;
            int Index = NextIndex(WriteIndex);
            if (Index == WriteIndex)
            {
                ReadIndex = NextIndex(ReadIndex);
            }
            WriteIndex = Index;
        }

        public T Pop()
        {
            if (!HasNext()) throw new InvalidOperationException("Buffer is empty");
            T item = Buffer[ReadIndex];

            if (ResetToDefault)
                Buffer[ReadIndex] = default(T);

            ReadIndex = NextIndex(ReadIndex);
            return item;
        }

        public bool HasNext()
        {
            return !Buffer[ReadIndex].Equals(default(T));
        }

        private int NextIndex(int Index)
        {
            return (Index + 1) % Length;
        }
    }
}
