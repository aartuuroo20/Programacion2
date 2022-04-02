#include <iostream>
using namespace std;
#include<vector>
#include "censo.h"
#include <memory>
#include <string>
#include "complejo.h"

Complejo add(Complejo const & c1, Complejo const & c2){
    float real = c1.getReal() + c2.getReal();
    float imaginario = c1.getImaginaria() + c2.getImaginaria();

    Complejo r{real, imaginario};

    return r;
}


int main()
{










}


