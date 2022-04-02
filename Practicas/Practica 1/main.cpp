#include <iostream>
#include "personas.h"
#include <vector>
#include <memory>
#include <functional>

using namespace std;

shared_ptr<Persona> find(vector<shared_ptr<Persona>> const & v, function<bool(shared_ptr<Persona>)> f){ //Busca la condicion que le pongas, imprime el primer puntero con esa condicion`
    for(auto elem: v){
        if(f(elem)) return elem;
    }
    return nullptr;
}

bool some (vector <shared_ptr<Persona>> v, function<bool(shared_ptr<Persona>)> f){ //Devuelve Verdadero si esta la condicion o falso si no
    for(auto p: v){
        if(f(p)) return true;
    }
    return false;
}

int main()
{
    vector<shared_ptr<Persona>> listado;


    for(int i=0; i<5; i++){
        cout << "Introduce nombre: ";
        string nombre; cin >> nombre;
        auto ppersona = make_shared<Persona> ();
        ppersona->setNombre(nombre);


        cout << "Introduce año de nacimiento: ";
        int nacimiento; cin >> nacimiento;
        ppersona->setNacimiento(nacimiento);


        cout << "Introduce DNI: ";
        string dni; cin >> dni;
        ppersona->setDNI(dni);


        cout << "Introduce telefono: ";
        string telefono; cin >> telefono;
        ppersona->setTelefono(telefono);

        listado.push_back(ppersona);

     }

    cout << "\n";

    for(auto elem: listado){
        elem->print();
    }

    cout << "\n";


    auto pepe = find(listado, [](shared_ptr<Persona> p){ //Localiza el primer Pepe que encuentra y muestra su puntero
            return p->getNombre() == "Pepe";
    });









}
