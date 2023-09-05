#include <iostream>

#include "personne.h"
#include "employe.h"
#include "etudiant.h"

using namespace std;

int main()
{
    int n = 6;

    Personne *table_personne[n] = {nullptr};

    for(int i = 0; i < n; i++)
    {
        if(table_personne[i] == nullptr)
        {
            cout << endl << "Tableau[" << i << "] de personne est à nullptr" << endl;
        }
    }

    cout<< endl << "-----------------------" << endl;

    table_personne[0] = new Personne();
    table_personne[1] = new Personne("lamenace", "max", 35);
    table_personne[2] = new Employe("banner", "bruce", 42, 2000);
    table_personne[3] = new Employe("parker", "peter", 16, 1000);
    table_personne[4] = new Etudiant("murdock", "matt", 32, 10.50);
    table_personne[5] = new Etudiant("strange", "stephen", 45, 7.50);

    for(int i = 0; i < n; i++)
    {
        table_personne[i]->infos();
    }

    cout<< endl << "-----------------------" << endl;


    for(int i = 0; i < n; i++)
    {
        delete table_personne[i];
        table_personne[i] = nullptr;
    }



    return 0;
}
