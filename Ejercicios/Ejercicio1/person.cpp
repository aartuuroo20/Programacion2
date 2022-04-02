#include "person.h"

Person::Person(string _nombre, int _edad, string _telefono)
{
    _nombre = nombre;
    _edad = edad;
    _telefono = telefono;
}

string Person::getNombre() const
{
    return nombre;
}

void Person::setNombre(const string &value)
{

    nombre = value;
}

int Person::getEdad() const
{
    if(edad <= 0){
        throw  string {"Edad incorrecta debe ser mayor igual a 0"};
    }
    return edad;
}

void Person::setEdad(int value)
{
    edad = value;
}

string Person::getTelefono() const
{
    return telefono;
}

void Person::setTelefono(const string & value)
{
    if(telefono.size() != 9){
        throw string {"Los telefonos tienen nuevo digitos"};
    }
    telefono = value;
}

ostream & operator <<(ostream & os, Person const & p){
    os << "Nombre: " << p.getNombre() << endl;
    os << "Edad: " << p.getEdad() << endl;
    os << "Telefono: " << p.getTelefono() << endl;
    return os;
}
