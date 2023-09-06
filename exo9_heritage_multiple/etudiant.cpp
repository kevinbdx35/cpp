#include "personne.h"
#include "etudiant.h"

float Etudiant::valRemboursement = 0.0f;

Etudiant::Etudiant(string n, string p, int a, float no, float re)
    :Personne(n, p, a)
{
    this->Setnote(no);
    this->Setremboursement_soins(re);
}


Etudiant::~Etudiant()
{
    cout << endl << "Destruction de l'etudiant "
    << Getnom() << " " << Getprenom() << endl;
}

void Etudiant::infos()
{
    if(Getestadmis())
    {
        Personne::infos();
        cout << "Note de : " << this->Getnote()
             << endl
             << "Mention : " << "Admis"
             << endl
             << "Remboursement soins : " << this->Getremboursement_soins()
             << " Euros"
             << endl;
    }
    else
    {
        Personne::infos();
        cout << "Note de : " << this->Getnote()
             << endl
             << "Mention : " << "Ajourné"
             << endl
             << "Remboursement soins : " << this->Getremboursement_soins()
             << " Euros"
             << endl;
    }

}




