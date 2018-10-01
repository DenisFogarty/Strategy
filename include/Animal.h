#ifndef ANIMAL_H
#define ANIMAL_H


class Animal
{
    public:
        Animal();
        virtual ~Animal();

        virtual void IMovement() = 0;
        virtual void ISight() = 0;

    protected:

    private:

};

#endif // ANIMAL_H
