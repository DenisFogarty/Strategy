#ifndef PREY_H
#define PREY_H

#include <iostream>

#include "Animal.h"


class Prey : public Animal
{
    public:
        Prey();
        virtual ~Prey();

        void IMovement();
        void ISight();

    protected:

    private:
};

#endif // PREY_H
