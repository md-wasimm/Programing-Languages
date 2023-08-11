#include <iostream>
using namespace std;

class A {
    public:
      void displayA() {
          cout<<"A class content."<<endl;
      }
};

class B : public A {
    public:
      void displayB() {
          cout<<"B class content."<<endl;
      }
};

class C : public B {};

int main() {
    C obj;
    obj.displayA();
    obj.displayB();
    return 0;
}