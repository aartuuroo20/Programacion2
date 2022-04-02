#include <iostream>
#include "person.h"
#include <vector>
#include "listin.h"
#include <functional>
using namespace std;

int main()
{
  Listin listin;

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
               listin.addPerson(new Person(nombre, edad, telefono));
           }else if(opcion == "l"){
               listin.forEach([](Person* p)->void{
                   cout << *p;
                   cout << "-----------" << endl;
               });
           }else if(opcion == "b"){
               cout << "Introduzca el nombre de la persona a buscar: ";
               string  nombre; cin >> nombre;
               Person* p = listin.find([&](Person * p)->bool{
                       return p->getNombre() == nombre;
           });
               if(p) cout << *p << "----------" << endl;
           }else if(opcion == "le"){
               cout << "Introduzca la edad a buscar: ";
               int edad; cin >> edad;
               Listin result = listin.filter([&](Person* p)->bool{
                       return  p->getEdad() == edad;
           });

               result.forEach([](Person* p)->void{
                   cout << *p;
                   cout << "----------" << endl;
               });
           }

       }
   }  catch (string e) {
       cout << "Error" << e << endl;
   }



   cout << "Adios, gracias!! " << endl;
   return 0;

}
