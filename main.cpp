#include <iostream>

using namespace std;

#include "Human.h"
#include "Deer.h"
#include "Prey.h"

int main()
{
    cout << "Hello world!" << endl;

    Human hb;

    hb.describeAnimalBehaviour();

    Deer db;
    Prey prey;

    db.setAnimalBehaviour(&prey);
    db.describeAnimalBehaviour();

    return 0;
}
