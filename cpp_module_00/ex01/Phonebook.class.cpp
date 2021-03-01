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
#define INT_MAX 2147483647

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

std::string	Phonebook::takeInfo(std::string label)
{
	std::string info;

	std::cout << label;
	std::getline(std::cin, info);
	return (info);
}

void	Phonebook::addContact(void)
{
	if (id < 8)
	{	
		contact[id].setFirstName(takeInfo("label1: "));
		contact[id].setLastName(takeInfo("label2: "));
		contact[id].setNickname(takeInfo("label3: "));
		contact[id].setLogin(takeInfo("label4: "));
		contact[id].setPostalAddr(takeInfo("label5: "));
		contact[id].setEmailAddr(takeInfo("label6: "));
		contact[id].setPhoneNum(takeInfo("label7: "));
		contact[id].setBirthDate(takeInfo("label8: ")); // protect it
		contact[id].setFavMeal(takeInfo("label9: "));
		contact[id].setUnderwearClr(takeInfo("label10: "));
		contact[id].setDarkestSecret(takeInfo("label11: "));
		id++;
		std::cout << "[ + ] Contact added successfully.\n" << std::endl;
	}
	else
	{
		std::cout << "Phonebook is FULL" <<std::endl;
		return ;
	}		
}

void	Phonebook::showSpecContact(int j)
{
	int		pos;

	std::cout << "Insert index desired: ";
	std::cin >> pos;

	if (pos >= 0 && pos < j && std::cin.good())
	{
		std::cout << "------------------------------------" << std::endl;
		std::cout << "First name: " << contact[pos].getFirstName() << std::endl;
		std::cout << "Last name: " << contact[pos].getLastName() << std::endl;
		std::cout << "Nickname: " << contact[pos].getNickname() << std::endl;
		std::cout << "Login: " << contact[pos].getLogin() << std::endl;
		std::cout << "Postal adress: " << contact[pos].getPostalAddr() << std::endl;
		std::cout << "Email adress: " << contact[pos].getEmailAddr() << std::endl;
		std::cout << "Phone number: " << contact[pos].getPhoneNum() << std::endl;
		std::cout << "Birthday date: " << contact[pos].getBirthDate() << std::endl;
		std::cout << "Favorite meal: " << contact[pos].getFavMeal() << std::endl;
		std::cout << "Underwear color: " << contact[pos].getUnderwearClr() << std::endl;
		std::cout << "Darkest secret: " << contact[pos].getDarkestSecret() << std::endl;
		std::cout << "------------------------------------" << std::endl;
	}
	else
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		std::cout << "Invalid index" << std::endl;
	}
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
