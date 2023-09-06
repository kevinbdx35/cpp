#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "personne.h"


class Etudiant: public Personne
{
    public:
        //Constructeur
        Etudiant(string="NC", string="NC", int=0, float=0.0f);

        //Destruceur
        virtual ~Etudiant();

        //Methodes d'instance
        //Get and SET
        float Getnote() { return note; }
        void Setnote(float val) { note = val; }

        bool Getestadmis() { return note >= 10; }
        void Setestadmis(bool val) { note = val; }

        //Methode virtuelle/polymorphe
        virtual void infos() override;

    protected:

    private:
        //Attributs d'instance
        float note;
};

#endif // ETUDIANT_H
