#include <iostream>
#include <fstream>
using namespace std;

main()
{
    ofstream MyFile("hello.txt");                            // create a file
    MyFile << "Hello universe. I am currently learning c++"; // Write to that file
    MyFile.close();                                          // close the file
    system("pause");
    return 0;
}