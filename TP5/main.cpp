#include <iostream>

using namespace std;

class Bavarde {
  
  public:
  Bavarde();
  Bavarde(int);
  Bavarde(Bavarde const& b); //constructeur de copie
  Bavarde(Bavarde const *b);
  ~Bavarde();
  int getN();
  static int getNbInst();
  void afficher();
  
  private:
  int n;
  static int nbInst;
};  //bizarre(1)

class Couple{

    public:
    Couple(int a=2, int b=3):
        d(a),
        c(b)
        {
            cout << "Construction de l'Objet Couple" << endl;

         };
    ~Couple();

    private:
    Bavarde d;
    Bavarde c;

};

class Famille{
    public:
    Famille();
    Famille(int taille);
    int getN();
    ~Famille();

    private:
    int n;
    Bavarde * pointeur;
   
};
int Bavarde::nbInst=0;

Bavarde::Bavarde(Bavarde const *b)
{
    n=b->n;
    ++nbInst;
}
Bavarde::Bavarde(Bavarde const& b)
{
    n = b.n;
    ++nbInst;
}

Couple::~Couple()
{
    cout << "Destruction du Couple "  << endl;
}

Famille::Famille()
{
    n = 0;
    
    pointeur = new Bavarde();
    
   cout << "construction du pointeur " << pointeur << endl;
}

Famille::Famille(int taille)
{
    n = taille;
    
    pointeur = new Bavarde(taille);
    
    cout << "construction du pointeur " << pointeur << " de taille "<< n << endl;
}

Famille::~Famille()
{
       
        delete pointeur;
         cout << "Destruction du pointeur de taille " << n << endl;
    
    
}

Bavarde::Bavarde(int x)
{
    n=x;
    ++nbInst;
    
   // cout << "Construction du Couple " << n  << endl;
}
Bavarde::Bavarde()
{
    n=0;
    ++nbInst;
    
  //  cout << "construction de Bavarde " << n << endl;
}

Bavarde::~Bavarde()
{
    --nbInst;
    cout << Bavarde::getNbInst() << endl;
   // cout << "Destruction de Bavarde " << n << endl;
}

int Bavarde::getNbInst()
{
    return nbInst;
}

int Bavarde::getN()
{
    return n;
}

int Famille::getN()
{
    return n;
}
const int taille = 5;


//Bavarde globale(2);

void fonction(Bavarde b) {
  cout << "code de la fonction" << endl;  // l'argument est construit et détruit à la sortie de la fonction.
}

void Bavarde::afficher()
{
    cout << "Affichage de " << this << endl;
}
int main(int, char **)
{  
  // Couple D;
//   cout << Bavarde::getNbInst() << endl;
//    Bavarde b(6);
//    cout << Bavarde::getNbInst() << endl;
        
        
//    cout << b.getN() << endl;
   
    // Bavarde c(&b);
    // cout << Bavarde::getNbInst() << endl;
    // cout << c.getN() << endl;
 // Bavarde * p = new Bavarde(3);

  //cout << Bavarde(5).getN() << endl; // l'objet bavarde(5) est détruit à la fin de l'appel
   //fonction(b);
  //cout << globale << endl;
  //cout << b.getN() << endl;
  //cout << p->getN() << endl;
  //delete p;
  
  
  
  /*const int TAILLE = 20;
  Bavarde   tab1[TAILLE];
  Bavarde * tab2 = new Bavarde[TAILLE];

  for (int i =0; i < TAILLE; ++i)
  {
     tab1[i].afficher();
     tab2[i].afficher();
  }
  delete [] tab2; 

  Famille q(taille);
  Famille p;
  
  
  cout << q.getN() << endl;
  cout << p.getN() << endl; */
  return 0;
}