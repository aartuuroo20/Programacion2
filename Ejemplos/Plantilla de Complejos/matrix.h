#ifndef MATRIX_H
#define MATRIX_H
#include <array>
using namespace std;
#include <iostream>
#include <memory>
#include <istream>


class Matrix
{
    friend ostream &  operator <<(ostream & os, Matrix const & a); //MOstrar
    friend istream & operator >> (istream & is, Matrix a); //Introducir
public:
    Matrix();
    Matrix(array<int, 9> data);

    int get(int row, int col) const;
    void set(int row, int col, float value);

    void print() const;


private:
array<array<int, 3>, 3> data;
};

shared_ptr<Matrix> add(shared_ptr<Matrix> a, shared_ptr<Matrix> b);

Matrix operator+(const Matrix a,const Matrix b);
#endif // MATRIX_H
