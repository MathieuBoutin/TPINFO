#ifndef DEF_POINT
#define DEF_POINT

class Point{
    // par défaut, tout est prive dans une "class"

    int x;
    int y;
    static int compteur;

    public:
        Point();
        Point(int,int);
        ~Point();
        int getX();
        void setX(int);
        int getY();
        void setY(int);
        void deplacerDe(int,int);
        void deplacerVers(int,int);
        
        static int getCompteur();
        
};


#endif 
