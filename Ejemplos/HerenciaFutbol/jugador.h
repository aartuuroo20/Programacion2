#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>

class Jugador
{
public:
    Jugador();
    virtual ~Jugador();

    virtual void chutar() const;
};

#endif // JUGADOR_H
