#ifndef COMPEJO_H
#define COMPEJO_H


#include <string>
#include <iostream>
using namespace std;



class Complejo
{
private:
    friend Complejo operator+ (Complejo const & c1, Complejo const & c2);
    friend Complejo operator* (Complejo const & c1, Complejo const & c2);

    float a;
    float b;

public:

    Complejo();
    Complejo(float a , float b);

    float getReal() const;
    void setReal(float value);

    float getImaginario() const;
    void setImaginario(float value);
};

#endif // COMPEJO_H
