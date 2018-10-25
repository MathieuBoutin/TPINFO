#include <iostream>
#include <stdexcept>
using namespace std;


template <typename T>
class PileGen{

    public:
    PileGen();
    PileGen(int);
    ~PileGen();
    bool empty();
    void push(T);
    void pop();
    T top();
    int getElmt();
    int size();
    void setElmt(int);
    void setTaille(int);
    int getTaille();
    
    private:
    int taille;
    T * tab;
    int elmt;
};

#include "PileGen.cpp"