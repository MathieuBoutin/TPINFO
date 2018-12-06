#include <iostream>
using namespace std;
#include "HeritageMultiple.hpp"

 int Humain::getAge() const
{
    return age;
}
  GENRE Humain::getGenre() const
{
    return g;
}

 string Humain::getNom() const
{
    return nom;
}

Humain::~Humain	(){};

void Humain::setNom(string name)
{
    nom=name;
}

void Humain::setGenre(GENRE e)
{
    g=e;
}

void Humain::setAge(int a)
{
    age=a;
}



 int Machine::getAutonomie()
{
    return autonomie;
}
 int Machine::getIfixit()
{
    return iFixit;
}
 string Machine::getType()
{
    return type;
}