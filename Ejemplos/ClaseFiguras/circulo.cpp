#include "circulo.h"

circulo::circulo()
{

}

float circulo::getarea()
{
    return 3.14*radio*radio;

}

float circulo::getperimetro()
{
    return 3.14*radio*2;

}

float circulo::getRadio() const
{
    return radio;
}

void circulo::setRadio(float value)
{
   if(radio < 0) {
      radio = 0;
   }else{

       radio = value;
   }
}
