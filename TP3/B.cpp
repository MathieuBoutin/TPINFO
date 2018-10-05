#include <iostream>
#include "B.hpp"

int B::getJ()
{
    return j;
}

int B::j=0;

void B::exec(int x)
{
    j+=x;

}


void B::send(A* a,int x)
{
    
    a->exec(x);

}

B::~B()
{

}

B::B()
{
    
}

