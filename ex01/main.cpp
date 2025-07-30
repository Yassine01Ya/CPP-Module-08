#include "Span.hpp"
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

// int main()
// {
//     {
//         Span sp = Span(5);
//         sp.addNumber(6);
//         sp.addNumber(3);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);
//         std::cout << sp.shortestSpan() << std::endl;
//         std::cout << sp.longestSpan() << std::endl;
//         try
//         {
//             sp.addNumber(11);
//         }
//         catch (const std::exception &e)
//         {
//             std::cerr << e.what() << '\n';
//         }
//         int nums[] = {1, 2, 3};
//         try
//         {
//             sp.addNumbers(nums, nums + 1);
//             sp.addNumbers(nums + 1, nums + 3);
//         }
//         catch (const std::exception &e)
//         {
//             std::cerr << e.what() << '\n';
//         }
//     }
//     {
//         Span sp = Span(3);
//         int nums[] = {1, 2, 3};
//         std::cout << "Adding range of numbers at once:\n";
//         sp.addNumbers(nums, nums + 3);
//         for (size_t i = 0; i < sp.getLenght(); i++)
//         {
//             std::cout << sp[i] << '\n';
//         }
//     }
//     {
//         Span sp = Span(3);
//         std::cout << "Calculating shortest & longest span without adding numbers:\n";
//         try
//         {
//             // std::cout << sp.shortestSpan() << std::endl;
//         }
//         catch (const std::exception &e)
//         {
//             std::cerr << e.what() << '\n';
//         }
//         try
//         {
//             // std::cout << sp.longestSpan() << std::endl;
//         }
//         catch (const std::exception &e)
//         {
//             std::cerr << e.what() << '\n';
//         }
//     }
//     // std::vector<int> numbers ;

//     // Span numbers(10);

//     // numbers.addNumber(5);
//     // numbers.addNumber(78);
//     // numbers.addNumber(1);
//     // numbers.addNumber(0);
//     // numbers.addNumber(-1);
//     // numbers.addNumber(3667);
//     // numbers.addNumber(2);
//     // numbers.addNumber(45);

//     // for (size_t i = 0; i < numbers.getLenght(); i++)
//     //     std::cout << numbers[i] << " ";
    

//     // std::cout << "ShortestSpan is = [" << numbers.shortestSpan() << "]\n";
//     // std::cout << "longestSpan is = [" << numbers.longestSpan() << "]\n";

// //     for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
// //         std::cout << *it << " ";
// //     std::sort(numbers.begin(), numbers.end());
// //     std::cout << "\n-------------------------------\nNumbers is Sorted by sort algo\n-------------------------------\n";  
// //    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
// //         std::cout << *it << " ";
// // }
//     return 0;
// }

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
    numbers.addNumber(4);
    numbers.addNumber(99);
    numbers.addNumber(87);
    numbers.addNumber(17);
    numbers.addNumber(106);
    numbers.addNumber(23);
    numbers.addNumber(9);

    // std::cout << numbers.shortestSpan() << "\n";
    // std::cout << numbers.longestSpan() << "\n";
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