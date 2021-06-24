#include <iostream>
using namespace std;

class employee
{
private:
    int salary;

public:
    // setter
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};
main()
{
    employee sohan;
    sohan.setSalary(3000);
    cout << "The salary of sohan is : " << sohan.getSalary() << "\n";
    system("pause");
    return 0;
}