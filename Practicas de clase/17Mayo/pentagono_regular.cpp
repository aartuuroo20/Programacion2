#include "pentagono_regular.h"
#include <iostream>

Pentagono_regular::Pentagono_regular(float _lado, float _apotema)
{

        if(_lado <=0|| _apotema <=0) throw std::string{"Incorrect side or apotema"};
        lado = _lado;
        apotema = _apotema;


}

float Pentagono_regular::getArea() const
{
    return getPerimetro() * apotema /2;
}

float Pentagono_regular::getPerimetro() const
{
    return lado * 5;
}

void Pentagono_regular::printInfo()
{
     cout << "pentagono " << endl;
}

