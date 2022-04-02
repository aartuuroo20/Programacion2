 #include "matriz2.h"

Matriz2::Matriz2()
{
    for(int fila{0}; fila <3 ; fila++){
            for(int cola=0; cola < 3; cola ++){
                data.at(fila).at(cola) = 0;
            }

        }
}

Matriz2::Matriz2(const array<float, 4> &p)
{
    int indice = 0;
       for(int fila{0}; fila <2 ; fila++){
           for(int cola=0; cola < 2; cola ++){
               data.at(fila).at(cola) = p.at(indice);
               indice++;
           }

       }
}
float Matriz2::get(int row, int col) const
{
    if(row < 0 || row > 2|| col < 0 || col >2 ) throw string{"out of bonds"};
    return data.at(row).at(col);
}

void Matriz2::set(int row, int col, float value)
{
    if(row < 0 || row > 2 || col < 0 || col > 2) throw string {"out of bonds"};
    data.at(row).at(col) = value;
}
Matriz2 operator+(const Matriz2 & a, const Matriz2 b){
    Matriz2 result;
    for(int fila{0}; fila <2 ; fila++){
        for(int cola=0; cola < 2; cola ++){
            result.set(fila, cola, a.get(fila,cola) + b.get(fila,cola));

        }
    }
    return result;

}
Matriz2 operator-(const Matriz2 & a, const Matriz2 b){
    Matriz2 result;
    for(int fila{0}; fila <2 ; fila++){
        for(int cola=0; cola < 2; cola ++){
            result.set(fila, cola, a.get(fila,cola) - b.get(fila,cola));

        }
    }
    return result;

}
Matriz2 operator*(const Matriz2 & a, const Matriz2 b){

}

