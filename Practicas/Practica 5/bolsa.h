#ifndef BOLSA_H
#define BOLSA_H
#include <array>
#include <vector>
#include <iostream>
using namespace std;

class Bolsa
{
public:
    Bolsa();

    bool quedanBolas() const;
    int sacarBolas();

    vector<int> getBolas() const;
    void setBolas(const vector<int> &value);

private:
    vector<int> bolas;

};



#endif // BOLSA_H
