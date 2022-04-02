#include "elipse.h"
#include <iostream>
#include <math.h>

Elipse::Elipse(float _semiejemayor, float _semiejemenor)
{
    if(_semiejemayor <=0|| _semiejemenor <=0) throw std::string{"Incorrect side or apotema"};
    semiejemayor = _semiejemayor;
    semiejemenor = _semiejemenor;
}

float Elipse::getArea() const
{
    return semiejemayor * semiejemenor * 3.14;
}

float Elipse::getPerimetro() const
{
    return 2*3.14 * sqrt((semiejemayor*semiejemayor+semiejemenor*semiejemenor)/2);
}

void Elipse::printInfo()
{
     cout << "ELipse " << endl;
}


