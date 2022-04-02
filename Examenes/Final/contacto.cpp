#include "contacto.h"

Contacto::Contacto()
{

}

Contacto::Contacto(string nom, string apll1, string tel, string gmail, string fecha)
{
    nom = nombre;
    apll1 = apellido1;
    tel = telefono;
    gmail = email;
    fecha = nacimiento;
}

string Contacto::getNombre() const
{
    return nombre;
}

void Contacto::setNombre(const string &value)
{
    if(value.size() == 0){
        throw string {"No has introducido nombre"};
    }
    nombre = value;
}

string Contacto::getApellido1() const
{
    return apellido1;
}

void Contacto::setApellido1(const string &value)
{
    if(value.size() == 0){
        throw string {"No has introducido apellido"};
    }
    apellido1 = value;
}

string Contacto::getTelefono() const
{
    return telefono;
}

void Contacto::setTelefono(const string &value)
{
    if(value.size() < 9){
        throw string {"Los telefonos tienen 9 digitos"};
    }
    telefono = value;
}

string Contacto::getEmail() const
{
    return email;
}

void Contacto::setEmail(const string &value)
{
    if(value.size() == 0){
        throw string {"No has introducido email"};
    }
    email = value;
}

string Contacto::getNacimiento() const
{

    return nacimiento;
}

void Contacto::setNacimiento(const string &value)
{
    if(value.size() == 0){
        throw string {"No has introducido nacimiento valido"};
    }
    nacimiento = value;
}

ostream & operator <<(ostream & os, Contacto & c){
    os<<"Nombre:"<<c.getNombre()<<endl;
    os<<"Apellido:"<<c.getApellido1()<<endl;
    os<<"Telefono:"<<c.getTelefono()<<endl;
    os<<"Email:"<<c.getEmail()<<endl;
    os<<"Fecha de nacimiento:"<<c.getNacimiento()<<endl;
    return os;
}
