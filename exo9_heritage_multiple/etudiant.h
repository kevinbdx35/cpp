#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "personne.h"


class Etudiant: virtual public Personne
{
    public:
        //Constructeur
        Etudiant(string="NC", string="NC", int=0, float=0.0f, float=50.0f);

        //Destruceur
        virtual ~Etudiant();

        //Methodes d'instance
        //Get and SET
        float Getnote() { return note; }
        void Setnote(float val) { note = val; }

        bool Getestadmis() { return note >= 10; }
        void Setestadmis(bool val) { note = val; }

        double Getremboursement_soins() { return valRemboursement; }
        void Setremboursement_soins(double val) { valRemboursement = val; }

        //Methode virtuelle/polymorphe
        virtual void infos() override;

    protected:

    private:
        //Attributs d'instance
        float note;

        //Attribut de Classe
        static float valRemboursement;
};

#endif // ETUDIANT_H
