#include "figura3d.h"

Figura3D::Figura3D()
{

}

float Figura3D::getArea() const
{
    return area;
}

void Figura3D::setArea(float value)
{
    area = value;
}

float Figura3D::getVolumen() const
{
    return volumen;
}

void Figura3D::setVolumen(float value)
{
    volumen = value;
}
