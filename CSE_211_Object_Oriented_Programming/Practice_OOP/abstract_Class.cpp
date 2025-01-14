#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    // Pure virtual function (abstract method)
    virtual void draw() = 0;
};

// Derived class
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class
class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Square" << endl;
    }
};

int main()
{
    Shape *shape1 = new Circle();
    Shape *shape2 = new Square();

    shape1->draw(); // Calls Circle's draw method
    shape2->draw(); // Calls Square's draw method

    delete shape1;
    delete shape2;

    return 0;
}
