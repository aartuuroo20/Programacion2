#ifndef COMPLEJO_H
#define COMPLEJO_H


class Complejo
{
public:
    Complejo();
    Complejo(float r, float i);

    float getReal() const;
    void setReal(float value);

    float getImaginaria() const;
    void setImaginaria(float value);

    void print();
    float modulo();

    void add(Complejo  const & other);

private:
    float real;
    float imaginaria;
};

#endif // COMPLEJO_H
