#include "Prey.h"

Prey::Prey()
{
    //ctor
}

void Prey::IMovement() {
    std::cout << "Moves swiftly at first sign of danger" << std::endl;
}

void Prey::ISight() {
    std::cout << "Higher field of view, lower depth perception" << std::endl;
}

Prey::~Prey()
{
    //dtor
}
