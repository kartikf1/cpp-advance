#include <iostream>
using namespace std;

int main()
{
    int num = 12;
    // string a = "Testing...";
    // string c = "hello";
    try
    {
        if (num > 18)
        {
            cout << "Access granted. You are old enough!\n";
        }
        else
        {
            // throw(a);
            // throw(num);
            throw 404;
        }
    }

    catch (int num)
    {
        cout << "Access denied. -You must be at least 18 years old." << '\n';
        cout << "Your age is : " << num << '\n';
        // cout << c << '\n';
    }
    system("pause>0");
}