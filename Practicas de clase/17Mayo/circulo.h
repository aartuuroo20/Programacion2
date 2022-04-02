#ifndef CIRCULO_H
#define CIRCULO_H

#include "figuras.h"
#include <iostream>
using namespace std;
class Circulo : public Figuras
{
public:
    Circulo(float _radio);
    float getPerimetro() const;
    float getArea() const;
    void printInfo();


private:
    float radio;
};

#endif // CIRCULO_H
