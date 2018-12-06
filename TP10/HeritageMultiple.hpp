#ifndef HeritageMultiple
#define HeritageMultiple

#include <iostream>

using namespace std;

enum  GENRE {HOMME, FEMME};
class Humain
{
  protected:
   string nom;
   GENRE g;
   int age;

  public:
  Humain(){};
  Humain(const string name, GENRE e, const int a){nom=name; g=e;age=a;};
  ~Humain();
   int getAge() const ;
    string getNom() const ;
    GENRE getGenre() const ;
   void setNom(string name);
   void setGenre(GENRE e);
   void setAge(int a);
  
};

class Machine
{
    protected:
    string type;
    int autonomie;
    int iFixit;
    public:
    Machine(){};
    Machine(const string typ,const int a, const int i){type=typ;autonomie=a;iFixit = i;}
     int getAutonomie();
     int getIfixit();
     string getType();
};

class Humanoide : public Humain, public Machine{

    public:
    Humanoide(const string name,const string t,GENRE e, int a) {nom=name; type=t; g=e; age=a; iFixit=3;};

};

#endif