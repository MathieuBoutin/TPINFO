#ifndef LISTE_HPP
#define LISTE_HPP

class Liste{

    protected:
    class Cellule
    {
        
        

        public:
        Cellule();
        Cellule(int);
        Cellule(Cellule const& );
        ~Cellule();
        int donnee;
        Cellule * suiv;
    };
    

    public:
    Cellule * first;
    Cellule * last;
    // class Iterator
    // {
    //     protected:
    //     Cellule * aptr;

    //     public:
    //     Iterator();
    //     Iterator(Iterator const&);

    // };
    Liste();
    Liste(const Liste&);
    ~Liste();
    bool empty();
    void afficher();
    // Liste & operator=();
    void insert(int);
    void insertTete(int);
    // void remove(int);
    // Iterator begin();
    // Iterator end();
    // Iterator research(int);

};


#endif