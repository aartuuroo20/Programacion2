#include "poligono.h"
#include <math.h>

Poligono::Poligono(float lado, int numero_lados): lado{lado}, numero_lados{numero_lados}
{
    std::cout << "Constructor de poligono " << "\n";
}

Poligono::~Poligono()
{
    std::cout << "Destructor de poligono " << "\n";
}

void Poligono::computeArea()
{
    area = getPerimetro() * getApotema() / 2;
}

float Poligono::getPerimetro() const
{
    return lado * numero_lados;
}

float Poligono::getApotema() const
{
    return lado / (2*std::tan(M_PI/numero_lados));
}
