#ifndef LISTIN_H
#define LISTIN_H
#include "person.h"
#include <vector>
#include <functional>

class Listin
{
public:
    Listin();
    ~Listin();
    void addPerson(Person* p);
    void forEach(function<void(Person*)> op)const;
    Person* find(function<bool(Person*)> op) const;
    Listin filter(function<bool(Person*)> op) const;

private:
    vector<Person*> data;

};

#endif // LISTIN_H
