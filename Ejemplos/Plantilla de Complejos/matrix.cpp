#include "matrix.h"

Matrix::Matrix()
{
    for(int fila{0}; fila <3; fila++){
        for(int col{0}; col < 3; col++){
            data.at(fila).at(col)=0;
        }
    }
}

Matrix::Matrix(array<int,9> a)
{
    int indice = 0;
    for(int fila{0}; fila <3; fila++){
        for(int col{0}; col < 3; col++){
            data.at(fila).at(col) = a.at(indice);
            indice++;
        }
    }
}

int Matrix::get(int row, int col) const
{
    if(row < 0 || row > 2|| col < 0 || col >2 ) throw string{"out of bonds"};
       return data.at(row).at(col);
}

void Matrix::set(int row, int col, float value)
{
    if(row < 0 || row > 2 || col < 0 || col > 2) throw string {"out of bonds"};
    data.at(row).at(col) = value;
}

void Matrix::print() const
{
    for(int fila{0}; fila <3; fila++){
        for(int col{0}; col < 3; col++){
            cout << data.at(fila).at(col);

        }
        cout << "\n";
    }
}

shared_ptr<Matrix> add(shared_ptr<Matrix> a, shared_ptr<Matrix> b)
{
    auto result = make_shared<Matrix>();
    for(int fila{0}; fila <3; fila++){
        for(int col{0}; col < 3; col++){
            result->set(fila, col, a->get(fila, col) + b->get(fila,col));

        }
       }
        return result;
}

Matrix operator+(const Matrix a, const Matrix b)
{
    Matrix result;
    for(int fila{0}; fila <3; fila++){
        for(int col{0}; col < 3; col++){
            result.set(fila, col, a.get(fila, col) + b.get(fila,col));


       }
    }

}

ostream &operator <<(ostream &os, const Matrix &a)
{
    for(int fila{0}; fila <3; fila++){
        for(int col{0}; col < 3; col++){
          os << a.data.at(fila).at(col) << "-";


       }
        cout << "\n";
    }
    return os;
}
istream & operator >> (istream & is, Matrix a){
    for(int fila{0}; fila <3 ; fila++){
        for(int cola=0; cola < 3; cola ++){
            is >> a.data.at(fila).at(cola);
        }
    }
    return is;
}
