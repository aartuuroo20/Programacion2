#ifndef PERSON_H
#define PERSON_H
using namespace std;
#include <iostream>
#include <string>


class person
{
public:
    person();

    string getNombre() const;
    void setNombre(const string &value);

    int getEdad() const;
    void setEdad(int value);

    string getTelefono() const;
    void setTelefono(const string &value);
    void print();

private:
    string nombre;
    int edad;
    string telefono;

};

#endif // PERSON_H
