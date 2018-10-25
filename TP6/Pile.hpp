#include <iostream>
#include <stdexcept>
using namespace std;



class Pile{

    public:
    Pile();
    Pile(int);
    ~Pile();
    bool empty();
    void push(int);
    void pop();
    int top();
    int getElmt();
    int size();
    void setElmt(int);
    void setTaille(int);
    int getTaille();
    class invalid_argument : public std::exception 
    {
       

    };
    private:
    int taille;
    int * tab;
    int elmt;
};