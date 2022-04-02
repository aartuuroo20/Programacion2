#ifndef AGENDA_H
#define AGENDA_H
#include "contacto.h"
#include <memory>
#include <vector>
using namespace std;

class Agenda
{
    friend ostream & operator <<(ostream & os, Agenda & c1);

public:
    Agenda();

    vector<shared_ptr<Contacto> > getAgenda() const;
    void setAgenda(const vector<shared_ptr<Contacto> > &value);

    void insertar(shared_ptr<Contacto> c1);
    void borrar(string nomb_, string apll1);
    shared_ptr<Contacto> findNom(string nomb_, string apll1);
    shared_ptr<Contacto> findAge(string nacimiento);
    shared_ptr<Contacto> print(string fechas);

private:
    vector<shared_ptr<Contacto>> agenda;
};

#endif // AGENDA_H
