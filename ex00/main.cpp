#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(int c, char** v)
{
    if (c == 1)
    {
        std::cout << "Bad arguments.\n";
        std::cout << "[Please Enter Array of numbers]\n";
        return 0;
    }
    std::vector<int> vecotr(c - 1);
    for (size_t i = 0; i < (size_t)c - 1; i++)
    {
        vecotr[i] = atoi(v[i + 1]);
    }

    while (1)
    {
        int inputNumber;
        std::cout << "tofind : ";
        if (!(std::cin >> inputNumber))
        {
            if (std::cin.eof())
            {
                std::cout << "End of input.\n";
                break;
            }
            else
            {
                std::cout << "Invalid input. Please enter a number.\n";
                std::cin.clear();
                break;
            }
        }
        try
        {
            ::easyfind<std::vector<int>, std::vector<int>::iterator>(vecotr, inputNumber);
        }
        catch (const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}
