#ifndef DEF_B
#define DEF_B


#include "A.hpp"
class A;

class B{

    public:
    B();
    ~B();
    void exec(int);
    void send(A *a , int);
    static int getJ();



    private:
    static int j;
};



#endif