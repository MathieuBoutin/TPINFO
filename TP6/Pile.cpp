#include "Pile.hpp"
#include <stdexcept>
#include <exception>
using namespace std;
Pile::Pile()
{
    setTaille(5);
    tab = new int[taille];
    setElmt(0);
}
Pile::Pile(int i)
{
    if (i>0)
    {
        setTaille(i);
        tab = new int[taille];
        setElmt(0);
    }
    else
    {
        __throw_invalid_argument("toto");
    }
}

Pile::~Pile()
{
    delete [] tab;
}

int Pile::getTaille()
{
    return taille;
}

void Pile::setTaille(int x)
{
    taille = x;
}

int Pile::getElmt()
{
    return elmt;
}
bool Pile::empty()
{
    return(this->getElmt()==0); 
}

int Pile::size()
{
    return elmt;
}

void Pile::setElmt(int x)
{
    elmt = x;
}
void Pile::push(int x)
{
    if (this->getElmt()< this->getTaille()) 
    {
        
        tab[this->getElmt()] = x;
        elmt++;
    }
    else
    {
        __throw_invalid_argument("toto");
        
    }

    
}

int Pile::top()
{
    
    return tab[this->getElmt()-1];
}

void  Pile::pop()
{
    if (!this->empty())
    {
        elmt--;
        tab[this->getElmt()] = 0;
        
    }
    else
    {
        __throw_invalid_argument("toto");       
    }
   
    
}