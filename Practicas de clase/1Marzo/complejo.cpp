#include "complejo.h"
#include <iostream>
#include <math.h>

using namespace std;

float Complejo::getReal() const
{
    return real;
}


float Complejo::getImaginaria() const
{
    return imaginaria;
}

void Complejo::add(const Complejo &other)
{
    real = real + other.real;
    imaginaria = imaginaria + other.imaginaria;
}



Complejo::Complejo()
{
    real=0;
    imaginaria = 0;
}

Complejo::Complejo(float real, float imaginaria)
{
    real=0;
    imaginaria=0;
}

void Complejo::print() const
{
    cout << real << " + " << imaginaria << "i\n";
}

float Complejo::modulo()
{
    return sqrt(real* real + imaginaria * imaginaria);
}

