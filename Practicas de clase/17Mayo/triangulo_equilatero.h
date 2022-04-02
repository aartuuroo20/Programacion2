#ifndef TRIANGULO_EQUILATERO_H
#define TRIANGULO_EQUILATERO_H

#include "figuras.h"
#include <iostream>
using namespace std;
class Triangulo_equilatero : public Figuras
{
public:
    Triangulo_equilatero(float _lado, float _altura);
    float getArea() const;
    float getPerimetro() const;
     void printInfo();
private:
    float lado;
    float altura;
};

#endif // TRIANGULO_EQUILATERO_H
