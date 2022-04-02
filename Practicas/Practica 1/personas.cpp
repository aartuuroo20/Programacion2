
#include "personas.h"
using namespace std;
#include <iostream>

Persona::Persona()
{

}
string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const string &value)
{
    nombre = value;
}

int Persona::getNacimiento() const
{
    return nacimiento;
}

void Persona::setNacimiento(int value)
{
    nacimiento = value;
}

string Persona::getDNI() const
{
    return DNI;
}

void Persona::setDNI(const string &value)
{
    DNI = value;
}

string Persona::getTelefono() const
{
    return telefono;
}

void Persona::setTelefono(const string &value)
{
    telefono = value;
}

void Persona::print()
{
    cout << "El nombre es: " << nombre << "\n";
    cout << "El año de nacimiento es: " << nacimiento << "\n";
    cout << "El DNI es: " << DNI << "\n";
    cout << "El telefono es: " << telefono << "\n";
    cout << "\n";
}

int Persona::age(int value)
{
    if(value < nacimiento){
        cout << "Error";
    }else{
        return value - nacimiento;

    }
}

bool Persona::isAdult(int value)
{

    if(value < nacimiento){
        cout << "Error";
    }else{
        int a = nacimiento - value;
        if(a < 18){
            cout << "ES mayor de edad";
        }else{
            cout << "Es menor de edad";
        }
    }

}
