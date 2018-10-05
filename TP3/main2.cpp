#include <iostream>
#include "A.hpp"
#include "B.hpp"

using namespace std;




int main()
{
    A a;
    B b;
    cout << a.geti() << endl;
    cout << b.getJ() << endl;

    b.send(&a, 3);
    
    cout << a.geti() << endl;
    return 0;
}