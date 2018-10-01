#ifndef HUNTER_H
#define HUNTER_H

#include <iostream>

#include "Animal.h"

class Hunter : public Animal
{
    public:
        Hunter();
        virtual ~Hunter();

        void IMovement();
        void ISight();

    protected:

    private:
};

#endif // HUNTER_H
