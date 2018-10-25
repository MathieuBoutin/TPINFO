#include <iostream>

#include "filRouge.hpp"


/*-------------Constructeur-----------------*/


Rectangle::Rectangle(int a, int b, int c, int d)
{
    setX(a);
    setY(b);
    setW(c);
    setH(d);
    
   
}
Rectangle::Rectangle()
{
     setX(0);
    setY(0);
    setW(0);
    setH(0);

}

Rectangle::Rectangle(int a, int b)
{
    setX(a);
    setY(b);
    setW(-a);
    setH(-b);
    
}

Cercle::Cercle(int a, int b, int c, int d):Rectangle()
{

    setX(a);
    setY(b);
    setW(c);
    setH(d);
    
   
    argu=4;
}

Cercle::Cercle(int a, int b, int r):Rectangle()
{
    setX(a);
    setY(b);
    setR(r);
    
   
    argu=3;
}
Cercle::Cercle()
{
    setX(0);
    setY(0);
    setW(0);
    setH(0);
    setR(0);

}
Liste::Liste()
{
   ordre=0;
}

Point::Point()
{
    setX(0);
    setY(0);

}

Point::Point(int a,int b)
{
    setX(a);
    setY(b);
}

Form::Form()
{
    ++nbForm;
     
    cout << this->getnbForm() << endl;
    
}

Form::Form(Point q, int a, int b)
{
    p.setX(q.getX());
    p.setY(q.getY());
    setW(a);
    setH(b);
    ++nbForm;
     
    cout << this->getnbForm() << endl;
   
}



/*---------------Setter--------------------*/



void Rectangle::setX(int a)
{
    x=a;
}

void Rectangle::setY(int b)
{
    y=b;
    
}
void Rectangle::setW(int c)
{
    w=c;
}
void Rectangle::setH(int d)
{
    h=d;
}

void Cercle::setR(int r)
{
    rayon=r;
}

void Point::setX(int a)
{
    x=a;
}
void Point::setY(int b)
{
    y=b;
}

void Form::setH(int a)
{
    h=a;
}
void Form::setW(int b)
{
    w=b;
}




/*----------Getter--------------------*/



int Rectangle::getX()
{
    return x;
}

int Rectangle::getY()
{
    return y;
}

int Rectangle::getW()
{
    return w;
}

int Rectangle::getH()
{
    return h;
}

int Cercle::getR()
{
    return rayon;
}

int Rectangle::getOrdre()
{
    return ordre;
}

int Rectangle::getOrdre2()
{
    return ordre2;
}

int Rectangle::getI()
{
    return i;
}
int Rectangle::getJ()
{
    return j;
}

int Form::getW()
{
    return w;
}

int Form::getH()
{
    return h;
}
int  Form::getnbForm()
{
    return nbForm;
}

void Cercle::PrintCoordonnees()
{
    if (argu==3)
    {
    cout <<"(" << this->toString()<< ",ordre: "<< this->getOrdre() <<",x:" << this->getX() << ",y:" << this->getY() << ",rayon:" << this->getR() << ")"<<  endl;
    }
    else
    {
        cout << "(" << this->toString()<< ",ordre: "<< this->getOrdre()  << ",x:" << this->getX() << ",y:" << this->getY() << ",w:" << this->getW() << ",h:" << this->getH() << ")" << endl;
    }

}
void Rectangle::PrintCoordonnees()
{
    cout << "(" << this->toString() <<",ordre: "<< this->getOrdre() << ",x:" << this->getX() << ",y:" << this->getY() << ",w:" << this->getW() << ",h:" << this->getH() << ")" << endl;
}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}
int Cercle::getArgu()
{
    return argu;
}

/*---------------Autres---------------------*/


void Rectangle::incrementerOrdre()
{
    this->ordre= i+j+1;
}

void Rectangle::incrementerI()
{
    i++;
}
void Rectangle::incrementerJ()
{
    j++;
}



string Rectangle::toString()
{
    return "Rectangle";
}

string Cercle::toString()
{
    return "Cercle";
}

void Rectangle::copie(Rectangle objet)
{
    this->setX(objet.getX());
    this->setY(objet.getY());
    this->setW(objet.getW());
    this->setH(objet.getH());
    
}

void Cercle::copie(Cercle objet)
{
    if(objet.getArgu()==4)
    {
         this->setX(objet.getX());
        this->setY(objet.getY());
        this->setW(objet.getW());
        this->setH(objet.getH());
        argu=4;
    }
    else
    {
         this->setX(objet.getX());
        this->setY(objet.getY());
        this->setR(objet.getR());
        argu=3;
    }
}

void Liste::ajouterRectangle(Rectangle objet)
{
      
        R[j].copie(objet);
        
        R[j].incrementerOrdre();
       
       
        R[j].incrementerJ(); 
        

        
}

void Liste::ajouterCercle(Cercle objet)
{
        
        
       C[i].copie(objet);
        
       C[i].incrementerOrdre();
       
        
        
        
        C[i].incrementerI();

}







void Liste::afficher()
{
    int k=0; //compteur pour i
    int l=0; // compteur pour j
    while (k<i || l<j)
    {
        if (this->C[k].getOrdre()<this->R[l].getOrdre())
        {
            this->C[k].PrintCoordonnees();
            k++;
        }
        else
        {
           this->R[l].PrintCoordonnees();
            l++;
        }
    }
    
      
}

/*------------------Destructeur-------------------*/

Rectangle::~Rectangle()
{

}

Cercle::~Cercle()
{

}

Liste::~Liste()
{

}

Point::~Point()
{

}

Form::~Form()
{
    --nbForm;
    
    cout << this->getnbForm() << endl;
    
}







int Rectangle::j=0;
int Rectangle::i=0;
int Form::nbForm=0;











int main()
{
    Liste L;
    
    Cercle c(2,3,4,6);
    Rectangle r(1,3,4,5);
    Cercle c1(4,5,9);
    Cercle c2(10,3,4);

   
    //cout << L.getI() << L.getJ() << L.getOrdre()<< endl;
   
   // cout << L.getI() << L.getJ() << L.getOrdre()<< endl;
    L.ajouterCercle(c);
    L.ajouterRectangle(r);
    L.ajouterCercle(c1); 
     L.ajouterCercle(c2);
    L.afficher();
    /*
    Rectangle r(2,3);
    Cercle c(2,4,6);
    Rectangle* d= new Cercle(2,4,6,8);
    
   cout <<  r.toString() << endl;


    cout << "x: " << r.getX() << endl << "y: " << r.getY() << endl << "w: " << r.getW() << endl << "h: " << r.getH() << endl;
    
    cout << c.toString() << endl;
    cout << "x: " << c.getX() << endl << "y: " << c.getY() << endl << "rayon: " << c.getR()<<endl;
    
    cout << d->toString() << endl; 
   delete d;*/
   
//   S Form f;
   

   
    return 0;
}