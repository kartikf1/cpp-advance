#include <iostream>
#include <fstream>
using namespace std;

main()
{
    string text;
    ifstream exacttest("sample3.txt");
    while (getline(exacttest, text))
    {
        cout << text;
        cout << "\n";
    }
    exacttest.close();
    system("pause>0");
    return 0;
}