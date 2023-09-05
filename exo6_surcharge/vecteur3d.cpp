#include "vecteur3d.h"

int Vecteur3D::nbVecteurs = 0;

Vecteur3D::Vecteur3D(float vx, float vy, float vz)
    :x(vx), y(vy), z(vz)
{
    //this->Setx(vx);
    //this->Sety(vy);
    //this->Setz(vz);
    Vecteur3D::nbVecteurs++;
}

Vecteur3D::~Vecteur3D()
{
    Vecteur3D::nbVecteurs--;
    cout << endl << "Destruction Vecteur3D " <<
                this->Getx();
}

void Vecteur3D::afficher() const
{
    cout << endl << "<" << Getx() << ", " <<
            Gety() << ", " << Getz() << ">" << endl;
}

Vecteur3D Vecteur3D::somme(const Vecteur3D& vAutre)
{
    Vecteur3D vRes;

    vRes.Setx(this->Getx() + vAutre.Getx());
    vRes.Sety(this->Gety() + vAutre.Gety());
    vRes.Setz(this->Getz() + vAutre.Getz());

    return vRes;
}

double Vecteur3D::prodScalaire(const Vecteur3D& v1,
                                Vecteur3D* const ptv2)
{
    double prod(0.0);

    prod = (v1.Getx()* ptv2->Getx()) +
            (v1.Gety()* (*ptv2).Gety()) +
            (v1.Getz()* ptv2->Getz());

    return prod;

}

int Vecteur3D::getNbVecteurs()
{
    return Vecteur3D::nbVecteurs;
}


double prodScalaire(const Vecteur3D& v1, Vecteur3D* const ptv2)
{
    double prod(0.0);

    prod = (v1.Getx()* ptv2->Getx()) +
            (v1.Gety()* (*ptv2).Gety()) +
            (v1.Getz()* ptv2->Getz());

    return prod;

}

//Surcharge opérateur +

Vecteur3D Vecteur3D::operator+(const Vecteur3D &vAutre)
{
    Vecteur3D vResult;

    vResult.Setx(this->Getx() + vAutre.Getx());
    vResult.Sety(this->Gety() + vAutre.Gety());
    vResult.Setz(this->Getz() + vAutre.Getz());

    return vResult;

}

//Surcharge opérateur *

double Vecteur3D::operator*(const Vecteur3D &vAutre)
{
    double produitScalaire = (this->Getx() * vAutre.Getx()) + (this->Gety() * vAutre.Gety()) + (this->Getz() * vAutre.Getz());

    return produitScalaire;
}


//Surcharge opérateur =
bool Vecteur3D::operator==(const Vecteur3D &vAutre)
{
    return this->Getx() == vAutre.Getx() &&
            this->Gety() == vAutre.Gety() &&
            this->Getz() == vAutre.Getz();
}


//Surcharge opérateur !=
bool Vecteur3D::operator!=(const Vecteur3D &vAutre)
{
    return !(*this == vAutre);
}


