#include <iostream>

using namespace std;
#include "Liste.hpp"

int main()
{
    Liste L;
    
    // L.push_front(4);
    L.push_back(3);
    cout << L.first->suiv->suiv << endl << L.last->suiv << endl;
    L.push_back(6);
    
    // L.push_front(1);
    //L.afficher();
    // if (L.empty())
    // {
    //     cout << "la liste est vide" << " " << L.empty() << endl;
    // }
    // else
    // {
        // cout << L.first->suiv->donnee << endl ;
    // }
    // L.afficher();
    // cout << L.front() << endl << L.back() << endl;
    // L.pop_front();
    // L.afficher();
   
    return 0;
}