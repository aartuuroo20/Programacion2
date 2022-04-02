#include "compejo.h"
#include <iostream>
#include <cmath>

using namespace std;
float Complejo::getReal() const
{
    return a;
}

void Complejo::setReal(float value)
{
    this -> a = value;
}

float Complejo::getImaginario() const
{
    return b;
}

void Complejo::setImaginario(float value)
{
    this -> b = value;
}
Complejo::Complejo()
{
    a=0;
    b=0;
}


Complejo::Complejo(float na, float nb)
{
    a=na;
    b=nb;
}
Complejo operator+ (Complejo const & a, Complejo const & b) {
    float real = a.getReal() + b.getReal();
    float imaginario = a.getImaginario() + b.getImaginario();
    return Complejo{real, imaginario};
}
Complejo operator* (Complejo const & c1, Complejo const & c2) {
  Complejo result {c1.a * c2.a -c1.b * c2.b, c1.a * c2.a + c1.b * c2.a};
  return result;
}
