#include <iostream>
#include <memory>
#include "vector.h"
#include "vector2.h"
#include "vector3.h"

using namespace std;

int main()
{
    Vector2 v1 = Vector2{1,2};
    cout << "Modulo: " << v1.getMod() << endl;

    Vector2 v2{3,1};
    Vector2 v3{3,1};


    if(v2 == v3){
        cout << "vectors are equal" << endl;
        cout << "v2: " << v2 << endl;
        cout << "v3: " << v3 << endl;
    }

    Vector2 v_add = v2 + v3;
    cout << "Addition is: " << v_add << endl;

    Vector2 v4 =  Vector2{1,2};
    Vector2 v5 =  Vector2{1,2};




    return 0;
}
