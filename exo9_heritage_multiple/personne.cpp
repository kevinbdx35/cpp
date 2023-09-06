#include <cctype>

#include "personne.h"


void formatage(string &nom, string &prenom)
{
    //Transformer le nom en majuscules
    for(char &c : nom)
    {
        c = toupper(c);
    }

    //Mettre la majuscule à la premier lettre du prénom
    prenom[0] = toupper(prenom[0]);
}


Personne::Personne(string n, string p, int a)
{
    formatage(n, p);
    Setnom(n);
    Setprenom(p);
    Setage(a);
}

Personne::~Personne()
{
    cout << endl << "Destruction de la personne " << Getnom() << ", " << Getprenom() << endl;
}

void Personne::infos()
{
    cout << endl << "Personne du Nom : " << Getnom()
                << ", Prenom : " << Getprenom()
                << ", Age : " << Getage()
                << " ans"
                << endl;
}
