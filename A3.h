#pragma once
template<typename T>
class A
{
private:
    T * _values;
    int _size;
public:
    A(int size)
    {
        _values = new T[size];
        _size = size;
    //код заполнения массива случайными числами опущен
    }
 
    ~A()
    {
        delete[] _values;
    }
 
    T getValue(int index)
    {
        return _values[index];
    }
 
    bool contains(T value)
    {
        for (int i = 0; i < _size; ++i)
            if (_values[i] == value)
                return true;
        return false;
    }
};