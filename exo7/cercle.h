#ifndef CERCLE_H_INCLUDED
#define CERCLE_H_INCLUDED


class Cercle
{
    private:
        Point *centre;
        float rayon;


    public:

        //constructeur
        Cercle(char='c', float=0, float=0, float=0);
        Cercle(const Point&, float=0);
        Cercle(const Cercle&);

        //destructeur
        ~Cercle();


        //Methodes
        void afficher();

        //Get and Set
        float get_rayon() const;
        Point *getCentre() const;
        void set_rayon(float);


};


#endif // CERCLE_H_INCLUDED

