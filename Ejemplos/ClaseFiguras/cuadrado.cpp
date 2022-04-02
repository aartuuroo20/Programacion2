#include "cuadrado.h"
#include<iostream>
using namespace std;



void cuadrado::print() {

  cout << "Cuadrado de lados " << lado << "\n";
  cout << "Area: " << getArea() << "\n";
  cout << "Perimetro: " <<  getPerimetro() << "\n";
}

void cuadrado::setLado(float l) {
  if (l < 0) {
    lado = 0;
  }
  else {
    lado = l;
  }
}


float cuadrado::getArea() {
  return lado*lado;
}

float cuadrado::getPerimetro() {
  return 4*lado;
}
