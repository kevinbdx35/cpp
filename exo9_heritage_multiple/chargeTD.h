#ifndef CHARGETD_H
#define CHARGETD_H

#include <iostream>

#include "personne.h"
#include "employe.h"
#include "etudiant.h"

class ChargeTD: virtual public Etudiant, virtual public Employe
{
    public:
        //Imposer l'utilsiation d'un élément de façon implicite
        using Employe::Getremboursement_soins;



        //Constructeur
        ChargeTD(
            string="NC", string="NC", int=0, float=0.0f,
            int=0, float=0
        );

        //Destructeur
        virtual ~ChargeTD();

        //Methodes d'instance
        //Get and SET
        int GetnbH() { return nbH; }
        void SetnbH(int val) { nbH = val; }

        float GettxHoraire() { return txHoraire; }
        void SettxHoraire(float val) { txHoraire = val; }

        double Getremboursement_soins2() { return (Getremboursement_soins()/100) * GetnbH() * GettxHoraire(); }
        void Setremboursement_soins2(double val) { }

        //Methode virtuelle/polymorphe
        virtual void infos() override;

    protected:

    private:
        int nbH;
        float txHoraire;
};

#endif // CHARGETD_H
