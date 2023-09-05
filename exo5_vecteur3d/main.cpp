#include <iostream>

#include "vecteur.h"

using namespace std;

int main()
{
    float resultat;

    //objet Dynamique
    Vecteur *obj_vecteur = nullptr;

    //Instancie la classe Vecteur, créaction d'un objet
    obj_vecteur = new Vecteur(10, 12 , 5);

    obj_vecteur->afficher();

    Vecteur *obj_vecteur2 = new Vecteur(19, 0, 0);

    obj_vecteur2->afficher();

    Vecteur *obj_vecteur3 = new Vecteur();

    obj_vecteur3->afficher();

    //Additionner les deux vecteurs
    //Vecteur *resultat = Vecteur::somme(*obj_vecteur, *obj_vecteur2);
    //resultat->afficher();




    cout << endl << "Nb vecteurs : " << Vecteur::get_nb_vecteurs() << endl;

    if(obj_vecteur != nullptr)
    {
        delete obj_vecteur;
        obj_vecteur = nullptr;
    }

    cout << endl << "Nb vecteurs : " << Vecteur::get_nb_vecteurs() << endl;
    cout << endl << "Fin du main !!!!" << endl;


    return 0;
}


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
