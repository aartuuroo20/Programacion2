#include "bolsa.h"
#include<time.h>

Bolsa::Bolsa()
{
 for(int i =0; i<20; i++){
     bolas.push_back(i);
 }
}

bool Bolsa::quedanBolas() const
{
   if(bolas.size() > 0){
       return true;
   }
   return false;
}

int Bolsa::sacarBolas()
{
   srand(time(NULL));
   int num = 1 +rand() % (bolas.size() -1);
   int dev = bolas.at(num);
   bolas.erase(bolas.begin() + num);
   return dev;

}

vector<int> Bolsa::getBolas() const
{
    return bolas;
}

void Bolsa::setBolas(const vector<int> &value)
{
    bolas = value;
}


