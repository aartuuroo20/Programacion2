#include "triangulo_equilatero.h"
#include <iostream>



float Triangulo_equilatero::getArea() const
{
    return lado * altura  / 2;
}

float Triangulo_equilatero::getPerimetro() const
{
    return 3 * lado;
}

void Triangulo_equilatero::printInfo()
{
     cout << "triangulo " << endl;
}



Triangulo_equilatero::Triangulo_equilatero(float _lado, float _altura)
{
    if(_lado <=0|| _altura <=0) throw std::string{"Incorrect side or altura"};
    lado = _lado;
    altura = _altura;

}
