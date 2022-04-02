#ifndef MATRIZ2_H
#define MATRIZ2_H
#include <array>
using namespace std;


class Matriz2
{
public:
    Matriz2();
    Matriz2(array<float, 4> const & p);

    float get(int row, int col) const;
    void set(int row, int col, float value);



private:
    array<array<float, 2>, 2> data;
};
Matriz2 operator+(const Matriz2 & a, const Matriz2 b);
Matriz2 operator-(const Matriz2 & a, const Matriz2 b);
Matriz2 operator*(const Matriz2 & a, const Matriz2 b);

#endif // MATRIZ2_H
