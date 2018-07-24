using System;

namespace Utilities
{
    public class CircularBuffer<T> : IBuffer<T>
    {
        public readonly int Length;
        private T[] Buffer;
        private int WriteIndex, ReadIndex = 0;
        private bool ResetToDefault;
        private bool moveAlong = false;

        public CircularBuffer(int Length, bool ResetToDefault = false)
        {
            this.Length = Length;
            Buffer = new T[Length];
            this.ResetToDefault = ResetToDefault;
        }

        public void Enqueue(T item)
        {
            Buffer[WriteIndex] = item;

            if (moveAlong)
            {
                ReadIndex = NextIndex(ReadIndex);
                moveAlong = false;
            }
            WriteIndex = NextIndex(WriteIndex);
            if (WriteIndex == ReadIndex)
            {
                moveAlong = true;
            }
        }

        public T Pop()
        {
            if (!HasNext()) throw new InvalidOperationException("Buffer is empty");
            T item = Buffer[ReadIndex];

            if (ResetToDefault)
                Buffer[ReadIndex] = default(T);
            
            var Index = NextIndex(ReadIndex);
            if (!EmptyAtIndex(Index)) 
            {
                ReadIndex = Index;
            }
            WriteIndex = PrevIndex(WriteIndex);
            return item;
        }

        public bool HasNext()
        {
            return !EmptyAtIndex(ReadIndex);
        }

        private bool EmptyAtIndex(int Index)
        {
            return Buffer[Index] == null || Buffer[Index].Equals(default(T));
        }

        private int NextIndex(int Index)
        {
            return (Index + 1) % Length;
        }

        private int PrevIndex(int Index)
        {
            return (Index - 1).Mod(Length);
        }
    }
}
