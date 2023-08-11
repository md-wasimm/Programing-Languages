#include <iostream>
using namespace std;
int main()
{
    // While Loop

    int index = 0;
    while (index < 30)
    {
        cout << "Print index: " << index << endl;
        index++;
    }

    // Do While Loop - ekbar toh chalega hi chalega chahe true ya false ho.

    int index1 = 0;
    do
    {
        cout << "Print index1: " << index1 << endl;
    } while (index1>30);

    // For Loop

    for (int i = 0; i < 30; i++)
    {
        cout << "Print i: " << i << endl;
    }
}