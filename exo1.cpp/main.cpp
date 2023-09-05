#include <iostream>

using namespace std;

typedef struct
{
    char nom[21];
    double note;
    char obs;

}Eleve;


int main()
{
    int nbEleves = 5;
    Eleve classe[nbEleves];

    double total_notes = 0;
    double note_min = classe[0].note;
    double note_max = classe[0].note;


    //Pour chaque élève récupération des informations
    for(int i = 0; i < nbEleves; i++)
    {
        //Récupération du nom
        cout << "Donnez le nom de l'élève " << i +1 << " : ";
        cin >> classe[i].nom;

        //Récupération de la note et contrôle au dessus de 0 et en dessous 20 inclus
        do{
            cout << "Donnez la note de l'élève " << classe[i].nom << " : ";
            cin >> classe[i].note;
        } while(classe[i].note < 0 || classe[i].note > 20);

        //Observation en fonction de la note
        if(classe[i].note >=15)
        {
            classe[i].obs = 'A';
        }
        else if (classe[i].note >=10)
        {
            classe[i].obs = 'B';
        }
         else if (classe[i].note >=8)
        {
            classe[i].obs = 'C';
        }
         else if (classe[i].note >=0)
        {
            classe[i].obs = 'D';
        }
        else
        {
            classe[i].obs = 'E';
        }
    }

    //Affichage des informations pour chaque éléve
    for(int i = 0; i < nbEleves; i++)
    {
        total_notes = classe[i].note + 1;
        note_min = min(note_min, classe[i].note);
        note_max = max(note_max, classe[i].note);


       char admi = (classe[i].obs == 'A' || classe[i].obs == 'B') ? 'Y' : 'N';

        cout << "\nElève : " << classe[i].nom
        << "\nNote : " << classe[i].note
        << "\nObservation : " << classe[i].obs
        << "\nAdmission : " << admi
        << endl;
    }

    double moyenne = total_notes / nbEleves;
    cout << "Note la plus basse : " << note_min << endl;
    cout << "Note la plus haute : " << note_max << endl;
    cout << "Moyenne de la classe : " << moyenne << endl;



    return 0;
}



/*
On considère une classe de 5 Elèves. Pour chaque élève, sera saisi :

- son nom (20 caractères)

- sa note

- une observation de type caractère

- A : [15-20]

- B: [10-15[

- C: [8-10[

- D :]0-8[

- E : 0



Afficher

    pour chaque élève s’il est admis ou non avec son observation
    pour l'ensemble de la classe la note la plus élevée, la note le plus faible, la moyenne de la classe.

On vérifiera que la note saisie est comprise entre 0 et 20.

On utilisera une structure de Type Eleve (nom, note, obs).
*/
