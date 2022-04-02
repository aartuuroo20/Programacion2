#ifndef FIGURAS_H
#define FIGURAS_H
#include <iostream>
using namespace std;

class Figuras
{
public:
    Figuras();
    virtual ~Figuras(){};

    virtual float getArea() const = 0;
    virtual float getPerimetro() const = 0;
    virtual  void printInfo() = 0;

};

#endif // FIGURAS_H
