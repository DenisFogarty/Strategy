#ifndef HUMAN_H
#define HUMAN_H

#include "Animal.h"
#include "Hunter.h"

class Human
{
    public:
        Human();
        virtual ~Human();

        Animal *newAnimal = new Hunter;

        void describeAnimalBehaviour();

    protected:

    private:

};

#endif // HUMAN_H
