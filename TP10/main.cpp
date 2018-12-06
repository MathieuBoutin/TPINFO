#include <iostream>

using namespace std;


//  EXERCICE 1
/*
class Mere {
 public:
  Mere() {
    cout << "Mere::Mere()" << endl;
    tab = new int[100];
  }
  virtual ~Mere() {
    cout << "Mere::~Mere()" << endl;
    delete [] tab;
  }
 protected:
  int * tab;
};

 class Fille : public Mere {
 public:
   Fille():Mere() {
      cout << "Fille:Fille()" << endl;
      tab = new double[100];
      Mere::tab[50] = 4;

   }
    ~Fille()  {
    cout << "Fille::~Fille()" << endl;
    delete [] tab;

  }
 protected:
  double * tab;
};

int main(int, char**) {
  Mere * m = new Fille();

  cout << "penser a valgrind" << endl;
  delete m;

  return 0;
}
*/

//    EXERCICE 2
/*
class Mere {
 public:
  Mere() { m(); }
  virtual void m() { cout << "mm" << endl; }
  virtual ~Mere() {cout << "~mm" << endl;}
};

class Fille : public Mere {
 public:
  Fille() { m(); }
  virtual void m() { cout << "mf" << endl; }
  virtual ~Fille() {cout << "~mf" << endl;}
};

int main()
{
  Mere * o = new Fille;
  o->m();
  delete o;
  return 0;
}*/

// HERITAGE MULTIPLE


