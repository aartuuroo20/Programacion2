#include "cuadrado.h"
using namespace std;
#include <iostream>


Cuadrado::Cuadrado(float _lado)
{
    if(_lado <=0) throw std::string{"Incorrect side length"};
    lado = _lado;
}

float Cuadrado::getArea() const
{
    return lado*lado;
}

float Cuadrado::getPerimetro() const
{
    return 4*lado;
}

void Cuadrado::printInfo()
{
     cout << "Cuadrado " << endl;
}

