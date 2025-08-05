#include "Span.hpp"
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main()
{
    // Span sp = Span(5);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    // return 0;
    Span numbers(10);
    numbers.addNumber(1);
    numbers.addNumber(77);
    numbers.addNumber(99);
    numbers.addNumber(87);
    numbers.addNumber(177);
    numbers.addNumber(106);
    numbers.addNumber(23);
    numbers.addNumber(9);


    try
    {
        numbers.addNumber(19);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    int nbs[] = {111,3,5,7};
    try
    {
        numbers.addNumbers(nbs, nbs + 1);
        numbers.addNumbers(nbs + 1, nbs + 2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "-------------------------------\n";

    for (size_t i = 0; i < numbers.getLenght(); i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n-------------------------------\n";

    try
    {
        std::cout << numbers[10] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::cout << "ShortestSpan = " << numbers.shortestSpan() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
         std::cout << "longestSpan = " << numbers.longestSpan() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}