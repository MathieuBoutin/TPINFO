#ifndef DEF_FIL
#define DEF_FIL
#include <string>
using namespace std;
class Rectangle{
    public:
    Rectangle(int a, int b, int c ,int d);
    Rectangle(int x1, int y1);
    Rectangle();
    virtual ~Rectangle();
    void setX(int);
    void setY(int);
    void setW(int);
    void setH(int);
    virtual void copie(Rectangle);
    int getX();
    int getY();
    int getW();
    int getH();
    int getOrdre();
    int getOrdre2();
    virtual void PrintCoordonnees();
    static int getI();
    static int getJ();
    
    void incrementerOrdre();
    void incrementerI();
    void incrementerJ();
    virtual string toString();

   
    
   
    
    protected:
    int ordre2;
    int ordre;
    int x;
    int y;
    int w;
    int h;
    static int j; //compte le nombre de rectangle
    static int i; //compte le nombre de Cercle
   
    

};

class Cercle: public Rectangle
{

    public:
    Cercle(int, int, int, int);
    Cercle(int x, int y, int rayon);
    Cercle();
    ~Cercle();
    int getR();
    void setR(int);
    void PrintCoordonnees();
    void copie(Cercle);
    int getArgu();
    
    string toString();
   

    


    private:
    int rayon;
    int argu;
    
};

int const TAILLE = 10;
class Liste : public Cercle
{

    public: 
    Liste();
     ~Liste();
    void afficher();
    void ajouterRectangle(Rectangle objet);
    void ajouterCercle(Cercle Objet);
   
   
    protected:
    Rectangle  R[TAILLE];
    Cercle  C[TAILLE];
    
    
   
    
};

class Point 
{
    public:
    Point();
    Point(int,int);
    ~Point();
    void setX(int);
    void setY(int);
    int getX();
    int getY();

    private:
    int x;
    int y;

};

class Form 
{
    public:
    Form();
    Form(Point,int,int);
    ~Form();
    void setW(int);
    void setH(int);
    int getW();
    int getH();
    static int getnbForm();

    private:
    Point p;
    int w;
    int h;
    static int nbForm;
};




#endif