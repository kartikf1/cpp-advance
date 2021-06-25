#include <iostream>
using namespace std; 

class MyClass
{       // The class
public: // Access specifier
    MyClass()
    { // Constructor
        cout << "Hello World!\n";
    }
};

int main()
{
    MyClass myObj; // Called constructor
    system("pause");
    return 0;
}