#ifndef TRIANGULO_H
#define TRIANGULO_H




class triangulo
{
public:
    triangulo();

    float getAltura() const;
    void setAltura(float value);

    float getBase() const;
    void setBase(float value);
    void print();

    float getLado1() const;
    void setLado1(float value);

    float getarea();
    float getperimetro();

private:
    float lado1;
    float altura;
    float base;

};

#endif // TRIANGULO_H
