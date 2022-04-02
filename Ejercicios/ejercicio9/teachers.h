#ifndef TEACHERS_H
#define TEACHERS_H

//----------------------------OTRO HIJO---------------

#include <iostream>
#include "list.h"

//realizado por Carmen Sánchez

using namespace std;

class Teachers:public List<Teachers>{
public:

    Teachers(string _Name, string _Mail, vector<string> _Subject);
    string getName() const;
    string getMail() const;
    string getSubjects() const;

};

template<class S> //sobrecarga de los teachers
ostream & operator << (ostream & os, Teachers & people){
    os << "Name " << people.getName();
    os << "Mail " << people.getMail();
    for(auto elem: people.getSubjects()){
        os << elem;
        os << "\n";
    }
    return os;
}


#endif // TEACHERS_H
