/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:23:46 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/25 15:52:46 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T const *arr, unsigned int const &len, void (*f)(T const &))
{
	if (!arr)
		return;
	for (int i = 0; (unsigned int)i < len; i++)
		(*f)(arr[i]);
}

#endif
