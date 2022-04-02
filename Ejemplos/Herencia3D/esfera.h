#ifndef ESFERA_H
#define ESFERA_H

#include "figura3d.h"

class Esfera : public Figura3D
{
public:
    Esfera();

    void computeVolumen();
    void computeArea();

protected:
    float radio;


};

#endif // ESFERA_H
