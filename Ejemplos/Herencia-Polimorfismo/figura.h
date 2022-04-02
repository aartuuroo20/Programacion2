#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>

class Figura
{
public:
    Figura();
    virtual ~Figura();

    float getArea() const;
    virtual void computeArea() = 0;


protected:
    float area;

};

#endif // FIGURA_H
