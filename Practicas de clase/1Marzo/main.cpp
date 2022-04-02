#include <iostream>
#include "complejo.h"
using namespace std;
#include <memory>

Complejo add(Complejo const & c1, Complejo const & c2){
    float real = c1.getReal() + c2.getReal();
    float imaginario = c1.getImaginaria() + c2.getImaginaria();

    Complejo r{real, imaginario};

    return r;
}

int main()
{

    //Complejo minumero{3,4};


    float real, imagianario;
    cout << "Introduce parte real e imaginaria separados por espacio: ";
    cin >> real >> imagianario;

    Complejo comp{real, imagianario};
    comp.print();




}
