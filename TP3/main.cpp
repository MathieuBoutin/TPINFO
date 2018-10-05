#include <iostream>
#include <string>
using namespace std;


class Mere{

    public:
    Mere();
    Mere(string);
    ~Mere();
    static int getN();
    string get();
    virtual void afficher(); 
/* le virtual permet de faire la différence 
   entre un objet fille instancié comme Mere 
             et une objet Mere  */
    private:
    static int n;
    
    protected: // permet d'acceder meme depuis fille !! 
    string nom;
    

};

class Fille : public Mere
{
    public:
    Fille(string c);
    ~Fille();
    
     void afficher();
   
    
};

Mere::Mere(string c)
{
    ++n;
    nom = c;
}
Mere::Mere()
{
    ++n;
    
    //cout << "Construction de l'Objet Mere "  << endl;
    //cout << n << endl;
}



Mere::~Mere()
{
    --n;
   // cout << "Destruction de l'Objet Mere " << endl;
    //cout << n << endl;
}


Fille::Fille(string c):Mere()
{
    nom=c;
    
   // cout << "Construction de l'Objet Fille "  << endl;
}



Fille::~Fille()
{
   // cout << "Destruction de l'Objet Fille " << endl;
}

int Mere::getN()
{
    return n;
}


string Mere::get()
{
    return nom;
}





void Mere::afficher()
{
    cout << "Mere" << endl;
}

void Fille::afficher()
{
    cout << "Fille" << endl;
}

int Mere::n = 0;


int main()
{
    
   Mere *pm= new Mere("mere_dym");
   Fille *pf = new Fille("fille_dym");
   Mere *pp= new Fille("fille vue comme mere");

   pm->afficher(); // affiche Mere
   pf->afficher(); // affiche Fille
   pp->afficher(); // affiche Fille grace au virtual
    cout << pm->get() << endl;;
    cout << pf->get()<< endl;;
    cout << pp->get()<< endl;;

    delete pm;
    delete pf;
    delete pp;
    return 0;
}