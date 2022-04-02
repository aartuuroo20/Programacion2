#include "circulo.h"
#include <iostream>

Circulo::Circulo(float _radio)
{
    if(_radio <=0) throw std::string{"Incorrect radio"};
       radio = _radio;

}

float Circulo::getPerimetro() const
{
    return 2 * 3.14 * radio;
}

float Circulo::getArea() const
{
    return 2 * 3.14 * radio * radio;
}

void Circulo::printInfo()
{
    cout << "Circulo " << endl;
}


