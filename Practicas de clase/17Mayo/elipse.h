#ifndef ELIPSE_H
#define ELIPSE_H

#include "figuras.h"
#include <iostream>
using namespace std;

class Elipse : public Figuras
{
public:
    Elipse(float _semiejemayor, float _semiejemenor);
    float getArea() const;
    float getPerimetro() const;
     void printInfo();

private:
    float semiejemayor;
    float semiejemenor;
};

#endif // ELIPSE_H
