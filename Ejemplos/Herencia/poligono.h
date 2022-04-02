#ifndef POLIGONO_H
#define POLIGONO_H

#include "figura.h"

class Poligono : public Figura
{
public:
    Poligono(float lado, int numero_lados);
    void computeArea();

    float getPerimetro() const;
    float getApotema() const;

private:
    float lado;
    int numero_lados;


};

#endif // POLIGONO_H
