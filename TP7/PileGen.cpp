// #include "PileGen.hpp"
#include <stdexcept>
#include <exception>
#include <iostream>
using namespace std;

template <typename T>
PileGen<T>::PileGen()
{
    setTaille(5);
    tab = new T[taille];
    setElmt(0);
}

template <typename T>
PileGen<T>::PileGen(int i)
{
    if (i>0)
    {
        setTaille(i);
        tab = new T[taille];
        setElmt(0);
    }
    else
    {
        __throw_invalid_argument("toto");
    }
}
template <typename T>
PileGen<T>::~PileGen()
{
    delete [] tab;
}
template <typename T>
int PileGen<T>::getTaille()
{
    return taille;
}
template <typename T>
void PileGen<T>::setTaille(int x)
{
    taille = x;
}
template <typename T>
int PileGen<T>::getElmt()
{
    return elmt;
}
template <typename T>
bool PileGen<T>::empty()
{
    return(this->getElmt()==0); 
}
template <typename T>
int PileGen<T>::size()
{
    return elmt;
}
template <typename T>
void PileGen<T>::setElmt(int x)
{
    elmt = x;
}
template <typename T>
void PileGen<T>::push(T x)
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
template <typename T>
T PileGen<T>::top()
{
    
    return tab[this->getElmt()-1];
}
template <typename T>
void  PileGen<T>::pop()
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