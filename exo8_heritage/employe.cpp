#include "employe.h"

Employe::Employe(string n, string p, int a, float s)
    :Personne(n, p, a) //Appel au constructeur de la classe mère
{
    this->Setsalaire(s);
}

Employe::~Employe()
{
    cout << endl << "Destruction de l'employe "
    << Getnom() << " " << Getprenom() << endl;
}



void Employe::infos()
{
    Personne::infos();
    cout << "Salaire mensuel de : " << this->Getsalaire() << "euros" << endl;
    cout << "Salaire annuel de : " << this->Getsalaire_annuel() << "euros" << endl;
}
