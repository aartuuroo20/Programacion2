#include "numeropositivo.h"
#include <string>
using namespace std;

NumeroPositivo::NumeroPositivo(float n)
{
    setNum(n);
}

float NumeroPositivo::getNum() const
{
    return num;
}

void NumeroPositivo::setNum(float value)
{
    if(value <= 0) throw string{"El numero tiene que ser positivo"};
    num = value;
}

float NumeroPositivo::divideBy(float other)
{
    if(other == 0) throw string {"No se puede dividir entre 0"};
    if(other < 0) throw  string{"No se puede dividir entre un numero negativo"};
    num /= other;
    return num;
}

float NumeroPositivo::multipyBy(float other)
{
    if(other <= 0) throw string{"No se puede multiplicar por 0 o un numero inferio"};
    num *= other;
    return num;
}

float NumeroPositivo::add(float other)
{
    float aux = num + other;
    if(aux <= 0) throw string{"El resultado no puede ser menor que un numero positvio"};
    num = aux;
    return num;
}
