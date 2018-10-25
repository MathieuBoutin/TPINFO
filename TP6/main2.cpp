#include <iostream>
#include "Pile.hpp"
using namespace std;

int main()
{
    Pile p;

    p.push(5);
    cout << -1 << endl;
    cout << p.top() << endl;
    cout << p.empty() << endl;

    p.pop();
     cout << p.empty() << endl;
    return 0;
}