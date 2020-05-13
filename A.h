#pragma once
class A
{
private:
    int * _values;
    int _size;
public:
    A(int size);
    ~A();
    int getValue(int index);
    bool contains(int value);
};
 
 
// file A.cpp
 
#include "A.h"
 
A::A(int size)
{
    _values = new int[size];
    _size = size;
    //код заполнения массива случайными числами опущен
}
 
A::~A()
{
    delete[] _values;
}
 
int A::getValue(int index)
{
    return _values[index];
}
 
bool A::contains(int value)
{
    for (int i = 0; i < _size; ++i)
        if (_values[i] == value)
            return true;
    return false;
}