#include <iostream>

void design(std::string design, int total)
{
    int i = 0;
    std::string d;
    for (design; i < total; i++)
    {
        d.append(design);
    }
    std::cout << d << "\n";
}