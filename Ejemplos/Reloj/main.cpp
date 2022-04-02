#include <iostream>
#include <vector>
#include "tictoc.h"

using namespace std;

int main()
{
  tictoc clock;

  clock.tic();
  for(int i=0; i<10000000; i++){

  }
  cout << clock.toc() << "ms have elapsed." << endl;
  return 0;

}



