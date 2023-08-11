#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    void printDetails()
    {
        cout << "The employee name is " << this->name << " and his salary is " << this->salary << " dollars." << endl;
    }
};

int main()
{
    Employee was;
    was.name = "Wasim";
    was.salary = 1000;
    was.printDetails();
}