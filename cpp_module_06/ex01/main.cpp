/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:29:27 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/18 15:50:25 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct Data
{
	std::string *p1;
	int nbr;
	std::string *p2;
} __attribute__((packed));

std::string getRandomString()
{
	std::string rAlpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	std::string rString;

	srand(clock());
	for (int i = 0; i < 20; i++)
	{
		rString += rAlpha[rand() % 62];
	}
	return rString;
}

void *serialize(void)
{
	Data *data = new Data;

	data->p1 = new std::string;
	data->p2 = new std::string;

	*data->p1 = getRandomString();
	*data->p2 = getRandomString();
	data->nbr = rand() % 10000;

	std::cout << "str1 = " << *data->p1 << std::endl;
	std::cout << "str2 = " << *data->p2 << std::endl;
	std::cout << "nbr  = " << data->nbr << std::endl;
	std::cout << std::endl;

	// std::cout << "size = " << sizeof(data->p1) + sizeof(data->p2) + sizeof(data->nbr) << std::endl;
	std::cout << "size = " << sizeof(*data) << std::endl;

	return reinterpret_cast<void *>(data);
}

Data *deserialize(void *raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	void *raw;
	Data *data;

	std::cout << std::endl;
	std::cout << "Serialize data: " << std::endl;
	raw = serialize();

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Deserialize data: " << std::endl;
	data = deserialize(raw);

	std::cout << "P1 = " << *data->p1 << std::endl;
	std::cout << "P2 = " << *data->p2 << std::endl;
	std::cout << "nb = " << data->nbr << std::endl;

	std::cout << std::endl;
	std::cout << "size = " << sizeof(*data) << std::endl;

	delete data->p1;
	delete data->p2;
	delete data;

	return 0;
}