#ifndef COMPLEJO_H
#define COMPLEJO_H


class Complejo
{
private:

    float real;
    float imaginaria;

public:

    Complejo();
    Complejo(float real , float imaginaria);

    void print() const;
    float modulo();

    float getReal() const;


    float getImaginaria() const;

    void add(Complejo  const & other);

};

#endif // COMPLEJO_H
