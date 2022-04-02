#ifndef LIST_H
#define LIST_H

//------------------PADRE-------------------

#include <iostream>
#include <vector>
#include <functional>

using namespace std;

//realizado por Carmen Sánchez

template <class S>
class List{
public:

    List();
    List(string Name, string Mail, vector<string> Subjects);
    S find(function<bool(S const &elem, int index)> c);
    List<S> filter(function<bool(S const &elem, int index)> c);
    string getPeople() const;

protected:

    string name;
    string mail;
    string subjects;

private:

    vector<S> data; //data son los profesores o alumnos

};

template<class S>
List<S>::List(){
//nothin here
}

template <class S>
List<S>::List(string Name, string Mail, vector<string> Subjects){

    name = Name;
    mail = Mail;
    subjects = Subjects;

}

template <class S>
S List<S>::find(function<bool(S const &, int)> c){
    for (unsigned long i; i < data.size(); i++){
        if (c(data.at(i), i))
            return data.at(i);
    }
    throw string{"The element is not found"};
}

template <class S>
List<S> List<S>::filter(function<bool(S const &, int)> c){
    List<S> result;
    for(unsigned long i; i < data.size(); i++){
        if (c(data.at(i), i))
            result.push_back(data.at(i));
    }
    return result;
}

template<class S>
ostream & operator << (ostream & os, List<S> const & people){
    for(auto students: people.getPeople()){
        os << students;
        os << "\n";
    }
    return os;
}

#endif // LIST_H
