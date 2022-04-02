#include <iostream>
#include "matriz2.h"
#include "vector3.h"
using namespace std;

template<typename T>
T suma(T const & a, T const & b){
    return a + b;
}

template<>
Matriz2 suma(Matriz2 const & a, Matriz2 const & b){
    Matriz2 result;
    for(int fila{0}; fila <2 ; fila++){
        for(int cola=0; cola < 2; cola ++){
            result.set(fila, cola, a.get(fila,cola) + b.get(fila,cola));

        }
    }
    return result;
}

template<>
Vector3 suma(Vector3 const & c1, Vector3 const & c2){
    Vector3 result{c1.getX() + c2.getX(), c1.getY() + c2.getY(), c1.getZ()+ c2.getZ()};
    return result;
}


template<typename T>
T resta(T const & a, T const & b){
    return a - b;
}
template<>
Matriz2 resta(Matriz2 const & a, Matriz2 const & b){
    Matriz2 result;
    for(int fila{0}; fila <2 ; fila++){
        for(int cola=0; cola < 2; cola ++){
            result.set(fila, cola, a.get(fila,cola) - b.get(fila,cola));

        }
    }
    return result;
}

template<>
Vector3 resta(Vector3 const & c1, Vector3 const & c2){
    Vector3 result{c1.getX() - c2.getX(), c1.getY() - c2.getY(), c1.getZ() - c2.getZ()};
    return result;
}

template<typename T>
T multiplicar(T const & a, T const & b){
    return a * b;
}
template<>
Matriz2 multiplicar(Matriz2 const & a, Matriz2 const & b){
    Matriz2 result;

}

float multiplicar(Vector3 const & c1, Vector3 const & c2){
    float result{c1.getX()*c2.getX() + c1.getY()*c2.getY() + c1.getZ()*c2.getZ()};
    return result;
}


int main()
{

}
