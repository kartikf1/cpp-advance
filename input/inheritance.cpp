#include <iostream>
#include "designer.h"
using namespace std;

void reruncheck();
class carworld
{
public:
    string model;
    int ldate; // launch date
    void greeting()
    {
        cout << "Hello user! how are you?\n";
    }
};

class car : public carworld
{
public:
    string name = "BMW";
};

/* 
class checker
{
public:
    char uinput;
};
 */
main()
{
    char uinput;
    // checker obj2;
    car obj;
    obj.greeting();
    cout << "Please enter model name : ";
    getline(cin, obj.model);
    design("*", 100);
    cout << "Please enter launch date : ";
    cin >> obj.ldate;
    design("*", 100);
    cout << obj.name << " is my fav car. Model = " << obj.model << " and launch date is " << obj.ldate << "\n";
    design("*", 100);
    cout << "Do you want to run this program again? (y/n)... ";
    cin >> uinput;
    if (uinput == 'y')
    {
        reruncheck();
    }

    system("pause");
    cout << 19+34;
    return 0;
}

void reruncheck()
{

    main();
}