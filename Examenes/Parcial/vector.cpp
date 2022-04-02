#include "vector.h"
#include <cmath>

Vector::Vector():x{0}, y{0}, z{0}
{

}

Vector::Vector(float nx, float ny, float nz):x{nx}, y{ny}, z{nz}
{


}

float Vector::getX() const
{
    return x;
}

float Vector::getY() const
{
    return y;
}

float Vector::getZ() const
{
    return z;
}

float Vector::getModule()
{
    return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
}
istream & operator >> (istream & is, Vector  & c){
    is >> c.x;
    is >> c.y;
    is >> c.z;
    return is;

}
ostream & operator << (std::ostream & os, Vector c){
    os << c.x << "," << c.y << "," << c.z;
    return os;
};

bool  operator== (Vector const & c1, Vector  const  & c2){
    if(c1.x == c2.x && c1.y == c2.y & c1.z == c2.z){
        return true;
    }else{
        return false;
    }


}
Vector operator+ (Vector const & c1, Vector const & c2){
    Vector result{c1.x + c2.x, c1.y + c2.y, c1.z + c2.z};
    return result;
}
Vector operator- (Vector const & c1, Vector const & c2){
    Vector result{c1.x - c2.x, c1.y - c2.y, c1.z - c2.z};
    return result;
}
float operator* (Vector const & c1, Vector const & c2){
    float result{c1.x*c2.x + c1.y*c2.y + c1.z*c2.z};
    return result;
}
