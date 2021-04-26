/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:38:47 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/26 16:42:21 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>

class Span
{

private:
	unsigned int _N;

public:
	Span();
	Span(unsigned int);
	Span(const Span & src);
	Span&	operator=(const Span &rhs);
	~Span();

	void	addnumber(int nbr);
	void	shortestSpan();
	void	longestestSpan();

};

#endif