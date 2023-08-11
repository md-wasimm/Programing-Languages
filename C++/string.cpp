#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name = "Wasim";
    cout << "The name is: " << name << endl;
    cout << "The length is: " << name.length() << endl;
    cout << "The name is: " << name.substr(1, 4) << endl;
    cout << "The name is: " << name.substr(2, 3) << endl;
}