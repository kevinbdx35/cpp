#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
    private:
        char nom;
        float x;
        float y;

    public:

        Point(char='o', float=0.0f, float=0.0f);
        //constructeur par recopie
        Point(const Point &);

        //destructeur
        ~Point();

        //Methodes
        void afficher();

        //Get and Set
        float Getx() const { return x; }
        void Setx(float val) { x = val; }

        float Gety() const { return y; }
        void Sety(float val) { y = val; }

        char get_nom();
        void set_nom(char);

};


#endif // POINT_H_INCLUDED
