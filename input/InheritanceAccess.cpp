#include <iostream>
using namespace std;

class employee
{
protected: // Protected class
    int salary;
};

class derivedemployee : public employee
{ // Derived from employee class
public:
    void setsalary(int s)
    {
        salary = s;
    }
    int getsalary()
    {
        return salary;
    }
};

main()
{
    derivedemployee obj;
    obj.setsalary(500);
    cout << obj.getsalary() << "\ns";
    system("pause");
    return 0;
}