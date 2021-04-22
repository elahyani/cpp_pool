/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:23:43 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/22 17:14:04 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main()
{
	{
		int intArr[4] = {1, 2, 3, 4};
		int len = 4;

		::iter<int>(intArr, len, showElement);
		std::cout << std::endl;
	}

	{
		char chrArr[5] = {'a', 'b', 'c', 'd', 'e'};
		int len = 5;

		::iter<char, int>(chrArr, len, showElement);
		std::cout << std::endl;
	}

	{
		std::string strArr[6] = {"aaa", "bbb", "ccc", "ddd", "eee", "fff"};
		int len = 6;

		::iter<std::string, int>(strArr, len, showElement);
		std::cout << std::endl;
	}

	return (0);
}