#ifndef DEF_A
#define DEF_A

#include "B.hpp"

class B;

class A{
    public:
    A();
    ~A();
    void exec(int);
    void send(B *b, int);

    static int geti();

    private:

    static int i;


};


#endif