#include "matriz3x3.h"
#include <array>
#include <iostream>
using namespace std;


Matriz3x3::Matriz3x3()
{
    for(int fila{0}; fila <3 ; fila++){
        for(int cola=0; cola < 3; cola ++){
            data.at(fila).at(cola) = 0;
        }

    }
}

Matriz3x3::Matriz3x3(const array<float, 9> & p)
{
    int indice = 0;
    for(int fila{0}; fila <3 ; fila++){
        for(int cola=0; cola < 3; cola ++){
            data.at(fila).at(cola) = p.at(indice);
            indice++;
        }

    }

}

void Matriz3x3::print() const
{
    for(int fila{0}; fila <3 ; fila++){
        for(int cola=0; cola < 3; cola ++){
            cout << data.at(fila).at(cola);

        }
        cout << "\n";

    }
}

float Matriz3x3::determinante() const
{
    return 9; //POner el determiante
}

float Matriz3x3::get(int row, int col) const
{
    if(row < 0 || row > 2|| col < 0 || col >2 ) throw string{"out of bonds"};
    return data.at(row).at(col);
}

void Matriz3x3::set(int row, int col, float value)
{
    if(row < 0 || row > 2 || col < 0 || col > 2) throw string {"out of bonds"};
    data.at(row).at(col) = value;
}

ostream &  operator <<(ostream & os, Matriz3x3 const & a){
    for(int fila{0}; fila <3 ; fila++){
        for(int cola=0; cola < 3; cola ++){
            os << a.data.at(fila).at(cola);

        }
        os << "\n";

    }
    return os;
}

istream & operator >> (istream & is, Matriz3x3 a){
    for(int fila{0}; fila <3 ; fila++){
        for(int cola=0; cola < 3; cola ++){
            is >> a.data.at(fila).at(cola);
        }
    }
    return is;
}


shared_ptr<Matriz3x3> add(const shared_ptr<Matriz3x3> a, const shared_ptr<Matriz3x3> b)
{
    auto result = make_shared<Matriz3x3>();
    for(int fila{0}; fila <3 ; fila++){
        for(int cola=0; cola < 3; cola ++){
            result->set(fila, cola, a->get(fila,cola) + b->get(fila,cola));

        }


    }
    return result;
}

Matriz3x3 operator+(const Matriz3x3 & a, const Matriz3x3 b){
    Matriz3x3 result;
    for(int fila{0}; fila <3 ; fila++){
        for(int cola=0; cola < 3; cola ++){
            result.set(fila, cola, a.get(fila,cola) + b.get(fila,cola));

        }
    }
    return result;

}
