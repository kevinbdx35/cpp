#include "personne.h"
#include "etudiant.h"


Etudiant::Etudiant(string n, string p, int a, float no)
    :Personne(n, p, a)
{
    this->Setnote(no);
}


Etudiant::~Etudiant()
{
    cout << endl << "Destruction de l'etudiant"
    << Getnom() << " " << Getprenom() << endl;
}

void Etudiant::infos()
{
    if(Getestadmis())
    {
        Personne::infos();
        cout << "Note de : " << this->Getnote()
            << " Mention : " << "Admis"
            << endl;
    }
    else
    {
        Personne::infos();
        cout << "Note de : " << this->Getnote()
            << " Mention : " << "Ajourné"
            << endl;
    }

}




