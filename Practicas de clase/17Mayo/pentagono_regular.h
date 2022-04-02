#ifndef PENTAGONO_REGULAR_H
#define PENTAGONO_REGULAR_H

#include "figuras.h"
#include <iostream>
using namespace std;
class Pentagono_regular : public Figuras
{
public:
    Pentagono_regular(float _lado, float _apotema);
    float getArea() const;
    float getPerimetro() const;
     void printInfo();

private:
    float lado;
    float apotema;
};

#endif // PENTAGONO_REGULAR_H
