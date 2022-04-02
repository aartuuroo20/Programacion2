#include <iostream>
#include <vector>
#include <memory>
#include "figuras.h"
#include "triangulo_equilatero.h"
#include "circulo.h"
#include "cuadrado.h"
#include "elipse.h"
#include "pentagono_regular.h"
using namespace std;

int main()
{
    vector<shared_ptr<Figuras>>fig;

        float radio, lado, semiejmayor,semiejmenor,apotema;
        float altura;
        int opcion=9;

        while(opcion != 0){
            cout << "Que quieres hacer?" << endl;
            cout << "1. Nuevo Circulo " << endl;
            cout << "2. Nuevo Cuadrado " << endl;
            cout << "3. Elipse " << endl;
            cout << "4. Pentagono regular" << endl;
            cout << "5. Triangulo Equilatero " << endl;
            cout << "6. MOstrar info" << endl;

            cout << "0. Salir " << endl;
            cin >> opcion;

        if(opcion == 1){
            cout << "Radio: "; cin >> radio;
            shared_ptr<Circulo> circulo1 = make_shared<Circulo>(radio);
            fig.push_back(circulo1);
        }
        if(opcion == 2){
            cout << "Lado: "; cin >> lado;
            shared_ptr<Cuadrado> cuadrado1 = make_shared<Cuadrado>(lado);
            fig.push_back(cuadrado1);
        }
        if(opcion == 3){
            cout << "semieje mayor: "; cin >> semiejmayor;
            cout << "semieje menor: "; cin >> semiejmenor;
            shared_ptr<Elipse> elipse1 = make_shared<Elipse>(semiejmayor,semiejmenor);
            fig.push_back(elipse1);
        }
        if(opcion == 4){
            cout << "apotema: "; cin >> apotema;
            cout << "lado: "; cin >> lado;
            shared_ptr<Pentagono_regular> pentagono1 = make_shared<Pentagono_regular>(apotema,lado);
            fig.push_back(pentagono1);
        }
        if(opcion == 5){
            cout << "lado: "; cin >> lado;
            cout << "altura: "; cin >> altura;
            shared_ptr<Triangulo_equilatero> triangulo1 = make_shared<Triangulo_equilatero>(lado, altura);
            fig.push_back(triangulo1);
        }if(opcion == 6){
            cout << " =================================================== " << endl << endl;
            cout << "Lista de Areas y Perimetros: " << endl;
            for(auto elem:fig){
               elem->printInfo();
                cout<<"area: "<< elem->getArea()<<"\n";
                cout<<"perimetro: "<< elem->getPerimetro()<<"\n";
                cout << " --------------------------------------------------- " << endl << endl;
            }
            cout << " =================================================== " << endl << endl;
        }
        }


       }



