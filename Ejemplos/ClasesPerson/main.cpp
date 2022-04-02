#include <iostream>
#include <vector>
using namespace std;
#include "person.h"

int main()
{
    person primerapersona;
    vector<person> personas;

    string nombres2;
    int edads2;
    string telefonos2;

    cout << "Introduce nombre: ";
    cin >> nombres2;
    cout << "\n";

    cout << "Introduce edad: ";
    cin >> edads2;
    cout << "\n";

    cout << "Introduce telefono: ";
    cin >> telefonos2;
    cout << "\n";

    primerapersona.setNombre(nombres2);
    primerapersona.setEdad(edads2);
    primerapersona.setTelefono(telefonos2);

    primerapersona.print();




    personas.push_back(primerapersona);

   // for(auto elem: personas){
    //    cout << "\n" << elem.getNombre() <<"\n" << elem.getEdad() << "\n" << elem.getTelefono() << "\n";
    //}






}
