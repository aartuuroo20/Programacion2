#ifndef FIGURA3D_H
#define FIGURA3D_H


class Figura3D
{
public:
    Figura3D();

    float getArea() const;
    void setArea(float value);

    float getVolumen() const;
    void setVolumen(float value);

protected:
    float area;
    float volumen;
};

#endif // FIGURA3D_H
