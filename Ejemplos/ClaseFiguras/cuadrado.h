#ifndef CUADRADO_H
#define CUADRADO_H

class cuadrado {
  public:
    float getArea();
    float getPerimetro();
    void setLado (float l);
    void print();
  private:
    float lado;

};

#endif // CUADRADO_H
