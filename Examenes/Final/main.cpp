#include <iostream>
#include "agenda.h"
#include "contacto.h"
using namespace std;

int main()
{

    bool condicion = true;
    int accion;
    string opc;
    Agenda agenda;
    string nombre{""};
    string apellido{""};
    string telefono = "";
    string email = "";
    string fecha = "";

    while (condicion == true) {
            cout<<"1.\tAdd Contacto\n"<<"2.\tEliminar Contacto\n"<<"3.\tBuscar Contacto por Nombre y Apellido\n"<<"4.\tBuscar Contacto por Fecha\n"<<"5.\tListar Agenda\n"<<"6.\tListar Birthdays\n"<<"7.\tAcabar Programa\n"<<"Elige una accion:";
            cin>>accion;
            while(accion < 1 || accion > 6){
                cout<<"Accion no valida por favor elija una correcta: ";
                cin>>accion;
            }
            cout<<endl;
            switch (accion) {
                case 1:{
                    std::cout<<"Introduzca el Nombre del contacto to add:";
                    cin>>nombre;
                    std::cout<<"Introduzca el Apellido del contacto to add:";
                    cin>>apellido;
                    std::cout<<"Introduzca el Telefono del contacto to add:";
                    cin>>telefono;
                    std::cout<<"Introduzca el Email del contacto to add:";
                    cin>>email;
                    std::cout<<"Introduzca la Fecha de nacimiento del contacto to add en formato dd/mm/aaaa:";
                    cin>>fecha;
                    try {
                        auto contacto = std::make_shared<Contacto>(nombre,apellido,telefono,email,fecha);
                        agenda.insertar(contacto);
                    } catch (string msg) {
                        cout<<msg<<endl;
                    }
                    break;
                }
                case 2:
                    agenda.borrar(nombre,apellido);
                    break;
                case 3:
                    std::cout<<"Introduzca el Nombre del contacto a buscar:";
                    cin>>nombre;
                    std::cout<<"Introduzca el Apellido del contacto a buscar:";
                    cin>>apellido;
                    cout<<*agenda.findNom(nombre,apellido);
                    break;
                case 4:
                    std::cout<<"Introduzca la fecha del contacto a buscar en formato dd/mm/aaaa:";
                    cin>>fecha;
                    cout<<*agenda.findAge(fecha);
                    break;
                case 5:
                    cout<<agenda;
                case 6:
                    std::cout<<"Introduzca la fecha del contacto a buscar en formato dd/mm/aaaa:";
                    cin>>fecha;
                    cout<<*agenda.print(fecha);
                case 7:
                    condicion = false;
                    break;
                }
        }
    return 0;


}
