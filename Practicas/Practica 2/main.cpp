#include <iostream>
#include "matriz3x3.h"
#include <memory>
using namespace std;



int main()
{
    float a,b,c,d,e,f,g,h,i;
    cout << "Introduce 9 elementos: ";
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;

    shared_ptr<Matriz3x3> mat1 = make_shared<Matriz3x3>(array<float, 9>{a,b,c,d,e,f,g,h,i});

    cout << *mat1;
    cout << "Introduce 9 elementos: ";
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;

    shared_ptr<Matriz3x3>mat2 = make_shared<Matriz3x3>(array<float, 9>{a,b,c,d,e,f,g,h,i});

    auto suma = add(mat1, mat2);

    cout << *suma;










}






