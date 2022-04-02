#ifndef POLICEMAN_H
#define POLICEMAN_H

#include "worker.h"

class Policeman : public Worker
{
public:
    Policeman();

    void printProfessionalInfo() const;
};

#endif // POLICEMAN_H
