/* Access specifier can make the attributes and methods of a class 
 Public - In this we can access attributes and methods from anywhere.
 Private - In this we cann't access any attributes and methods from outside the class.
 Protected - members cannot be accessed from outside the class, however, they can be accessed in inherited class.
 */

// Now we will try a code

#include <iostream>
#include <string>
using namespace std;

class students
{
public:
    string name = "Yogesh kartik";
    int roll = 19;

private:
    int dob = 01022000;
};

main()
{
    students person;
    cout << "Roll no. of " << person.name << " is " << person.roll << "\n";
    // cout << "D.O.B. of " << person.name << " is " << person.dob << "\n";
    system("pause");
    return 0;
}