/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:33:57 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/01 12:24:19 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonbook.class.hpp"
#include <iostream>

Phonebook::Phonebook(void) {
	this->id = 0;
	return ;
}

Phonebook::~Phonebook(void) {
	return ;
}

std::string	Phonebook::truncate_string(std::string str)
{
	std::string	dest;

	if (str.length() > 10)
	{
		dest = str.substr(0, 9);
		dest += ".";
		return (dest);
	}
	return (str);
}

void	Phonebook::addContact(void)
{
	std::tm	birthdate;
	
	if (id < 8)
	{	
		contact[id].setFirstName();
		contact[id].setLastName();
		contact[id].setNickname();
		contact[id].setLogin();
		contact[id].setPostalAddr();
		contact[id].setEmailAddr();
		contact[id].setPhoneNum();
		while (true)
		{
			std::cout << "Birthday date (dd/mm/yy): ";
			if (!(std::cin >> std::get_time(&birthdate, "%d/%m/%Y")))
			{
				std::cout << "invalid format, try the form => [dd/mm/yyyy]." << std::endl;
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
			}
			else
			{
				contact[id].setBirthDate(birthdate);
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
				break ;
			}
		}
		contact[id].setFavMeal();
		contact[id].setUnderwearClr();
		contact[id].setDarkestSecret();
		id++;
		std::cout << "\n+-----------------------------------+" << std::endl;
		std::cout << "|  [+] Contact added successfully.  |" << std::endl;
		std::cout << "+-----------------------------------+\n" << std::endl;
	}
	else
	{
		std::cout << "+-------------------+" <<std::endl;
		std::cout << "| Phonebook is FULL |" <<std::endl;
		std::cout << "+-------------------+" <<std::endl;
		return ;
	}		
}

void	Phonebook::showSpecContact(int j)
{
	int		pos;
	std::tm	birthdate;

	while (true)
	{
		std::cout << "Insert contact index desired to get full info about it: ";
		if (!(std::cin >> pos) || pos < 0 || pos >= j)
		{
			std::cout << "Invalid index." << std::endl;
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}
		else
			break ;
	}
	std::cout << "------------------------------------" << std::endl;
	std::cout << "First name: " << contact[pos].getFirstName() << std::endl;
	std::cout << "Last name: " << contact[pos].getLastName() << std::endl;
	std::cout << "Nickname: " << contact[pos].getNickname() << std::endl;
	std::cout << "Login: " << contact[pos].getLogin() << std::endl;
	std::cout << "Postal adress: " << contact[pos].getPostalAddr() << std::endl;
	std::cout << "Email adress: " << contact[pos].getEmailAddr() << std::endl;
	std::cout << "Phone number: " << contact[pos].getPhoneNum() << std::endl;
	birthdate = contact[pos].getBirthDate();
	std::cout << "Birthday date: " << std::put_time(&birthdate, "%d/%m/%Y") << std::endl;
	std::cout << "Favorite meal: " << contact[pos].getFavMeal() << std::endl;
	std::cout << "Underwear color: " << contact[pos].getUnderwearClr() << std::endl;
	std::cout << "Darkest secret: " << contact[pos].getDarkestSecret() << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}

void	Phonebook::showContact(void)
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|" << std::setw(10)
			  << "index" << "|" << std::setw(10)
			  << "first name" << "|" << std::setw(10) 
			  << "last name" << "|" << std::setw(10)
			  << "nickname" << "|" << std::setw(10)
			  << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	if (id)
	{
		int j = 0;
		while (j < id)
		{
			std::cout << "|" << std::setw(10)
					  << j << "|" << std::setw(10)
					  << truncate_string(contact[j].getFirstName()) << "|" << std::setw(10)
					  << truncate_string(contact[j].getLastName()) << "|" << std::setw(10)
					  << truncate_string(contact[j].getNickname()) << "|" << std::setw(10)
					  << std::endl;
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			j++;
		}
		showSpecContact(j);
	}
	else
	{
		for (int k = 0; k < 4; k++) {
			std::cout << "|" << std::setw(11);
		}
		std::cout << "|" << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
	}
}
