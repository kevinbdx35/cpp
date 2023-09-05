#include "compte.h"

//Initialiser l'attribut de la classe
int Compte::montant_decouvert = 500;
int Compte::nbcompte = 0;

Compte::Compte(string number, float solde)
{
    this->number = number;
    this->solde = solde;

    Compte::nbcompte++;

}

Compte::~Compte()
{
    cout << endl << "Destruction de "<<
            this->get_number() << endl;
    Compte::nbcompte--;
}

void Compte::afficher()
{
    cout  << endl << "Numéro de compte : " << this->get_number();
    cout  << endl << "Le solde est de : " << this->get_solde();

    cout << endl << "-------------------" << endl;
}

void Compte::credit(float credit)
{
    solde = solde + credit;
}

bool Compte::debit(float debit)
{
    if(debit > solde)
    {
        return true;
    }
}

void Compte::set_number(string number)
{
    this->number = number;
}

string Compte::get_number()
{
    return this->number;
}

void Compte::set_solde(float solde)
{
    this->solde = solde;
}

float Compte::get_solde()
{
    return solde;
}


//Methode de classe
void Compte::modifier_decouvert(int newDecouvert)
{
    Compte::montant_decouvert = newDecouvert;
}

int Compte::obtenir_decouvert()
{
    return Compte::montant_decouvert;
}

int Compte::get_nbcompte()
{
    return Compte::nbcompte;
}

