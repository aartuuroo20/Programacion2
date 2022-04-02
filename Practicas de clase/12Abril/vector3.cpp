#include "vector3.h"

Vector3::Vector3():x{0}, y{0}, z{0}
{

}

Vector3::Vector3(float nx, float ny, float nz):x{nx}, y{ny}, z{nz}
{

}

float Vector3::getX() const
{
    return x;
}

float Vector3::getY() const
{
    return y;
}

void Vector3::setY(float value)
{
    y = value;
}

float Vector3::getZ() const
{
    return z;
}

void Vector3::setZ(float value)
{
    z = value;
}

void Vector3::setX(float value)
{
    x = value;
}
Vector3 operator+ (Vector3 const & c1, Vector3 const & c2){
    Vector3 result{c1.x + c2.x, c1.y + c2.y, c1.z + c2.z};
    return result;
}
Vector3 operator- (Vector3 const & c1, Vector3 const & c2){
    Vector3 result{c1.x - c2.x, c1.y - c2.y, c1.z - c2.z};
    return result;
}
float operator* (Vector3 const & c1, Vector3 const & c2){
    float result{c1.x*c2.x + c1.y*c2.y + c1.z*c2.z};
    return result;
}
