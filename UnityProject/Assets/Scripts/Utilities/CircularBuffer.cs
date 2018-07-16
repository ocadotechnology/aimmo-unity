using System.Collections;
using System.Collections.Generic;

namespace Utilities
{
    public class CircularBuffer<T> : IEnumerable<T>
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
            int Index = NextIndex(WriteIndex);
            if (Index == WriteIndex)
            {
                ReadIndex = NextIndex(ReadIndex);
            }
            WriteIndex = Index;
        }

        public T Get()
        {
            T item = Buffer[ReadIndex];

            if (ResetToDefault)
                Buffer[ReadIndex] = default(T);

            ReadIndex = NextIndex(ReadIndex);
            return item;
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }

        public IEnumerator<T> GetEnumerator()
        {
            for (int i = 0; i < Length; i++)
                yield return Get();
        }

        private int NextIndex(int Index)
        {
            return (Index + 1) % Length;
        }
    }
}
