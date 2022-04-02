#include <iostream>
#include "poligono.h"

using namespace std;

int main()
{
    Poligono miCuadrado(5,4);
    miCuadrado.computeArea();
    cout << miCuadrado.getArea() << endl;

}
