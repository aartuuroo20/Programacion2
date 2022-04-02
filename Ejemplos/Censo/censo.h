#ifndef CENSO_H
#define CENSO_H
#include <string>
#include <iostream>
using namespace std;


class Censo
{
public:
    Censo();
    string getNombre() const;
    void setNombre(const string &value);

    int getNacimiento() const;
    void setNacimiento(int value);

    string getDNI() const;
    void setDNI(const string &value);

    string getTelefono() const;
    void setTelefono(const string &value);

    void print();
    int age(int value);
    bool isAdult(int value);

private:
    string nombre;
    int nacimiento;
    string DNI;
    string telefono;
};

#endif // CENSO_H
