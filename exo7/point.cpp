#include <iostream>

#include "point.h"

using namespace std;

Point::Point(const Point&)
{

}

Point::~Point()
{
    cout << "Destruction du point " << this->get_nom() << endl;
}

void Point::afficher()
{
    cout << "<" << this->nom << " : " << this->x << " , " <<this->y << " < " << endl;
}

void Point::change_valeur(float, float)
{

}

char Point::get_nom()
{

}

void Point::set_nom(char)
{

}
