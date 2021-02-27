/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:49:24 by elahyani          #+#    #+#             */
/*   Updated: 2021/02/27 17:08:35 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonbook.h"
#include "myContact.class.hpp"

int main()
{
	int			j = 0;
	int			i = 0;
	int			done = 0;
	myContact	contact[8];
	std::string	cmd;

	phonebook_header();
	while (1)
	{
		std::cout << "Insert a command: ";
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			if (i < 8)
			{
				addContact(contact, i);
				done = 1;
				i++;
			}
			else
				std::cout << "You can't add more contacts, phonebook is FULL."  << std::endl;
		}
		else if (cmd == "EXIT")
			return (0);
		else if (cmd == "SEARCH")
			showContact(contact, i, j, done);
		else
			std::cout << "Invalid command, please insert one of the three commands: ADD, SEARCH or EXIT" <<  std::endl;
	}
	return (0);
}