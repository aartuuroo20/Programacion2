#ifndef PERSONAS_H
#define PERSONAS_H
#include <string>
using namespace std;


class Persona
{
public:
    Persona();
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

#endif // PERSONAS_H
