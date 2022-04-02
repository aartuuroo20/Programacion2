#include <iostream>
#include <functional>
#include "numeropositivo.h"
using namespace std;



int main()
{
    float num = 0;
    cout << "Introduce numero positivo: ";
    cin >> num;
    try {
        NumeroPositivo numPosi{num};
        std::cout << "Dividirlo por ... ";
        std::cin >> num;
        std::cout << numPosi.divideBy(num) << "\n";
        std::cout << "Multiplicarlo por ... ";
        std::cin >> num;
        std::cout << numPosi.multipyBy(num) << "\n";
        std::cout << "Sumarle ... ";
        std::cin >> num;
        std::cout << numPosi.add(num) << "\n";

    }  catch (string e) {
        cout << e << endl;

    }
    return 0;

}
