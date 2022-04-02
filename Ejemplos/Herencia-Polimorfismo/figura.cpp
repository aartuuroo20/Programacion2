#include "figura.h"

Figura::Figura()
{
    std::cout << "Constructor de figura " << "\n";
}

Figura::~Figura()
{
    std::cout << "Destructor de figura " << "\n";
}


float Figura::getArea() const
{
    return area;
}

