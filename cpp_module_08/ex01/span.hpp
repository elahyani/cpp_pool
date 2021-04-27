/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:38:47 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/27 16:24:17 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

class Span
{

private:
	unsigned int _len;
	std::vector<int> lst;
	Span();

public:
	class ListOfNumbersFullException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class LessElementThenRequiredException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	Span(unsigned int);
	Span(const Span &src);
	Span &operator=(const Span &rhs);
	~Span();

	void addNumber(int nbr);
	void addRange(std::vector<int>::iterator it, std::vector<int>::iterator ite);
	int shortestSpan() const;
	int longestSpan() const;
};

#endif