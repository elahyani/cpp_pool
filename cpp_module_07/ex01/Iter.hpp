/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:23:46 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/22 17:14:05 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void showElement(T const &elem)
{
	std::cout << elem << std::endl;
}

template <typename T, typename Y>
void iter(T const *x, Y const &y, void (*z)(T const &))
{
	std::cout << "array addr     : " << x << std::endl;
	std::cout << "array len      : " << y << std::endl;
	std::cout << "array elements : " << std::endl;
	for (int i = 0; i < y; i++)
		z(x[i]);
}

#endif