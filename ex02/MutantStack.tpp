#include "MutantStack.hpp"

template<class T, class container>
MutantStack<T, container>::MutantStack()
{
}

template <class T, class container>
MutantStack<T, container>::MutantStack(const MutantStack &cpy)
{
    *this = cpy;
}

template <class T, class container>
MutantStack<T, container> &MutantStack<T, container>::operator=(const MutantStack &cpy)
{
    (void)cpy;
    return *this;
}

template <class T, class container>
MutantStack<T, container>::~MutantStack()
{
}

template <class T, class container>
typename MutantStack<T, container>::iterator MutantStack<T, container>::begin()
{
    return this->c.begin();
}
template <class T, class container>
typename MutantStack<T, container>::iterator MutantStack<T, container>::end()
{
    return this->c.end();
}
