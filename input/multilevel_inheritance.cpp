#include <iostream>
#include "designer.h"
using namespace std;

// first parent class
class parent
{
public:
    void myfun()
    {
        cout << "Hello user!!!\n";
    }
};

// derived from parent class
class beta : public parent
{
};
// derived from beta class
class perbeta : public parent
{
public:
    void fun2()
    {
        cout << "Hello universe!!!\n";
    }
};

main()
{
    perbeta mohan;
    design("-", 50);
    mohan.myfun();
    design("-", 50);
    mohan.fun2();
    design("-", 50);
    system("pause");
    return 0;
}