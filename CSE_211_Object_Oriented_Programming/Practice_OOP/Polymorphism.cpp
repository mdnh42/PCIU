#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    virtual void sound()
    { // Virtual function for polymorphism
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void sound() override
    { // Overriding base class method
        cout << "Dog barks!" << endl;
    }
};

// Derived class
class Cat : public Animal
{
public:
    void sound() override
    { // Overriding base class method
        cout << "Cat meows!" << endl;
    }
};

int main()
{
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    animal1->sound(); // Calls Dog's sound method
    animal2->sound(); // Calls Cat's sound method

    delete animal1;
    delete animal2;

    return 0;
}
