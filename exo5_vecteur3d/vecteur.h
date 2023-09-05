#ifndef VECTEUR_H_INCLUDED
#define VECTEUR_H_INCLUDED

#include <iostream>

using namespace std;

class Vecteur
{
    private:
        //Atributs de l'instance
        float v1;
        float v2;
        float v3;

        //Attributs de la classe
        static int nb_vecteurs;
        static float prodScalaire;

    public:
        //Constructeur
        Vecteur(float=0.0f, float=0.0f, float=0.0f);


        //Destructeur
        ~Vecteur();


        //Methodes de l'instance
        void afficher() const;






        //GET and SET
        float Getx() const { return v1; }
        void Setx(float val) { v1 = val; }

        float Gety() const { return v2; }
        void Sety(float val) { v2 = val; }

        float Getz() const { return v3; }
        void Setz(float val) { v3 = val; }




        //Methodes de classe
        static int get_nb_vecteurs();

        static float somme(const Vecteur &v1, const Vecteur &v2);
        static double prd_scalaire();



};


#endif // VECTEUR_H_INCLUDED


/*
Réaliser une classe vecteur3d permettant de manipuler des vecteurs à 3 composantes (de type float).

On y prévoira :

• un constructeur, avec des valeurs par défaut (0),

• une fonction d’affichage des 3 composantes du vecteur, sous la forme :

< composante1, composante2, composante3 >

• une fonction permettant d’obtenir la somme de 2 vecteurs (elle renverra un vecteur3d)

• une fonction permettant d’obtenir le produit scalaire de 2 vecteurs.

prodScalaire = (v1.x * v2.x) + (v1.y*v2.y) +(v1.z*v2.z)

On choisira les modes de transmission les mieux appropriés. On écrira un petit programme utilisant la classe ainsi réalisée.

De plus, vous ferez en sorte qu’on puisse afficher à n’importe quel moment le nombre de vecteurs créés.

*/
