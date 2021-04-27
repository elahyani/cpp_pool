/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 15:25:28 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/27 16:37:40 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	srand(clock());

	{
		try
		{
			Span sp = Span(15);

			std::vector<int> lst;
			for (int i = 0; i < 15; i++)
				lst.push_back(rand() % 30);
			sp.addRange(lst.begin(), lst.end());
			std::cout << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}

	{
		try
		{
			Span sp = Span(5);
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	{
		try
		{
			Span sp = Span(13);
			sp.addNumber(5);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	{
		try
		{
			Span sp = Span(5);
			for (int i = 0; i < 6; i++)
				sp.addNumber(rand() % 20);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	{
		try
		{
			Span sp = Span(10000);
			for (int i = 0; i < 10000; i++)
				sp.addNumber(rand() % 10000);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	return (0);
}