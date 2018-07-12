using System;
namespace Utilities
{
    public class CircularBuffer<T>
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

        public void Add(T i)
        {
            Buffer[WriteIndex] = i;
            WriteIndex = NextIndex(WriteIndex);
        }

        public T Get()
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
