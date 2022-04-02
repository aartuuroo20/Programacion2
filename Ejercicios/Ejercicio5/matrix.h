#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;
#include <vector>
#include <ostream>

class matrix
{
public:
    matrix(int _cols, int _rows);

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

std::ostream &operator <<(std::ostream &os, matrix &mat);
std::istream &operator >>(std::istream &is, matrix &mat);

matrix operator*(matrix & a, matrix & b);
matrix operator+(matrix & a, matrix & b);
matrix operator-(matrix & a, matrix & b);

#endif // MATRIX_H
