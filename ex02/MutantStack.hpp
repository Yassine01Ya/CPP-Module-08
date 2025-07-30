#pragma once

#include<iostream>
#include<stack>
#include<deque>
#include<iterator>

template<class T, class container = std::deque<T> >
class MutantStack : public std::stack<T>
{

public:
    MutantStack();
    MutantStack(const MutantStack &cpy);
    MutantStack &operator=(const MutantStack &cpy);
    ~MutantStack();

    typedef typename container::iterator iterator;

    iterator begin();
    iterator end();

};

#include "MutantStack.tpp"

