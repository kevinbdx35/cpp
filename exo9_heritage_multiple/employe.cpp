#include "employe.h"

float Employe::valRemboursement = 0.0f;

Employe::Employe(string n, string p, int a, float s, float re)
    :Personne(n, p, a) //Appel au constructeur de la classe mère
{
    this->Setsalaire(s);
    this->Setremboursement_soins(re);
}


Employe::~Employe()
{
    cout << endl << "Destruction de l'employe "
    << Getnom() << " " << Getprenom() << endl;
}



void Employe::infos()
{
    Personne::infos();
    cout << "Salaire mensuel de : " << this->Getsalaire() << " euros" << endl;
    cout << "Salaire annuel de : " << this->Getsalaire_annuel() << " euros" << endl;
    cout << "Remboursement soins : " << ((Getremboursement_soins()/100)*this->Getsalaire()) << " euros" << endl;
}
