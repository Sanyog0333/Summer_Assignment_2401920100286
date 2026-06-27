#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

class Puppy : public Dog
{
public:
    void weep()
    {
        cout << "Puppy is weeping." << endl;
    }
};

int main()
{
    Puppy p;

    p.eat();
    p.bark();
    p.weep();

    return 0;
}