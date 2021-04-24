/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:16:16 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/24 17:15:57 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	{
		Array<int> dArr;
		Array<int> pArr(5);

		for (size_t i = 0; i < pArr.size(); i++)
		{
			pArr[i] = 0;
			std::cout << pArr[i] << std::endl;
		}
		std::cout << std::endl;

		Array<int> cArr(pArr);

		cArr[0] = 5;
		cArr[1] = 1213;
		for (size_t i = 0; i < cArr.size(); i++)
			std::cout << cArr[i] << std::endl;
		std::cout << std::endl;

		Array<int> aArr(10);
		aArr = cArr;
		aArr[2] = 1337;
		for (size_t i = 0; i < aArr.size(); i++)
			std::cout << aArr[i] << std::endl;
		std::cout << std::endl;
	}

	{
		Array<float> fArr(5);

		for (size_t i = 0; i < fArr.size(); i++)
		{
			fArr[i] = 0.0f;
			std::cout << fArr[i] << std::endl;
		}
		std::cout << std::endl;
		try
		{
			std::cout << fArr[5] << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << '\n';
		}
	}

	{
		Array<std::string> sArr(5);

		for (size_t i = 0; i < sArr.size(); i++)
		{
			sArr[i] = std::to_string(i).append("str");
			std::cout << sArr[i] << std::endl;
		}
		std::cout << std::endl;
		try
		{
			std::cout << sArr[-5] << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << '\n';
		}
	}
	return (0);
}