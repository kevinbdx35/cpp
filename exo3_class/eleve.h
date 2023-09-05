#ifndef ELEVE_H_INCLUDED
#define ELEVE_H_INCLUDED

class Eleve
{
    private:
        char nom[30+1];
        float note;

    public:
        void init(char*, float);

        void afficher();



        //GET / SET
        char *get_nom();
        void set_nom(char *);

        float get_note();
        void set_note(float);

        char *mention();

};


#endif // ELEVE_H_INCLUDED
