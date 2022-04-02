#include "listin.h"

Listin::Listin()
{

}

Listin::~Listin()
{
    for(auto p: data){
        delete p;
    }
}

void Listin::addPerson(Person *p)
{
    if(p) data.push_back(p);
    else throw string {"Persona incorrecta"};
}

void Listin::forEach(function<void (Person *)> op) const
{
    for(auto p: data){
        op(p);
    }
}

Person *Listin::find(function<bool (Person *)> op) const
{
    for(auto p: data){
        if(op(p)) return p;
    }
    return nullptr;
}

Listin Listin::filter(function<bool (Person *)> op) const
{
    Listin result;
    for(auto p: data){
        if(op(p)) result.addPerson(p);
    }
    return result;
}
