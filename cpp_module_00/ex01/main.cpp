/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:49:24 by elahyani          #+#    #+#             */
/*   Updated: 2021/02/28 12:02:08 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonbook.class.hpp"

void	phonebook_header()
{
	std::cout << "\n...................[ PhoneBook ]..................." << std::endl;
	std::cout << "+-------------------------------------------------+" << std::endl;
	std::cout << "|                  Accepted commands              |" << std::endl;
	std::cout << "+--------+----------------------------------------+" << std::endl;
	std::cout << "| ADD    | add a contact to phonebook.            |" << std::endl;
	std::cout << "+--------+----------------------------------------+" << std::endl;
	std::cout << "| SEARCH | display a list of available contacts.  |" << std::endl;
	std::cout << "+--------+----------------------------------------+" << std::endl;
	std::cout << "| EXIT   | quit the program.                      |" << std::endl;
	std::cout << "+--------+----------------------------------------+\n" << std::endl;
}

int main()
{
	Phonebook	phonebook;
	std::string	cmd;

	phonebook_header();
	while (1)
	{
		std::cout << "Insert a command: ";
		std::cin >> cmd;
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "EXIT")
			return (0);
		else if (cmd == "SEARCH")
			phonebook.showContact();
		else
			std::cout << "Invalid command" <<  std::endl;
	}
	return (0);
}