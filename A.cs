using System.Linq;
 
public class A
{
    private int[] _values;
    public A(int size)
    {
        _values = new int[size];
         //��� ���������� ������� ���������� ������� ������
    }
 
    public int this[int index]
    {
        get { return _values[index]; }
    }
 
    public bool Contains(int value)
    {
        return _values.Contains(value);
    }
}