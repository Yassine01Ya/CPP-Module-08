#pragma once
#include <algorithm>
#include <exception>
#include <iostream>
#include <iterator>
#include <string>

template <class T, class it>
it easyfind(T arr, int number)
{
    it s = find(arr.begin(), arr.end(), number);
    if (s == arr.end())
        throw std::runtime_error("No Occurrence of number is found");
    // std::cout << "No Occurrence of number is found\n";
    // else
    std::cout << "Occurrence of number is found [" << *s << "]" << std::endl;
    return s;
};