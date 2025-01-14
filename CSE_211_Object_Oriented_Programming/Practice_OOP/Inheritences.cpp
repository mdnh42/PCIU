#include <iostream>
using namespace std;

// Parent class
class Animal
{
public:
    void speak()
    {
        cout << "Animal makes a sound." << endl;
    }
};

// Child class inherits from Animal
class Dog : public Animal
{
public:
    void speak()
    { // Method overriding
        cout << "Dog barks!" << endl;
    }
};

int main()
{
    Dog dog1;
    dog1.speak(); // Calls overridden method in Dog class

    return 0;
}
