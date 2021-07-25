#include <iostream>
using namespace std;

int main()
{
    int roll;
    string name;
    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Enter your roll no. : ";
    cin >> roll;
    try
    {
        if (roll == 19)
        {
            cout << "Hello yogesh kartik\n";
        }
        else
        {
            throw(roll);
        }
    }
    catch (int x)
    {
        cout << "Your name is " << name << '\n';
        cout << "Your roll no is " << x << '\n';
    }
    system("pause>0");
}