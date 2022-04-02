#ifndef VECTOR_H
#define VECTOR_H
#include <ostream>
#include <istream>
using namespace std;


class Vector
{
    friend Vector operator+ (Vector const & c1, Vector const & c2);
    friend Vector operator- (Vector const & c1, Vector const & c2);
    friend float operator* (Vector const & c1, Vector const & c2);


    friend bool  operator== (Vector const & c1, Vector  const  & c2);

    friend std::ostream & operator << (std::ostream & os, Vector c);
    friend istream & operator >> (istream & is, Vector  & c);



public:
    Vector();
    Vector(float nx, float ny, float nz);

    float getX() const;

    float getY() const;

    float getZ() const;

    float getModule();


private:
    float x,y,z;
};

#endif // VECTOR_H
