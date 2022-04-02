#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>
using namespace std;

class Matriz
{
public:
    Matriz(int _cols, int _rows);

    unsigned int getCols() const;
    void setCols(unsigned int value);

    unsigned int getRows() const;
    void setRows(unsigned int value);

    float & at(unsigned i, unsigned j);

private:
    unsigned int cols;
    unsigned int rows;
    vector<float> data;
};

std::ostream &operator <<(std::ostream &os, Matriz &mat);
std::istream &operator >>(std::istream &is, Matriz &mat);

Matriz operator*(Matriz & a, Matriz & b);
Matriz operator+(Matriz & a, Matriz & b);
Matriz operator-(Matriz & a, Matriz & b);
#endif // MATRIX_H
