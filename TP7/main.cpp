#include <iostream>

using namespace std;
#include "Liste.hpp"

int main()
{
    Liste L;
    // L.insertTete(4);
    L.insert(3);
    // L.insert(6);
    // L.insertTete(1);
    // if (L.empty())
    // {
    //     cout << "la liste est vide" << " " << L.empty() << endl;
    // }
    // else
    // {
        cout << L.first->suiv->donnee << endl ;
    // }
    // L.afficher();
    return 0;
}