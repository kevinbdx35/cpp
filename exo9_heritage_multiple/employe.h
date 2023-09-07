#ifndef EMPLOYE_H
#define EMPLOYE_H

#include "personne.h"

class Employe: virtual public Personne
{
    public:
        //Constructeur
        Employe(string="NC", string="NC", int=0, float=0.0f, float=2.5f);

        //Destructeur
        virtual ~Employe();

        //Methodes d'instance
        //Get and SET
        float Getsalaire() { return salaire; }
        void Setsalaire(float val) { salaire = val; }


        float Getsalaire_annuel() { return salaire * 12; }
        void Setsalaire_annuel(float val) { salaire = val; }

        //Methodes de classe
        double Getremboursement_soins() { return valRemboursement; }
        void Setremboursement_soins(double val) { valRemboursement = val; }

        //Methode virtuelle/polymorphe
        virtual void infos() override;

    protected:

    private:
        //Attributs d'instance
        float salaire;

        //Attribut de Classe
        static float valRemboursement;
};

#endif // EMPLOYE_H
