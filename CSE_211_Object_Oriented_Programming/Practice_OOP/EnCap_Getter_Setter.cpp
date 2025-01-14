#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    // Setter
    void setName(string n)
    {
        name = n;
    }

    // Getter
    string getName()
    {
        return name;
    }

    // Setter
    void setAge(int a)
    {
        age = a;
    }

    // Getter
    int getAge()
    {
        return age;
    }
};

int main()
{
    Student student1;
    student1.setName("John");
    student1.setAge(20);

    cout << "Name: " << student1.getName() << endl;
    cout << "Age: " << student1.getAge() << endl;

    return 0;
}
