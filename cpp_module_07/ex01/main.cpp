/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:23:43 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/25 14:28:56 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>
void showElement(T const &elem)
{
	std::cout << elem << std::endl;
}

int main()
{
	int len = 5;
	{
		int intArr[5] = {1, 2, 3, 4, 5};

		::iter(intArr, len, showElement);
		std::cout << std::endl;
	}

	{
		float floatArr[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

		::iter(floatArr, len, showElement);
		std::cout << std::endl;
	}

	{
		double doubleArr[5] = {1.10, 2.20, 3.30, 4.40, 5.50};

		::iter(doubleArr, len, showElement);
		std::cout << std::endl;
	}

	{
		std::string strArr[5] = {"aaa", "bbb", "ccc", "ddd", "eee"};

		::iter(strArr, len, showElement);
		std::cout << std::endl;
	}

	{
		std::string *empty;

		::iter(empty, len, showElement);
		std::cout << std::endl;
	}

	return (0);
}
