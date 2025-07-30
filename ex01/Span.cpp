#include "Span.hpp"

const char *Span::FullSpanException::what() const throw()
{
    return "Span::FullSpanException";
}

const char* Span::SpanNotFoundException::what() const throw()
{
    return "Span::SpanNotFoundException";
}
Span::Span(unsigned int N) : Size(N), lenght(0)
{
    array = new int[N];
}

Span::Span(const Span &s)
{
    *this = s;
}

Span &Span::operator=(const Span &cpy)
{
    if (this == &cpy)
        return *this;
    // delete[] array;
    Size = cpy.Size;
    array = new int[Size];
    std::copy(cpy.array, cpy.array + cpy.lenght, array);
    return *this;
}

int &Span::operator[](unsigned int i)
{
    // std::cout << "lenght = " << lenght << std::endl;
    if (i < lenght)
        return array[i];
    throw Span::SpanNotFoundException();
}

Span::~Span()
{
    delete[]array;
}

void Span::addNumber(int num)
{
    if (lenght >= Size)
        throw Span::FullSpanException();
    array[lenght] = num;
    lenght++;
}

void Span::addNumbers(int*begin, int*end)
{
    if (begin == end)
        return;
    if (end - begin > Size - lenght)
        throw Span::FullSpanException();
    std::copy(begin, end, array + lenght);
    lenght += end - begin;
}

unsigned int Span::getSize() const
{
    return Size;
}

unsigned int Span::getLenght() const
{
    return lenght;
}

unsigned int Span::shortestSpan() const
{
    if (lenght < 2)
        throw Span::SpanNotFoundException();
     Span sortSpan = *this;
    std::sort(sortSpan.array, sortSpan.array + lenght);
    int shortSpanResult = INT_MAX;
    for (size_t i = 0; i < lenght - 1; i++)
    {
        int isShort = sortSpan.array[i + 1] - sortSpan.array[i];
        
        if (isShort < shortSpanResult)
             shortSpanResult = isShort;
    }
    return shortSpanResult;
}

unsigned int Span::longestSpan() const
{
    if (lenght < 2)
        throw Span::SpanNotFoundException();
    int* max = std::max_element(array, array + lenght);
    int* min = std::min_element(array, array + lenght);
    return (*max - *min);
}
