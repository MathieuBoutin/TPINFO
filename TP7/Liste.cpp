#include "Liste.hpp"
#include <iostream>

using namespace std;


/*                                                            */
/*                      Classe Cellule                        */
/*                                                            */
Liste::Cellule::Cellule()
{
    donnee = 0;
    suiv = NULL;
}

Liste::Cellule::Cellule(int x)
{
    donnee = x;
    suiv = NULL;
}

Liste::Cellule::Cellule(Cellule const& c)
{
    donnee= c.donnee;
    suiv = c.suiv;
}

Liste::Cellule::~Cellule()
{
    delete suiv;
}


/*                                                            */
/*                      Classe LISTE                          */
/*                                                            */


Liste::Liste()
{
    first= new Cellule();
    last = new Cellule();
}

Liste::Liste(Liste const& L)
{
    first= L.first;
    last= L.last;
}

Liste::~Liste()
{
    while (first!=0)
    {
        Cellule* c = first;
        first = c->suiv;
        delete c;
    }
    delete last;
    
}

bool Liste::empty()
{
    return (last==first);
}

void Liste::insert(int x)
{
    if(first!=NULL)
    {
        last->donnee = x;
        last->suiv = new Cellule();
        last = last->suiv ;
    }
    else
    {
        first->suiv = new Cellule();
        
        first->suiv->donnee = x;
        first->suiv->suiv = new Cellule();
        last = first->suiv->suiv;
    }
}

void Liste::insertTete(int x)
{
    if(first!=last)
    {
        Cellule * c = new Cellule(x);
        c->suiv= new Cellule();
        c->suiv = first->suiv;
        first->suiv = c;
        delete c;
    } 
    else
    {
        first = new Cellule(x);
        first->suiv= new Cellule();
        last = first->suiv;

    }
}

void Liste::afficher()
{
    Cellule * cur = new Cellule();
    cur = first;
    while(cur!=last)
    {
        cout << cur->donnee << "--->";
        cur = cur->suiv;
    }
    cout << "NULL" << endl;
}


