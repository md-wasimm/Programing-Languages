#include <iostream>
using namespace std;
int main()
{
    char calculator;
    float a, b;
    cout << "Choose an operator(+,-,*,/) to perform operation in C++ Calculator: ";
    cin >> calculator;

    if (calculator == '+')
    {
        cout << "You have opted for summation." << endl;
    }
    if (calculator == '-')
    {
        cout << "You have opted for difference." << endl;
    }
    if (calculator == '*')
    {
        cout << "You have opted for multiplication." << endl;
    }
    if (calculator == '/')
    {
        cout << "You have opted for division." << endl;
    }

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    switch (calculator)
    {
    case '+':
        cout << "The sum is: " << a + b;
        break;
    case '-':
        cout << "The difference is: " << a - b;
        break;
    case '*':
        cout << "The multiplication is: " << a * b;
        break;
    case '/':
        cout << "The division is: " << a / b;
        break;
    }
}