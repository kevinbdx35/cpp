#include "universite.h"

const int capaciteMax=5;
Personne etudiants[5];


Universite::Universite(string n)
{
    this->SetNom(n);
}

Universite::~Universite()
{
    cout << endl << "Destruction de l'Université " << GetNom() << endl;
}

void Universite::ajouter(Personne *personne)
{
    if(effectifs < capaciteMax)
    {
        etudiants[effectifs] = *personne;
        effectifs++;
    }
    else
    {
        cout << endl << "L'université est pleine !!!" << endl;
    }
}

void Universite::afficher()
{

    cout << endl << "Université  : " << GetNom() << endl;
    cout <<  endl << "Effectif de l'universite : " << effectifs << endl;

    cout << endl << "Liste des personnes de l'université : " << endl << endl;
    for(int i = 0; i < effectifs; i++)
    {
        cout << "Personne " << i + 1 << " : " << etudiants[i].Getnom()
            << ", " << etudiants[i].Getprenom()
            << endl;
    }
}

