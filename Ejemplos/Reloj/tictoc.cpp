#include "tictoc.h"

tictoc::tictoc()
{

}

void tictoc::tic()
{
    t0 = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
}

long tictoc::toc() const
{
    milliseconds t = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
    milliseconds elapsed = t - t0;
    return elapsed.count();
}
