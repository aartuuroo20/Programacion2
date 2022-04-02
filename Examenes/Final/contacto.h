#ifndef CONTACTO_H
#define CONTACTO_H
#include <iostream>
#include <string>
using namespace std;

class Contacto
{
    friend ostream & operator <<(ostream & os, Contacto & c1);
public:
    Contacto();
    Contacto(string nom, string apll1, string tel, string gmail, string fecha);

    string getNombre() const;
    void setNombre(const string &value);

    string getApellido1() const;
    void setApellido1(const string &value);

    string getTelefono() const;
    void setTelefono(const string &value);

    string getEmail() const;
    void setEmail(const string &value);

    string getNacimiento() const;
    void setNacimiento(const string &value);

private:
    string nombre;
    string apellido1;
    string telefono;
    string email;
    string nacimiento;
};

#endif // CONTACTO_H
