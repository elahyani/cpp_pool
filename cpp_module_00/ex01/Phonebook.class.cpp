/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:33:57 by elahyani          #+#    #+#             */
/*   Updated: 2021/02/28 12:14:44 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonbook.class.hpp"

Phonebook::Phonebook() {
	this->index = 0;
	return ;
}

Phonebook::~Phonebook() {
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

// std::string	Phonebook::takeInfo()
// {
// 	std::string info;

	
// 	return (info);
// }

void	Phonebook::addContact()
{
	if (index < 8)
	{	
		contact[index].setFirstName();
		contact[index].setLastName();
		contact[index].setNickname();
		contact[index].setLogin();
		contact[index].setPostalAddr();
		contact[index].setEmailAddr();
		contact[index].setPhoneNum();
		contact[index].setBirthDate(); // protect it
		contact[index].setFavMeal();
		contact[index].setUnderwearClr();
		contact[index].setDarkestSecret();
		std::cout << "[ + ] Contact added successfully.\n" << std::endl;
		index++;
	}
	else
	{
		std::cout << "Phonebook is FULL" <<std::endl;
		return ;		
	}
}

void	Phonebook::showSpecContact(int j)
{
	int		limit;

	std::cout << "Insert index desired: ";
	std::cin >> limit;

	if (index >= 0 && index < j && std::cin.good())
	{
		std::cout << "------------------------------------" << std::endl;
		std::cout << "First name: " << contact[index].getFirstName() << std::endl;
		std::cout << "Last name: " << contact[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contact[index].getNickname() << std::endl;
		std::cout << "Login: " << contact[index].getLogin() << std::endl;
		std::cout << "Postal adress: " << contact[index].getPostalAddr() << std::endl;
		std::cout << "Email adress: " << contact[index].getEmailAddr() << std::endl;
		std::cout << "Phone number: " << contact[index].getPhoneNum() << std::endl;
		std::cout << "Birthday date: " << contact[index].getBirthDate() << std::endl;
		std::cout << "Favorite meal: " << contact[index].getFavMeal() << std::endl;
		std::cout << "Underwear color: " << contact[index].getUnderwearClr() << std::endl;
		std::cout << "Darkest secret: " << contact[index].getDarkestSecret() << std::endl;
		std::cout << "------------------------------------" << std::endl;
	}
	else
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		std::cout << "Invalid index" << std::endl;
	}
}

void	Phonebook::showContact()
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|" << std::setw(10)
			  << "index" << "|" << std::setw(10)
			  << "first name" << "|" << std::setw(10) 
			  << "last name" << "|" << std::setw(10)
			  << "nickname" << "|" << std::setw(10)
			  << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	if (index)
	{
		int j = 0;
		while (j < index)
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
