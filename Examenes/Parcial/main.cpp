#include <iostream>
#include "vector.h"

using namespace std;

int main()
{


   cout << "Introduce coordenadas del primero vector en orden x,y,z: ";
   float x,y,z; cin >> x >> y >> z;
   Vector a{x,y,z};

   cout << "Introduce coordenadas del segundo vector en orden x,y,z: ";
   cin >> x >> y >> z;
   Vector b{x,y,z};

   cout << a << "\n";
   cout << b << "\n";

   cout << a.getModule() << "\n";
   cout << b.getModule() << "\n";

   Vector suma = a + b;
   cout << suma << "\n";

   Vector resta = a - b;
   cout << resta << "\n";

   float escalar = a * b;
   cout << escalar << "\n";

   if(a == b){
       cout << "Son iguales " << "\n";
   }else{
       cout << "Son distintos" << "\n";
   }




}
