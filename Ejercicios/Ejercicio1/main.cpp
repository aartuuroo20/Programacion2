#include <iostream>
#include "person.h"
#include <vector>
#include <functional>
using namespace std;

void forEach(vector<Person*> p, function<void(Person*)> op){
    for(auto elem: p){
        op(elem);
    }
}

Person* find(vector<Person*> p, function<bool(Person*)> op){
    vector<Person*> result;
    for(auto elem: p){
        if(op(elem)) result.push_back(elem);
    }
}

vector<Person*> filter(vector<Person*> p, function<bool(Person*)> op){
    vector<Person*> result;
    for(auto elem: p){
        if(op(elem)) result.push_back(elem);
    }
    return result;
}





int main()
{
   vector<Person*> listin;

   try {
       string opcion {"x"};
       while(opcion != "q"){
           cout << "Introduce opcion: " << endl;
           cout << "a-añadir personas: " << endl;
           cout << "l-listar personas: " << endl;
           cout << "b-buscar personas por nombre: " << endl;
           cout << "le-listar personas por una determinada edad: " << endl;
           cout << "q-salir" << endl;
           cin >> opcion;

           if(opcion == "a"){
               cout << "Introduce nombre, edad y telefono: ";
               string nombre, telefono; int edad;
               cin >> nombre >> edad >> telefono;
               listin.push_back(new Person(nombre, edad, telefono));
           }else if(opcion == "l"){
               forEach(listin, [](Person* p)->void{
                   cout << *p;
                   cout << "-----------" << endl;
               });
           }else if(opcion == "b"){
               cout << "Introduzca el nombre de la persona a buscar: ";
               string  nombre; cin >> nombre;
               Person* p = find(listin, [&](Person * p)->bool{
                       return p->getNombre() == nombre;
           });
               if(p) cout << *p << "----------" << endl;
           }else if(opcion == "le"){
               cout << "Introduzca la edad a buscar: ";
               int edad; cin >> edad;
               vector<Person*> result = filter(listin, [&](Person* p)->bool{
                       return  p->getEdad() == edad;
           });

               forEach(result, [](Person* p)->void{
                   cout << *p;
                   cout << "----------" << endl;
               });
           }

       }
   }  catch (string e) {
       cout << "Error" << e << endl;
   }

   for(auto p: listin){
       delete  p;
   }

   cout << "Adios, gracias!! " << endl;
   return 0;

}
