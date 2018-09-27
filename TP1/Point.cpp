#include <iostream>
#include "Point.hpp"


using namespace std;

Point::Point()
{
    this->setX(0);
    this->setY(0);
    ++compteur;
    cout << "Il y a " << compteur << " objets Points" << endl;
}

Point::Point(int a , int b )
{
    this->setX(a);
    this->setY(b);
    ++compteur;
    cout << "Il y a " << compteur << " objets Points" << endl;
}

Point::~Point()
{
    --compteur;
    cout << "Il y a " << compteur << " objets Points" << endl;
}
int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}
void Point::setX(int a)
{
    x= a;
}

void Point::setY(int a)
{
    y=a;
}
void Point::deplacerDe(int a, int b)
{
    x+=a;
    y+=b;
}

void Point::deplacerVers(int a, int b)
{
    x=a;
    y=b;
}
void fonction1(int a)
{
    cout<< &a << endl;
}

void fonction2(int& a)
{
    cout << &a << endl;
}
void echangerPointeur(int *a, int *b )
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

void echangerReference(int& a, int& b)
{
    int c;
    c=a;
    a=b;
    b=c;
}



int Point::getCompteur()
{
    return compteur;
}

int Point::compteur = 0;

int main(int ,char **)
{
    
    Point p;
    
    int a,b;
    a= 2;
    b=3;
    Point q;

    Point * z= new Point();
   /* p.setX(a);
    p.setY(b);
    cout << "x:" << p.getX() << endl;
    cout << "y:" << p.getY() << endl;
    p.deplacerVers(4,5);
    cout << "x:" << p.getX() << endl;
    cout << "y:" << p.getY() << endl;*/

  /*  int age=41;

    cout << &age << endl;
    fonction1(age);
    fonction2(age); 
    int a=3;
    int b=2;
    echangerReference(&a , &b);
    echangerReference(a,b);
    cout << a << endl << b << endl; */
    delete z;
    return 0;
}