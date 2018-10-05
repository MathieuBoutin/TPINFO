#include <iostream>
#include "A.hpp"

int A::i = 0;

int A::geti()
{
    return i;
}
void A::exec(int x )
{
    i+=x;
}


void A::send(B* b, int x)
{
    b->exec(x);
}


A::~A()
{

}

A::A()
{
    
}