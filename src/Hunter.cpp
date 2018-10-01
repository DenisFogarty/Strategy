#include "Hunter.h"

Hunter::Hunter()
{
    //ctor
}

void Hunter::IMovement() {
    std::cout << "Moves stealthily and ambushes its prey" << std::endl;
}

void Hunter::ISight() {
    std::cout << "Lower field of view, greater depth perception" << std::endl;
}

Hunter::~Hunter()
{
    //dtor
}
