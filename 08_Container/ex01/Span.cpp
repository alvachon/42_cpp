#include "Span.h"

Span::Span(unsigned int N) : _N(N) { return ; }

Span::~Span(){ return ; }

Span::Span(Span & src, unsigned int N) : _N(N)
{
    *this = src;
    return ;
}

Span& Span::operator=(const Span & rhs)
{
    if (this != &rhs)
    {
        this->_N = rhs._N;
        this->_v = rhs._v;
    }
    return *this;
}

void Span::addNumber(unsigned int N)
{
    if (this->_v.size() < this->_N)
        this->_v.push_back(N);
    else
        throw std::exception();
    return ;
}

int Span::shortestSpan(void)
{
    std::vector<int>::iterator it;
    std::vector<int>::iterator it2;
    int min = 0;

    if (this->_v.size() < 2)
        throw std::exception();
    for (it = this->_v.begin(); it != this->_v.end(); it++)
    {
        for (it2 = this->_v.begin(); it2 != this->_v.end(); it2++)
        {
            if (it != it2)
            {
                if (min == 0)
                    min = abs(*it - *it2);
                else if (abs(*it - *it2) < min)
                    min = abs(*it - *it2);
            }
        }
    }
    return min;
}

int Span::longestSpan(void)
{
    std::vector<int>::iterator it;
    std::vector<int>::iterator it2;
    int max = 0;

    if (this->_v.size() < 2)
        throw std::exception();
    for (it = this->_v.begin(); it != this->_v.end(); it++)
    {
        for (it2 = this->_v.begin(); it2 != this->_v.end(); it2++)
        {
            if (it != it2)
            {
                if (max == 0)
                    max = abs(*it - *it2);
                else if (abs(*it - *it2) > max)
                    max = abs(*it - *it2);
            }
        }
    }
    return max;
}
