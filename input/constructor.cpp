#include <iostream>
using namespace std; 

class MyClass
{       // The class
public: // Access specifier
    MyClass()
    { // Constructor
        cout << "Hello World!";
    }
};

int main()
{
    MyClass myObj; // Create an object of MyClass (this will call the constructor)
    system("pause"); // Added pause command
    // Added a test comment
    // Added a  staged test comment
    return 0;
}