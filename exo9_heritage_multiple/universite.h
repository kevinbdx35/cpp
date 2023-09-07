#ifndef UNIVERSITE_H
#define UNIVERSITE_H

#include <iostream>
#include "personne.h"

using namespace std;


class Universite
{
    public:
        //Constructeur
        Universite(string="NC_université");

        //Destructeur
        ~Universite();

        //Methodes d'instance
        //Get and SET
        string GetNom() { return nom; }
        void SetNom(string val) { nom = val; }


        //Méthode pour obtenir l'effectif
        int effectif() { return effectifs; }

        //Méthode pour ajouter une personne
        void ajouter(Personne *);


        // Méthode pour afficher les informations de l'université
        void afficher();

    protected:

    private:
        int effectifs = 0;

        Personne *personne;
        string nom;
};

#endif // UNIVERSITE_H
