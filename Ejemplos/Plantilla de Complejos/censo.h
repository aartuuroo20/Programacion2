#ifndef CENSO_H
#define CENSO_H
#include <iostream>
using namespace std;
#include <string>


class Censo
{
public:
    Censo();

    void print() const;
    int age(int value);
    bool isAdult(int value);

    string getNombre() const;
    void setNombre(const string &value);

    int getNacimiento() const;
    void setNacimiento(int value);

    string getDNI() const;
    void setDNI(const string &value);

    string getTelefono() const;
    void setTelefono(const string &value);

private:
    string nombre;
    int nacimiento;
    string DNI;
    string telefono;
};

#endif // CENSO_H
