#pragma once

#include <iostream>
#include <exception>
#include <algorithm>

class Span
{
    public:
    class FullSpanException : public std::exception
    {
        const char* what() const throw();
    };

    class SpanNotFoundException : public std::exception
    {
        const char *what() const throw();
    };

private:

    int *array;
    unsigned int Size;
    unsigned int lenght;

public:
    Span(unsigned int N);
    Span(const Span &s);
    Span &operator=(const Span &cpy);
    int &operator[](unsigned int);
    ~Span();
    void addNumber(int num);
    void addNumbers(int *begin, int *end);
    unsigned int getSize() const;
    unsigned int getLenght() const;
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

};
