#include "complejo.h"
#include <iostream>
#include <math.h>
using namespace std;

Complejo::Complejo()
{
    real=0;
    imaginaria=0;
}

Complejo::Complejo(float r, float i)
{
    real = r;
    imaginaria = i;
}

float Complejo::getReal() const
{
    return real;
}

void Complejo::setReal(float value)
{
    real = value;
}

float Complejo::getImaginaria() const
{
    return imaginaria;
}

void Complejo::setImaginaria(float value)
{
    imaginaria = value;
}

void Complejo::print()
{
    cout << real << " + " << imaginaria << "i\n";
}

float Complejo::modulo()
{
    return sqrt(real* real + imaginaria * imaginaria);
}

void Complejo::add(const Complejo &other)
{
    real = real + other.real;
    imaginaria = imaginaria + other.imaginaria;
}
