#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The employee name is " << this->name << " and his salary is " << this->salary << " dollars." << endl;
    }
    void getPassword()
    {
        cout << "The secret password is: " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

int main()
{
    Employee was("Wasim Constructor", 1000, 86175);
    was.printDetails();
    was.getPassword();
}
