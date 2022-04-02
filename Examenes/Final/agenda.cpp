#include "agenda.h"

Agenda::Agenda()
{

}

vector<shared_ptr<Contacto> > Agenda::getAgenda() const
{
    return agenda;
}

void Agenda::setAgenda(const vector<shared_ptr<Contacto> > &value)
{
    agenda = value;
}

void Agenda::insertar(shared_ptr<Contacto> c1)
{
    agenda.push_back(c1);
}

void Agenda::borrar(string nomb_, string apll1)
{
    for(int i=0; i<agenda.size(); i++){
        if(agenda.at(i)->getNombre() == nomb_ && agenda.at(i)->getApellido1() == apll1){
            agenda.erase(agenda.begin()+i);
        }
    }
}

shared_ptr<Contacto> Agenda::findNom(string nomb_, string apll1)
{
    for(int i=0; i<agenda.size(); i++){
        if(agenda.at(i)->getNombre() == nomb_ && agenda.at(i)->getApellido1() == apll1){
            cout << "Se ha encontrado el contacto" << endl;
            return agenda.at(i);
        }else{
            cout << "El contacto no se encuentra en la agenda";
        }
    }
    if(agenda.size() == 0){
        cout << "Agenda vacia";
    }
}

shared_ptr<Contacto> Agenda::findAge(string nacimiento)
{
    for(int i=0; i<agenda.size(); i++){
        if(agenda.at(i)->getNacimiento() == nacimiento){
            cout << "Contacto encontrado " << endl;
            return agenda.at(i);
        }else{
            cout<<"Dicho contacto no se encuentra en la agenda";
        }
    }

    if(agenda.size()==0){
        cout<<"Agenda Vacia";
    }

}

shared_ptr<Contacto> Agenda::print(string fechas)
{
    for(auto elem: agenda){
        if(elem->getNacimiento() == fechas){
            return elem;
        }
    }
}

ostream & operator <<(ostream & os, Agenda & ag){
    for(auto elem:ag.getAgenda()){
        os<<elem;
        os<<"\n";
    }
    if(ag.getAgenda().size()==0){
        os<<"Agenda Vacia";
    }
    return os;
}
