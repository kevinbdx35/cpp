#include <iostream>

#include "vecteur.h"

using namespace std;
int Vecteur::nb_vecteurs = 0;
float Vecteur::prodScalaire = 0;

Vecteur::Vecteur(float x, float y, float z)
{
    Setx(x);
    Sety(y);
    Setz(z);

    Vecteur::nb_vecteurs++;
}

Vecteur::~Vecteur()
{
    cout << endl << "Destruction de "<<
        this->get_nb_vecteurs() << endl;
    Vecteur::nb_vecteurs--;
}

void Vecteur::afficher() const
{
    cout << endl << "Les 3 composants du vecteurs sont : " << endl;
    cout << "< " << Getx()
        << ", "
        << Gety()
        <<", "
        << Getz()
        << " >"
        << endl;
}


//Methode de classe
int Vecteur::get_nb_vecteurs()
{
    return Vecteur::nb_vecteurs;
}

//void Vecteur::somme(const Vecteur &v1, const Vecteur &v2)
//{
//    float x = v1.Getx() + v2.Getx();
//    float y = v1.Gety() + v2.Gety();
//    float z = v1.Getz() + v2.Getz();

//    return Vecteur(x, y, z);

//}


double Vecteur::prd_scalaire()
{

}
