#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >=18)
    {
        cout << "You can drive but carefully.";
    }
    else
    {
        cout << "You cannot drive.";
    }
}