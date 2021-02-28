/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myContact.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:36:28 by elahyani          #+#    #+#             */
/*   Updated: 2021/02/28 12:13:45 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myContact.class.hpp"

myContact::myContact() {
	return ;
}

myContact::~myContact() {
	return ;
}

void    myContact::setFirstName() {
	std::cout << "First name: ";
	std::getline(std::cin, this->first_name);
}

void    myContact::setLastName() {
	std::cout << "Last name: ";
	std::getline(std::cin, this->last_name);
}

void    myContact::setNickname() {
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
}

void    myContact::setLogin() {
	std::cout << "Login: ";
	std::getline(std::cin, this->login);
}

void    myContact::setPostalAddr() {
	std::cout << "Postal adress: ";
	std::getline(std::cin, this->postal_addr);
}

void    myContact::setEmailAddr() {
	std::cout << "Email adress: ";
	std::getline(std::cin, this->email_addr);
}

void    myContact::setPhoneNum() {
	std::cout << "Phone number: ";
	std::getline(std::cin, this->phone_num);
}

void    myContact::setBirthDate() {
	std::cout << "Birthday date (dd/mm/yy): ";
	std::getline(std::cin, this->birth_date);
}

void    myContact::setFavMeal() {
	std::cout << "Favorite meal: ";
	std::getline(std::cin, this->fav_meal);
}

void    myContact::setUnderwearClr() {
	std::cout << "Underwear color: ";
	std::getline(std::cin, this->underwear_clr);
}

void    myContact::setDarkestSecret() {
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
}

std::string	myContact::getPostalAddr() {
	return this->postal_addr;
}

std::string	myContact::getPhoneNum() {
	return this->phone_num;
}

std::string	myContact::getFirstName() {
	return this->first_name;
}

std::string	myContact::getLastName() {
	return this->last_name;
}

std::string	myContact::getNickname() {
	return this->nickname;
}

std::string	myContact::getLogin() {
	return this->login;
}

std::string	myContact::getEmailAddr() {
	return this->email_addr;
}

std::string	myContact::getBirthDate() {
	return this->birth_date;
}

std::string	myContact::getFavMeal() {
	return this->fav_meal;
}

std::string	myContact::getUnderwearClr() {
	return this->underwear_clr;
}

std::string	myContact::getDarkestSecret() {
	return this->darkest_secret;
}
