#ifndef CUADRADO_H
#define CUADRADO_H

#include "figuras.h"
#include <iostream>
using namespace std;
class Cuadrado : public Figuras
{
public:
    Cuadrado(float _lado);
    float getArea() const;
    float getPerimetro() const;
     void printInfo();



private:
    float lado;
};

#endif // CUADRADO_H
