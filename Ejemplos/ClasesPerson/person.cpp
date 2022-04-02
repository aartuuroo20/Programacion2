#include "person.h"
#include <iostream>
using namespace std;

person::person()
{

}

string person::getNombre() const
{
    return nombre;
}

void person::setNombre(const string &value)
{
    nombre = value;
}

int person::getEdad() const
{
    return edad;
}

void person::setEdad(int value)
{
    edad = value;
}

string person::getTelefono() const
{
    return telefono;
}

void person::setTelefono(const string &value)
{
    telefono = value;
}

void person::print()
{
    cout << "Nombre: " << nombre << "\n";
    cout << "Edad: " << edad << "\n";
    cout << "Telefono: " << telefono << "\n";


}
