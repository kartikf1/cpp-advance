#include <iostream>
using namespace std;

class MyClass
{       // The class
public: // Access specifier
    void myMethod()
    { // Method/function
        cout << "Hello World!";
        cout << "hello universe\n";
    }
};

int main()
{
    MyClass myObj;    // Create an object of MyClass
    myObj.myMethod(); // Call the method
    system("pause");
    return 0;
}
// Added comment
// This is second comment