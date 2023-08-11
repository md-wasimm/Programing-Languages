#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int salary;
};

int main()
{
    Employee was;
    was.name = "Wasim";
    was.salary = 1000;
    cout << "The employee name is " << was.name << " and his salary is " << was.salary << " dollars." << endl;
}