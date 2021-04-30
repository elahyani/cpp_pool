/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:38:47 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/28 15:19:03 by elahyani         ###   ########.fr       */
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

void Span::addRange(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
    for (; it != ite; ++it)
        this->lst.push_back(*it);
}

int Span::shortestSpan(void) const
{
    if (lst.size() <= 1)
        throw Span::LessElementThenRequiredException();
    std::vector<int> tmp = this->lst;

    int min = std::numeric_limits<int>::max();
    int sub = 0;

    for (size_t i = 0; i < tmp.size(); i++)
    {
        for (size_t j = 0; j < tmp.size(); j++)
        {
            if (tmp[j] == tmp[i])
                continue;
            sub = abs(tmp[j] - tmp[i]);
            if (sub < min)
                min = sub;
        }
    }
    return min;
}

int Span::longestSpan(void) const
{
    if (lst.size() <= 1)
        throw Span::LessElementThenRequiredException();
    int maxNbr = *std::max_element(lst.begin(), lst.end());
    int minNbr = *std::min_element(lst.begin(), lst.end());
    return (maxNbr - minNbr);
}