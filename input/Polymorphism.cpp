/* Polymorphism means "many forms", and it occurs when we have many classes 
that are related to each other by inheritance.

Like we specified in the previous chapter;
Inheritance lets us inherit attributes and methods from another class.
Polymorphism uses those methods to perform different tasks.
This allows us to perform a single action in different ways. */

#include <iostream>
#include "designer.h"
using namespace std;

class animal
{
public:
    void animalsound()
    {
        cout << "Animal sound like \n";
    }
};

class dog : public animal
{
public:
    void animalsound()
    {
        cout << "Dog sound like bow bow.\n";
    }
};

class cat : public animal
{
public:
    void animalsound()
    {
        cout << "Cat sound like meow meow.\n";
    }
    void fun(char uinput)
    {
        if (uinput == 'y')
        {
            design("-", 80);
            cout << "\t\t\tThank you!!!\n";
            design("-", 80);
            system("pause");
        }
    }
};

main()
{
    animal objanimal;
    dog objdog;
    cat objcat;
    char uinput;
    objanimal.animalsound();
    objdog.animalsound();
    objcat.animalsound();
    cout << "Do you want to exit this program : (y/n)... ";
    cin >> uinput;
    objcat.fun(uinput);
    return 0;
}