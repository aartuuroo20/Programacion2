#ifndef STUDENTS_H
#define STUDENTS_H

//----------------------UNO DE LOS HIJOS-------------------

#include <iostream>
#include "list.h"

using namespace std;

//realizado por Carmen Sánchez

class Students:public List<Students>{
public:

    Students(string _Name, string _Mail, vector<string> _Subjects);
    string getName() const;
    string getMail() const;
    string getSubjects() const;

};

template<class S> //sobrecarga de los students
ostream & operator << (ostream & os, Students & people){
    os << "Name " << people.getName();
    os << "Mail " << people.getMail();
    for(auto elem: people.getSubjects()){
        os << elem;
        os << "\n";
    }
    return os;
}

#endif // STUDENTS_H
