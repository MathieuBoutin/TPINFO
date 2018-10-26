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
    void push_front(int);
    void push_back(int);
    int back();
    int front();
    void pop_front();
    void pop_back();
    // void remove(int);
    // Iterator begin();
    // Iterator end();
    // Iterator research(int);

};


#endif