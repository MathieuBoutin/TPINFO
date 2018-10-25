#include <iostream>
using namespace std;

class M {
 public:
  M() {
    cout << "M::M()" << endl;
  }
   ~M() {
    cout << "M::~M()" << endl;
  }
    M(const M&) {
    cout << "M::M(const M&)" << endl;
  }
  M& operator=(const M& ){
      cout << "M&::operator=(const M& m)" << endl;
      return *this;
  }

};

class F : public M {
 public:
  F() {
    cout << "F::F()" << endl;
  }
~F() {
    cout << "F::~F()" << endl;
  }
  
  F(const F& f) : M(f) {
    cout << "F::F(const F&)" << endl;
  }

  F& operator=(const F& f){
      cout << "F&::operator=(const F& f)" << endl;
      M::operator=(f);
      return *this;
  }
  
};

class A {
 public:
  A() {
    cout << "A::A()" << endl;
  }
   ~A() {
    cout << "A::~A()" << endl;
  }
    A(const A&) {
    cout << "A::A(const A&)" << endl;
  }
  A& operator=(const A& a ){
      cout << "A&::operator=(const A& m)" << endl;
      m=a.m;
      return *this;
  }
  private:
  M m;

};

int main(int, char**) {

  F f1;
  F f2 = f1;

  f1 = f2;

  A a1;
  A a2 = a1;

  a1=a2;
  return 0;
}