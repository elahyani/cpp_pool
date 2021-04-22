/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wathever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 13:49:33 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/22 14:12:43 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
T const &max(T const &x, T const &y)
{
	return (x > y ? x : y);
}

template <typename T>
T const &min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

template <typename T>
void swap(T &x, T &y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

#endif