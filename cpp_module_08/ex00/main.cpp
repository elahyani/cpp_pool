/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:35:45 by elahyani          #+#    #+#             */
/*   Updated: 2021/05/02 14:03:28 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
	{
		std::list<int> lst;

		for (int i = 0; i < 10; i++)
			lst.push_back(i);
		try
		{
			std::cout << "Value " << *(easyfind(lst, 0)) << " found!" << std::endl;
			std::cout << "Value " << *(easyfind(lst, 3)) << " found!" << std::endl;
			std::cout << "Value " << *(easyfind(lst, 7)) << " found!" << std::endl;
			std::cout << "Value " << *(easyfind(lst, -1)) << " found!" << std::endl;
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
			vct.push_back(i);
		try
		{
			std::cout << "Value " << *(easyfind(vct, 15)) << " found!" << std::endl;
			std::cout << "Value " << *(easyfind(vct, 17)) << " found!" << std::endl;
			std::cout << "Value " << *(easyfind(vct, 19)) << " found!" << std::endl;
			std::cout << "Value " << *(easyfind(vct, 20)) << " found!" << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << '\n';
		}
		std::cout << std::endl;
	}

	{
		std::map<int, int> mp;

		for (int i = 20; i < 30; i++)
			mp[i] = i;
		try
		{
			std::cout << "Value " << easyfind(mp, 25)->second << " found!" << std::endl;
			std::cout << "Value " << easyfind(mp, 27)->second << " found!" << std::endl;
			std::cout << "Value " << easyfind(mp, 29)->second << " found!" << std::endl;
			std::cout << "Value " << easyfind(mp, 33)->second << " found!" << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << '\n';
		}
		std::cout << std::endl;
	}

	{
		std::multimap<int, int> mmp;

		for (int i = 30; i < 40; i++)
			mmp.insert(std::pair<int, int>(i, i));
		try
		{
			std::cout << "Value " << easyfind(mmp, 35)->second << " found!" << std::endl;
			std::cout << "Value " << easyfind(mmp, 37)->second << " found!" << std::endl;
			std::cout << "Value " << easyfind(mmp, 39)->second << " found!" << std::endl;
			std::cout << "Value " << easyfind(mmp, 41)->second << " found!" << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << '\n';
		}
		std::cout << std::endl;
	}
	return (0);
}