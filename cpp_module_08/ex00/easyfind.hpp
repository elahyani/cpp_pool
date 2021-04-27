/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:36:17 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/27 15:24:11 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <map>

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
	return res;
}

template <typename K, typename V>
typename std::map<K, V>::iterator easyfind(std::map<K, V> &arr, int const &toFind)
{
	typename std::map<K, V>::iterator it = arr.begin();
	typename std::map<K, V>::iterator ite = arr.end();

	for (; it != ite; it++)
	{
		if (it->second == toFind)
			return it;
	}
	throw ValueNotFoundException();
}

template <typename K, typename V>
typename std::multimap<K, V>::iterator easyfind(std::multimap<K, V> &arr, int const &toFind)
{
	typename std::multimap<K, V>::iterator it = arr.begin();
	typename std::multimap<K, V>::iterator ite = arr.end();

	for (; it != ite; it++)
	{
		if (it->second == toFind)
			return it;
	}
	throw ValueNotFoundException();
}

#endif