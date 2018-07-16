using System;

public interface IBuffer<T>
{
    T Pop();
    void Enqueue(T a);
}
