#ifndef VECTEUR3D_H
#define VECTEUR3D_H
#include <iostream>

using namespace std;

class Vecteur3D
{
    public:
        Vecteur3D(float=0.0f, float=0.0f, float=0.0f);
        ~Vecteur3D();

        float Getx() const{ return x; }
        void Setx(float val) { x = val; }

        float Gety() const{ return y; }
        void Sety(float val) { y = val; }

        float Getz() const{ return z; }
        void Setz(float val) { z = val; }

        void afficher() const;

        Vecteur3D somme(const Vecteur3D&);

        static double prodScalaire(const Vecteur3D&,
                                   Vecteur3D* const);

        static int getNbVecteurs();

        //Surcharge opérateurs
        Vecteur3D operator+(const Vecteur3D&);
        double operator*(const Vecteur3D&);
        bool operator==(const Vecteur3D&);
        bool operator!=(const Vecteur3D&);


    private:
        float x;
        float y;
        float z;
        static int nbVecteurs;
};


double prodScalaire(const Vecteur3D&, Vecteur3D* const);


#endif // VECTEUR3D_H
