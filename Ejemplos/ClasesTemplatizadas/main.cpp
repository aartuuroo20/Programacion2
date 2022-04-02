#include <iostream>
#include <memory>

using namespace std;

struct Complejo{
    float real, im;
};

template <typename T, typename MOD>
class Vector3{
public:
    Vector3(T const & elem1, T const & elem2, T const & elem3);
    T getElem(int i) const; // SI esta templatizada al depender de T
    MOD modulo() const; //Devuelve un MOD
private:
    T elem1, elem2, elem3;
};

template <typename T, typename MOD>
MOD Vector3<T, MOD>::modulo() const{ //Modulo de un vector donde falta la raiz cuadrada
    return elem1*elem1 + elem2*elem2 + elem3*elem3;
}

template <>
Complejo Vector3<Complejo, Complejo>::modulo()const{

}

template <typename T, typename MOD>
Vector3<T, MOD>::Vector3(T const & elem1, T const & elem2, T const & elem3):elem1{elem1}, elem2{elem2}, elem3{elem3}{
}

template <typename T, typename MOD>
T  Vector3<T, MOD>::getElem(int i) const { //ESta templatizada al devolver T
    if(i==1) return elem1;
    if(i==2) return elem2;
    if(i==3) return elem3;
    throw string {"Out of bonds"};
}

int main(){
    //PAra declarar este vector tienes que declarar 2 tipos, de que es el vector y de que es el modulo
    Vector3<int, float> a{1,2,3};

    return 0;
}
