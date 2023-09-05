#ifndef PERSONNE_H
#define PERSONNE_H

#include <iostream>

using namespace std;


class Personne
{
    public:
        //Constructeur
        Personne(string="NC", string="NC", int=0);

        //Destructeur
        virtual ~Personne();

        //Methodes d'instance
        //Get and SET
        string Getnom() { return nom; }
        void Setnom(string val) { nom = val; }

        string Getprenom() { return prenom; }
        void Setprenom(string val) { prenom = val; }

        int Getage() { return age; }
        void Setage(int val) { age = val; }

        //Methode virtuelle/polymorphe
        virtual void infos();

    protected:
        int age;

    private:
        //Attributs d'instance
        string nom;
        string prenom;
};

#endif // PERSONNE_H
