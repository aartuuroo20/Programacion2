#ifndef CUBO_H
#define CUBO_H

#include "figura3d.h"

class Cubo : public Figura3D
{
public:
    Cubo();

    void computeVolumen();

protected:
    int cara;
    int aristas;
    int vertices;
};

#endif // CUBO_H
