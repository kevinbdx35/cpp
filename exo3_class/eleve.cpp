#include <iostream>
#include <cstring>
#include "eleve.h"

using namespace std;

//Initialisation
void Eleve::init(char *v_nom, float v_note)
{
    set_nom(v_nom);
    set_note(v_note);
}


//Afficher les informations
void Eleve::afficher()
{
    cout << "\nEleve : " << get_nom() << endl
        << "Note : " << get_note() << endl
        << "Mention : " << mention() << endl;


}

//Traitement de la mention
char  *Eleve::mention()
{
    char *mention = new char[20];
        if (note >= 16) {
            strcpy(mention, "TB");
        } else if (note >= 14) {
            strcpy(mention, "B");
        } else if (note >= 12) {
            strcpy(mention, "AB");
        } else if (note >= 10) {
            strcpy(mention, "Passable");
        } else if (note >= 8) {
            strcpy(mention, "Rattrapage");
        } else {
            strcpy(mention, "Echec");
        }

    return mention;
}



//GET /SET

//NOM
char *Eleve::get_nom()
{
    return nom;
}

void Eleve::set_nom(char *v_nom)
{
   strncpy(nom, v_nom, 30);

}

//NOTE
float Eleve::get_note()
{
    return note;
}


void Eleve::set_note(float v_note)
{
   note = -1;
   if(v_note >= 0 && v_note <= 20)
   {
        note = v_note;
   }
}


