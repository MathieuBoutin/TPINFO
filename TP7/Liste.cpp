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
    
    
}

bool Liste::empty()
{
    return (first->suiv == NULL);
}

void Liste::push_back(int x)
{
    if(first->suiv!=NULL)
    {
        last->suiv = new Cellule();
        last->suiv->donnee = x;
        cout << last->suiv->donnee << endl;
        last->suiv = last->suiv->suiv ;
    }
    else
    {
        first->suiv = new Cellule(x);
        last->suiv = first->suiv->suiv;
    }
}

void Liste::push_front(int x)
{
    if(first->suiv!=NULL)
    {
        Cellule * c = new Cellule(x);
        c->suiv = first->suiv;
        first->suiv = c;
        
    } 
    else
    {
        
        first->suiv= new Cellule(x);
        first->suiv->suiv = new Cellule();
        last = first->suiv->suiv;

    }
}

void Liste::afficher()
{
    if (first->suiv!=NULL)
    {
        Cellule * cur = new Cellule();
        cur = first->suiv;
        cout << "first--->";
        while(cur->suiv!=last)
        {
            cout << cur->donnee << "--->";
            cur = cur->suiv;
        }
        cout << "NULL" << endl;
    }
}

int Liste::back()
{
    int res = 0;
    if (first->suiv != NULL)
    {
        Cellule * cur = new Cellule();
        cur = first->suiv;
        while (cur->suiv!=last)
        {
            cur = cur->suiv;
        }
        res =  cur->donnee;
        delete cur;
    }
    
    return res;
}

int Liste::front()
{
    int res = 0;
    if (first->suiv != NULL)
        res= first->suiv->donnee;
    return res;
}

void Liste::pop_front()
{
    if (first->suiv != NULL)
    {
        
        first->suiv= first->suiv->suiv;
        
    }
}

void Liste::pop_back()
{
    if (first->suiv!=NULL)
    {
        Cellule * cur;
    }
}