#pragma once
template<typename T>
class A
{
private:
    T * _values;
    int _size;
public:
    A(int size);
    ~A();
    T getValue(int index);
    bool contains(T value);
};
 
// file A.cpp
 
#include "A.h"
 
template<typename T>
A<T>::A(int size)
{
    _values = new T[size];
    _size = size;
    //код заполнения массива случайными числами опущен
}
 
template<typename T>
A<T>::~A()
{
    delete[] _values;
}
 
template<typename T>
T A<T>::getValue(int index)
{
    return _values[index];
}
 
template<typename T>
bool A<T>::contains(T value)
{
    for (int i = 0; i < _size; ++i)
        if (_values[i] == value)
            return true;
    return false;
}