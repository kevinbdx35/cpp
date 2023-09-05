#include <iostream>

using namespace std;

typedef struct
{
    int a;
    float b;

}essai;

 // RAZ en adresse
    void raz (essai *pointer)
    {
        pointer->a = 0;
        pointer->b = 0.0f;
    }

    //RAZ en référence
    void raz (essai &refer)
    {
        refer.a = 0;
        refer.b = 0.0f;
    }

int main()
{
   essai test;
   test.a = 10;
   test.b = 5.5f;

   //Affichage des valeurs avant le RAZ
   cout << "Voici les valeurs avant le RAZ : \n"
        << "l'entier a : " << test.a << endl
        << "le réel b : " << test.b << endl << endl;

    //Appel de la fonction RAZ par adresse
    raz(&test);

    cout << "Voici les valeurs après le RAZ par adresse : \n"
         << "l'entier a : " << test.a << endl
         << "le réel b : " << test.b << endl << endl;

    //On remet les valeurs
    test.a = 12;
    test.b = 4.5f;

    //Affichage des valeurs avant le RAZ
   cout << "Voici les valeurs avant le RAZ : \n"
        << "l'entier a : " << test.a << endl
        << "le réel b : " << test.b << endl << endl;


    //Appel de la fonction RAZ par référence
    raz(test);

    cout << "Voici les valeurs après le RAZ par adresse : \n"
         << "l'entier a : " << test.a << endl
         << "le réel b : " << test.b << endl << endl;

    return 0;

}


/*
Soit le modèle de structure suivant :

struct essai

{

int n ;

float x ;

} ;



Écrire une fonction nommée raz permettant de remettre à zéro les 2 champs d’une structure de ce type transmise en argument :

    par adresse
    par référence

Dans les deux cas, on écrira un petit programme d’essai de la fonction ; il affichera les valeurs d’une structure de ce type, après appel de ladite fonction.

*/
