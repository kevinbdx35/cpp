#include <iostream>
#include "eleve.h"

using namespace std;

int main()
{
    Eleve obj_eleve;

    obj_eleve.init("toto", 16.00f);

    obj_eleve.afficher();


    return 0;
}
