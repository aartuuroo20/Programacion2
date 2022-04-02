#include "esfera.h"

Esfera::Esfera()
{

}

void Esfera::computeVolumen()
{
    volumen = 4 * 3.14 * radio * radio * radio / 3;
}

void Esfera::computeArea()
{
    area = 4 * 3.14 * radio * radio;
}
