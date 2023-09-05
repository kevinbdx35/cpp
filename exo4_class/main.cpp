#include <iostream>
#include "compte.h"

using namespace std;

int main()
{
    int credit = 0;
    int debit = 0;

    //Modification du solde découvert authorisé
    cout << "Découvert authorisé actuel : " << Compte::obtenir_decouvert()<< endl;
    Compte::modifier_decouvert(420);
    cout << "Découvert authorisé actuel : " << Compte::obtenir_decouvert()<< endl;


    //Objet Dynamique
    Compte *obj_dyn = nullptr;

    //Instancie la classe Compte, création d'un Objet
    obj_dyn = new Compte("123456", 56);

    obj_dyn->afficher();


    //Créditer le compte du montant choisi par le propriétaire
    cout << "Quel montant souhaitez-vous déposer sur ton compte " << obj_dyn->Compte::get_number() <<" : " << endl;
    cin >> credit;
    obj_dyn->Compte::credit(credit);
    cout << "Votre nouveau solde est de : " << obj_dyn->Compte::get_solde() << endl << endl;


    //Débiter le compte du montant choisi par le propritaire
    cout << "Vous souhaitez retirer de l'argent sur le compte : " << obj_dyn->Compte::get_number() << endl;
    cout << "Votre solde est de : " << obj_dyn->Compte::get_solde() << endl;
    //cout << "Quel montant souhaitez vous retirer : " << end;
    cin >> debit;
    if (obj_dyn->Compte::debit(debit))
    {

    }
    else
    {
        cout << "Vos fonds sont insuffisants !!!!" << endl;
    };
    cout << "Votre nouveau solde est de : " << obj_dyn->Compte::get_solde() << endl << endl;




    cout << "Nb compte : " << Compte::get_nbcompte() << endl;

    if (obj_dyn != nullptr)
    {
        delete obj_dyn;
        obj_dyn = nullptr;
    }

    cout << "Nb compte : " << Compte::get_nbcompte() << endl;
    cout << endl << "Fin du main !!!!" << endl;

    return 0;
}
