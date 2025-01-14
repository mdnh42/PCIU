#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    double add(int a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator calc;
    cout << "Sum (int): " << calc.add(5, 3) << endl;
    cout << "Sum (double): " << calc.add(5.5, 3.2) << endl;
    cout << "Sum (int and double): " << calc.add(5, 3.5) << endl;

    return 0;
}
