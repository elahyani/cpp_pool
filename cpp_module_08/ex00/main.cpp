/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:35:45 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/26 16:30:07 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <map>

int main()
{
	{
		std::list<int> lst;

		for (int i = 0; i < 10; i++)
		{
			lst.push_back(i);
		}
		try
		{
			std::cout << "Value " << *(easyfind(lst, 0)) << " founded!" << std::endl;
			std::cout << "Value " << *(easyfind(lst, 3)) << " founded!" << std::endl;
			std::cout << "Value " << *(easyfind(lst, 7)) << " founded!" << std::endl;
			std::cout << "Value " << *(easyfind(lst, -1)) << " founded!" << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << '\n';
		}
		std::cout << std::endl;
	}

	{
		std::vector<int> vct;

		for (int i = 10; i < 20; i++)
		{
			vct.push_back(i);
		}
		try
		{
			std::cout << "Value " << *(easyfind(vct, 15)) << " founded!" << std::endl;
			std::cout << "Value " << *(easyfind(vct, 17)) << " founded!" << std::endl;
			std::cout << "Value " << *(easyfind(vct, 19)) << " founded!" << std::endl;
			std::cout << "Value " << *(easyfind(vct, 20)) << " founded!" << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << '\n';
		}
		std::cout << std::endl;
	}
	return (0);
}