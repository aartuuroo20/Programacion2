#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person
{
public:
    Person(string _nombre, int _edad, string _telefono);

    string getNombre() const;
    void setNombre(const string &value);

    int getEdad() const;
    void setEdad(int value);

    string getTelefono() const;
    void setTelefono( const string &  value);

    void print() const;

private:
    string nombre;
    int edad;
    string telefono;
};

ostream & operator <<(ostream & os, Person const & p);

#endif // PERSON_H
