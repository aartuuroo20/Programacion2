#ifndef POLIEDROREGULAR_H
#define POLIEDROREGULAR_H

#include "figura3d.h"

class PoliedroRegular : public Figura3D
{
public:
    PoliedroRegular();

protected:
    int cara;
    int vertice;
    int aristas;
};

#endif // POLIEDROREGULAR_H
