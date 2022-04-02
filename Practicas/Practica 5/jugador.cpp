#include "jugador.h"
#include "bolsa.h"

Jugador::Jugador()
{
    plantado = false;
    puntos = 0;
    apuesta = 0;
}

bool Jugador::getPlantado() const
{
    return plantado;
}

void Jugador::setPlantado(bool value)
{
    plantado = value;
}

int Jugador::getApuesta() const
{
    return apuesta;
}

void Jugador::setApuesta(int value)
{
    apuesta = value;
}

int Jugador::getPuntos() const
{
    return puntos;
}

void Jugador::setPuntos(int value)
{
    puntos = value;
}
