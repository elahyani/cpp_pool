/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:29:27 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/17 16:44:37 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct	Data
{
	int		x;
	int		y;
	int		z;
	char	c;
	bool	b;
	bool	q;
	char	p;
};

// void *serialize(void)
// {
// }
// Data *deserialize(void *raw)
// {
// }

int main()
{
	Data	data;

	data.x = 5;
	data.y = 10;
	data.z = 15;
	data.c = 'a';
	data.b = true;

	int	* p = reinterpret_cast<int*>(&data);
	
	std::cout << "size of data: " << sizeof(data) << std::endl;
	std::cout << "size of data: " << sizeof(*p) << std::endl;
	std::cout << std::endl;
	
	std::cout << "*p: " << *p << std::endl;
	std::cout << std::endl;
	
	p++;
	
	std::cout << "*p: "<< *p << std::endl;
	std::cout << "size of data: " << sizeof(*p) << std::endl;
	std::cout << std::endl;

	p++;

	char * ch = reinterpret_cast<char*>(p);

	std::cout << "ch: " << *ch << std::endl;
	std::cout << "size of data: " << sizeof(*ch) << std::endl;
	std::cout << std::endl;

	ch++;
	
	bool * n = reinterpret_cast<bool*>(ch);
	
	std::cout << "bool: " << *n << std::endl;
	std::cout << "size of data: " << sizeof(*n) << std::endl;
	std::cout << std::endl;

	std::cout << *(reinterpret_cast<bool*>(ch)) << std::endl;
	std::cout << std::endl;

	return 0;
}