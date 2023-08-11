#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "You are an adult.";
        break;
    case 15:
        cout << "You are a teenage.";
        break;
    default:
        cout << "You are not 15 or 18 years old.";
        break;
    }
}