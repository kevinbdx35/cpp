#include <iostream>
#include "vecteur3d.h"

using namespace std;

int main()
{
    cout << endl << "Nb Vecteurs " << Vecteur3D::getNbVecteurs();


    Vecteur3D v1(5, -5, 15);
    v1.afficher();

    Vecteur3D v2(10, 20, 0);
    v2.afficher();

    cout << endl << "Nb Vecteurs " << Vecteur3D::getNbVecteurs();

    const Vecteur3D v3(30, 15, -20);
    v3.afficher();

    //Test surcharge operateur +
    Vecteur3D res = v2 + v1;
    res.afficher();

     //Test surcharge operateur *
    double prod = v1 * v2;
    cout << "Scalaire : " << prod << endl;



     //Test surcharge operateur =
     cout << endl << boolalpha << "v1 == v2 " << (v1==v2);
     cout << endl << boolalpha << "v1 != v2 " << (v1!=v2);


    return 0;
}
