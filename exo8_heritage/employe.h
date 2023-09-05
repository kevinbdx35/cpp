#ifndef EMPLOYE_H
#define EMPLOYE_H

#include "personne.h"

class Employe: public Personne
{
    public:
        //Constructeur
        Employe(string="NC", string="NC", int=0, float=0.0f);

        //Destructeur
        virtual ~Employe();

        //Methodes d'instance
        //Get and SET
        float Getsalaire() { return salaire; }
        void Setsalaire(float val) { salaire = val; }


        float Getsalaire_annuel() { return salaire * 12; }
        void Setsalaire_annuel(float val) { salaire = val; }

        //Methode virtuelle/polymorphe
        virtual void infos();

    protected:

    private:
        float salaire;
};

#endif // EMPLOYE_H
