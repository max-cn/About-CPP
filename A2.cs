using System.Linq;
 
public class A<T>
{
    private T[] _values;
    public A(int size)
    {
        _values = new T[size];
         //��� ���������� ������� ���������� ������� ������
    }
 
    public T this[int index]
    {
        get { return _values[index]; }
    }
 
    public bool Contains(T value)
    {
        return _values.Contains(value);
    }
}