#include "matrix.h"

matrix::matrix(int _cols, int _rows)
{
    if(_cols <= 0||_rows <= 0){
        throw string{"Dimesiones incorrectas"};
    }
    cols = unsigned(_cols);
    rows = unsigned(_rows);
    data.resize(cols*rows,0);
}

unsigned int matrix::getCols() const
{
    return cols;
}

unsigned int matrix::getRows() const
{
    return rows;
}

float &matrix::at(unsigned i, unsigned j)
{
    if(i >= rows||j >= cols){
        throw string{"Fuera de los limites de la matriz"};
    }
    unsigned elem = i*cols + j;
    return data.at(elem);
}

std::ostream &operator <<(std::ostream &os, matrix &mat){
    for(unsigned i=0; i < mat.getRows(); i++){
        for(unsigned j=0; j < mat.getCols(); j++){
            os << mat.at(i,j) << "\t";
        }
        os << endl;
    }
    return os;
}

std::istream &operator >>(std::istream &is, matrix &mat){
    for(unsigned i=0; i<mat.getRows(); i++){
        for(unsigned j=0; j<mat.getCols(); j++){
            is >> mat.at(i,j);
        }
    }
    return is;
}

matrix operator*(matrix & a, matrix & b){
    if(a.getCols() != b.getRows()) throw std::string{"Tamaños no compatibles"};
    matrix result(int(a.getRows()), int(b.getCols()));

    for(unsigned i{0}; i<result.getRows(); i++){
        for(unsigned j{0}; j<result.getCols(); j++){
            float aux{0};
            for(unsigned k{0}; k<a.getCols(); k++){
                aux += a.at(i,k)*b.at(k,j);
            }
            result.at(i,j) = aux;
        }
    }
    return result;
}

matrix operator+(matrix & a, matrix & b){
    if(a.getCols() != b.getCols() || a.getRows() != b.getRows()) throw std::string{"Los tamaños no coinciden"};
    matrix result(int(a.getRows()), int(a.getCols()));

    for(unsigned i{0}; i<a.getRows(); i++){
        for(unsigned j{0}; j<a.getCols(); j++){
            result.at(i,j) = a.at(i,j) + b.at(i,j);
        }
    }
    return result;
}

matrix operator-(matrix & a, matrix & b){
    if(a.getCols() != b.getCols() || a.getRows() != b.getRows()) throw std::string{"Los tamaños no coinciden"};
    matrix result(int(a.getRows()), int(a.getCols()));

    for(unsigned i{0}; i<a.getRows(); i++){
        for(unsigned j{0}; j<a.getCols(); j++){
            result.at(i,j) = a.at(i,j) - b.at(i,j);
        }
    }
    return result;
}

