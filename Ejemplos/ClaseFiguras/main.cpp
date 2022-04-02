#include <iostream>
#include "cuadrado.h"
#include "circulo.h"
using namespace std;
#include "triangulo.h"





int main() {
    cuadrado miCuadrado;

    cout << "Introduzca lado del cuadrado: ";
    int l1; cin >> l1;
    miCuadrado.setLado(l1);

    cout << "Area del cuadrado: " << miCuadrado.getArea() << "\n";
    cout << "Perimetro del cuadrado: " << miCuadrado.getPerimetro() << "\n";

    circulo uncirculo;

    cout << "Introduzca radio: ";
    int r; cin >> r;
    uncirculo.setRadio(r);

    cout << "Area del circulo: " << uncirculo.getarea() << "\n";
    cout << "Perimetro del circulo: " << uncirculo.getperimetro() << "\n";

    triangulo mitriangulo;

    cout << "Introduce lado del triangulo: ";
    cout << "\n";
    int l2; cin >> l2;
    mitriangulo.setLado1(l1);
    cout << "Introduce base del triangulo: ";
    cout << "\n";
    int b; cin >> b;
    mitriangulo.setBase(b);
    cout << "Introduce altura del triangulo: ";
    cout << "\n";
    int a; cin >> a;
    mitriangulo.setAltura(a);

    cout << "Area del triangulo: " << mitriangulo.getarea() << "\n";
    cout << "Perimetro del triangulo: " << mitriangulo.getperimetro() << "\n";






}
