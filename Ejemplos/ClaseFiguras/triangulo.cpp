#include "triangulo.h"

triangulo::triangulo()
{

}

float triangulo::getLado1() const
{
    return lado1;
}

float triangulo::getAltura() const
{
    return altura;
}

void triangulo::setAltura(float value)
{
    if(altura < 0) {
       altura = 0;
    }else{

        altura = value;
    }
}

float triangulo::getBase() const
{
    return base;
}

void triangulo::setBase(float value)
{
    if(base < 0) {
       base = 0;
    }else{

        base = value;
    }
}


void triangulo::setLado1(float value)
{
    if(lado1 < 0) {
       lado1 = 0;
    }else{

        lado1 = value;
    }
}

float triangulo::getarea()
{
   return (base*altura)/2;
}

float triangulo::getperimetro()
{
    return base+lado1+lado1;
}
