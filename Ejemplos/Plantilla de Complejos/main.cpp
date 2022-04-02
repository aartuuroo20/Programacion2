#include <iostream>
#include "compejo.h"
#include <ostream>

using namespace std;


template<typename T>

T suma(T const & a, T const & b){
    return a + b;
}

template<>
Complejo suma(Complejo const & a, Complejo const & b){
    float real = a.getReal() + b.getReal();
    float imaginario = a.getImaginario() + b.getImaginario();
    return Complejo{real, imaginario};
}

template<typename T>
T multiplicar(T const & a, T const & b){
    return a * b;
}

template<>
Complejo multiplicar(Complejo const & a, Complejo const & b){
    auto z = a.getReal() * b.getReal() - a.getImaginario() * b.getImaginario();
    auto y = a.getReal() * b.getImaginario() + a.getImaginario() * b.getReal();
    Complejo{z,y};
}

int main()
{
   cout << suma<int>(3,4) << endl;
   cout << suma<string>("hola ", "mundo" ) << endl;
   cout << suma<float>(3.4, 2.4) << endl;

   Complejo uno{1,2};
   Complejo dos{3,4};

   auto lasuma = suma<Complejo>(uno, dos);


   return 0;
}
