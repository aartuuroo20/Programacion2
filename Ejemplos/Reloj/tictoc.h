#ifndef TICTOC_H
#define TICTOC_H
#include <chrono>
using namespace std::chrono;


class tictoc
{
public:
    tictoc();
    void tic();
    long toc() const;

private:
    milliseconds t0;
};

#endif // TICTOC_H
