#include <iostream>
using namespace std;

class Car
{
public:
    // Data members (Attributes)
    string brand;
    int year;

    // Member function (Method)
    void displayDetails()
    {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    Car car1; // Creating an object of class Car
    car1.brand = "Toyota";
    car1.year = 2022;

    car1.displayDetails(); // Calling a method using object

    return 0;
}
