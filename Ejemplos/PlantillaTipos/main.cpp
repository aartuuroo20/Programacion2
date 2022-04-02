#include <iostream>
#include <vector>
#include <ostream>
using namespace std;

struct Vect3{
    float x,y,z;
};

template <typename T, typename S>
T media(vector<S> const & v){
    T suma = 0;
    for(auto elem: v){
        suma += elem;
    }
    return suma/v.size();
}

template<>
Vect3 media(vector<Vect3> const & v){
    Vect3 result{0,0,0};
    for(auto elem: v){
        result.x += elem.x;
        result.y += elem.y;
        result.z += elem.z;
    }
    result.x /= v.size();
    result.y /= v.size();
    result.z /= v.size();

    return result;
}

ostream & operator << (ostream  & os, Vect3  c) {  //Mostrar
  os << c.x << " " << c.y << " " << c.z;
  return os;
}

int main()
{




    Vect3 a{1,2,3};
    Vect3 b{1,2,3};
    Vect3 c{3,4,5};

    vector<Vect3> v{a,b,c};

    auto m = media<Vect3, Vect3>(v);
    cout << m << endl;



}
