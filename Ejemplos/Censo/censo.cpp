#include "censo.h"
using namespace std;
#include <iostream>

Censo::Censo()
{

}

string Censo::getNombre() const
{
    return nombre;
}

void Censo::setNombre(const string &value)
{
    nombre = value;
}

int Censo::getNacimiento() const
{
    return nacimiento;
}

void Censo::setNacimiento(int value)
{
    nacimiento = value;
}

string Censo::getDNI() const
{
    return DNI;
}

void Censo::setDNI(const string &value)
{
    DNI = value;
}

string Censo::getTelefono() const
{
    return telefono;
}

void Censo::setTelefono(const string &value)
{
    telefono = value;
}

void Censo::print()
{
    cout << "Nombre: " << nombre << "\n";
    cout << "Nacimiento: " << nacimiento << "\n";
    cout << "DNI: " << DNI << "\n";
    cout << "Telefono: " << telefono << "\n";

}

int Censo::age(int value)
{
    if(value < nacimiento){
            cout << "Error";
        }else{
            return value - nacimiento;

        }
}

bool Censo::isAdult(int value)
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
