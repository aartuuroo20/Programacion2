#ifndef VECTOR3_H
#define VECTOR3_H
using namespace std;
#include <ostream>


class Vector3
{
    friend Vector3 operator+ (Vector3 const & c1, Vector3 const & c2);
    friend Vector3 operator- (Vector3 const & c1, Vector3 const & c2);
     friend float operator* (Vector3 const & c1, Vector3 const & c2);

public:
    Vector3();
    Vector3(float nx, float ny, float nz);


    float getX() const;
    void setX(float value);

    float getY() const;
    void setY(float value);

    float getZ() const;
    void setZ(float value);


private:
    float x,y,z;
};

#endif // VECTOR3_H
