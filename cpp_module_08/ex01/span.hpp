/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:38:47 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/26 23:21:18 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>

class Span
{

private:
	unsigned int _len;
	std::list<int> lst;
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
	int shortestSpan() const;
	int longestSpan() const;
};

#endif