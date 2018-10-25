#include <iostream>

using namespace std;


template <typename T>

T maximum(const T& a, const T& b)
{
    return ((a>b)? a: b);
}



template <typename T, typename S>

S maximum(const T& a, const S& b)
{
    return ((a>b)? a: b);
}