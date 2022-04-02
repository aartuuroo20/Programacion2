#ifndef JUGADOR_H
#define JUGADOR_H
#include "bolsa.h"

class Jugador
{
public:
       Jugador();



       bool getPlantado() const;
       void setPlantado(bool value);

       int getApuesta() const;
       void setApuesta(int value);

       int getPuntos() const;
       void setPuntos(int value);

protected:
       int apuesta;
       int puntos;
       bool plantado;

};

#endif // JUGADOR_H
