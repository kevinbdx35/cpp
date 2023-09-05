#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED

#include <iostream>
using namespace std;

class Compte
{
    private:
        //Attributs d'instance
        string number;
        float solde;

        //Attribut de Classe
        static int montant_decouvert;
        static int nbcompte;



    public:
        //Constructeur
        Compte(string, float);

        //Destructeur
        ~Compte();

        //Methodes d'instance
        void afficher();
        void credit(float);
        bool debit(float solde);


        // GET and SET
        void set_number(string);
        string get_number();

        void set_solde(float);
        float get_solde();

        //Methode de classe
        static void modifier_decouvert(int);
        static int obtenir_decouvert();
        static int get_nbcompte();
};

#endif // COMPTE_H_INCLUDED
