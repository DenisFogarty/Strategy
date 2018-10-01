#include "Deer.h"

Deer::Deer()
{
    //ctor
}

void Deer::setAnimalBehaviour(Animal* animal)
{
    newAnimal = animal;
}

void Deer::describeAnimalBehaviour() {
    newAnimal->ISight();
    newAnimal->IMovement();
}

Deer::~Deer()
{
    //dtor
}
