#ifndef INTEGER_H
#define INTEGER_H

#include <vector>

using namespace std;

class Integer
{
public:
    Integer();
    Integer(int n);


    int getValue() const;
    void setValue(int value);

    bool esPrimo() const;
    vector<int> factores() const;

private:
    int value;
};

Integer operator* (Integer const & n1, Integer const & n2);
Integer operator/ (Integer const & n1, Integer const & n2);

#endif // INTEGER_H

*********************************************************************************
#include "integer.h"

#include <string>

using namespace std;

Integer::Integer()
{

}

int Integer::getValue() const
{
    return value;
}

void Integer::setValue(int n)
{
    if(n >=0) value = n;
    else throw string{"number must be positive"};
}

bool Integer::esPrimo() const
{
    for(int i{2}; i <= value/2; i++){
        if(value%i == 0) return false;
    }

    return true;
}

vector<int> Integer::factores() const
{
    vector<int> result;
    for(int i{2}; i <= value/2; i++){
        if(Integer{i}.esPrimo() && value%i == 0) result.push_back(i);
    }

    return result;
}

int minimo_comun_multiplo(int n1, int n2){
    int max = n1>n2?n1:n2;

    for(int i{max}; true; i++){
        if(i % n1 == 0 && i % n2 == 0) return i;
    }
}

int maximo_comun_divisor(int n1, int n2){
    int min = n1<n2?n1:n2;

    for(int i{min}; i>0; i--){
        if(n1 % i == 0 && n2 % i == 0) return i;
    }
}

Integer operator*(const Integer &n1, const Integer &n2)
{
    return Integer{minimo_comun_multiplo(n1.getValue(), n2.getValue())};
}

Integer operator/(const Integer &n1, const Integer &n2)
{
    return Integer{maximo_comun_divisor(n1.getValue(), n2.getValue())};
}

*********************************************************************************
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
