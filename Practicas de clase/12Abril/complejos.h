#ifndef COMPLEJOS_H
#define COMPLEJOS_H
#include <vector>
using namespace std;

class Complejo
{
public:
    Complejo(float _x,float _y, float _z);

    void set_x(float _x);
    void set_y(float _y);
    void set_z(float _z);
    float get_x();
    float get_y();
    float get_z();
    float get_module();



private:
    std::vector <float> vectorComplejo;
};
#endif // COMPLEJOS_H
