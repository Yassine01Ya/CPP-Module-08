#include "MutantStack.hpp"

int main()
{
    /*
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop(); 
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
// [...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
return 0;
    */

   MutantStack<int> mstack;
    mstack.push(1);
    mstack.push(5);
    mstack.push(4);
    mstack.push(4);
    mstack.push(5);
    mstack.push(6);
    mstack.push(96);
    mstack.push(0);

    std::cout << "the size of stack before poping = " << mstack.size() << std::endl;
    std::cout << "the top of stack befor poping = " <<  mstack.top() << std::endl;
    std::cout << "-------------------------\n";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n-------------------------\n";
    mstack.pop();
    std::cout << "the size of stack after poping = " << mstack.size() << std::endl;
    std::cout  << "the top of stack after poping = " <<  mstack.top() << std::endl;
}