#ifndef DEER_H
#define DEER_H

#include "Animal.h"

class Deer
{
    public:
        Deer();
        virtual ~Deer();

        Animal* newAnimal;

        void setAnimalBehaviour(Animal* animal);
        void describeAnimalBehaviour();

    protected:

    private:
};

#endif // DEER_H
