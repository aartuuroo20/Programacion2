#ifndef MATRIZ3X3_H
#define MATRIZ3X3_H
#include <array>
#include <ostream>
#include <memory>
using namespace std;



class Matriz3x3
{
    friend ostream &  operator <<(ostream & os, Matriz3x3 const & a);
    friend istream & operator >> (istream & is, Matriz3x3 a);
public:
    Matriz3x3();
    Matriz3x3(array<float, 9> const & p);


    void print() const;
    float determinante() const;




    float get(int row, int col) const;
    void set(int row, int col, float value);



private:
    array<array<float, 3>, 3> data;

};
ostream &  operator <<(ostream & os, Matriz3x3 const & a);
istream & operator >> (istream & is, Matriz3x3 a);
shared_ptr<Matriz3x3>  add(shared_ptr<Matriz3x3> a, shared_ptr<Matriz3x3> b);
Matriz3x3 operator+(const Matriz3x3 & a, const Matriz3x3 b);



#endif // MATRIZ3X3_H
