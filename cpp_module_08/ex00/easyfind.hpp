/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:36:17 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/26 16:38:37 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <map>
#include <algorithm>

class ValueNotFoundException : public std::exception
{
public:
	const char *what() const throw()
	{
		return ("value not found.");
	}
};

template <typename T>
typename T::iterator easyfind(T &arr, int const &toFind)
{
	typename T::iterator it = arr.begin();
	typename T::iterator ite = arr.end();
	typename T::iterator res = std::find(it, ite, toFind);

	if (res == ite)
		throw ValueNotFoundException();
	return (res);
}

#endif