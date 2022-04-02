#ifndef CIRCULO_H
#define CIRCULO_H


class circulo
{
public:
    circulo();
    float getarea();
    float getperimetro();

    float getRadio() const;
    void setRadio(float value);

private:
    float radio;
};

#endif // CIRCULO_H
