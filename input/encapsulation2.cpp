/* In this program, user have to enter name and roll no. of student and it will print it back. */

#include <iostream>
#include <string>
using namespace std;

class students
{
private: // Access specifier
    int Roll;

public:
    void setroll(int r); // Setter
    int getrollno();     // Getter 
    // We can write any name after get and set.
};
// Method defination outside the class
// Testing encapsulation outside the class
void students::setroll(int r)
{
    Roll = r;
}
int students::getrollno()
{
    return Roll;
}

main()
{
    string name;
    int a;
    students mohan;
    string star = "*";
    int i = 0;
    string d;
    for (string s; i < 81; i++)
    {
        d = s.append(star);
    }
    cout << d << "\n";
    cout << "please enter name : ";
    getline(cin, name);
    cout << d;
    cout << "\nplease enter roll no.  : ";
    cin >> a;
    cout << d << "\n";
    mohan.setroll(a);
    cout << name << " has roll no. " << mohan.getrollno();
    cout << "\n"
         << d << "\n";
    system("pause");
    return 0;
}