/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:38:47 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/26 23:48:59 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : _len(N)
{
}

Span::Span(const Span &src)
{
    this->_len = src._len;
    this->lst.clear();
    this->lst = src.lst;
}

Span &Span::operator=(const Span &rhs)
{
    if (this != &rhs)
    {
        this->_len = rhs._len;
        this->lst.clear();
        this->lst = rhs.lst;
    }
    return *this;
}

Span::~Span()
{
    this->lst.clear();
}

const char *Span::ListOfNumbersFullException::what() const throw()
{
    return "The list is already FUll";
}

const char *Span::LessElementThenRequiredException::what() const throw()
{
    return "Too few element";
}

void Span::addNumber(int nbr)
{
    if (this->lst.size() == this->_len)
        throw Span::ListOfNumbersFullException();
    lst.push_back(nbr);
}

int Span::shortestSpan(void) const
{
    if (lst.size() <= 1)
        throw Span::LessElementThenRequiredException();
    std::list<int> tmp = this->lst;
    std::list<int>::iterator it = tmp.begin();
    std::list<int>::iterator it2 = it++;
    std::list<int>::iterator ite = tmp.end();
    
    int min;
    int sub = 0;

    for (; it != ite; it++)
    {
        min = *it - *it2;
        if (sub < min)
            
    }
}

int Span::longestSpan(void) const
{
    if (lst.size() <= 1)
        throw Span::LessElementThenRequiredException();
    int maxNbr = *std::max_element(lst.begin(), lst.end());
    int minNbr = *std::min_element(lst.begin(), lst.end());
    return (maxNbr - minNbr);
}