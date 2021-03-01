/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myContact.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:36:28 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/01 12:14:09 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myContact.class.hpp"

myContact::myContact() {
	return ;
}

myContact::~myContact() {
	return ;
}

std::string	myContact::getFirstName() {
	return this->firstName;
}

void    myContact::setFirstName() {
	std::cout << "First name: ";
	std::getline(std::cin, this->firstName);
}

std::string	myContact::getLastName() {
	return this->lastName;
}

void    myContact::setLastName() {
	std::cout << "Last name: ";
	std::getline(std::cin, this->lastName);
}

std::string	myContact::getNickname() {
	return this->nickname;
}

void    myContact::setNickname() {
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
}

std::string	myContact::getLogin() {
	return this->login;
}

void    myContact::setLogin() {
	std::cout << "Login: ";
	std::getline(std::cin, this->login);
}

std::string	myContact::getPostalAddr() {
	return this->postalAddr;
}

void    myContact::setPostalAddr() {
	std::cout << "Postal adress: ";
	std::getline(std::cin, this->postalAddr);
}

std::string	myContact::getEmailAddr() {
	return this->emailAddr;
}

void    myContact::setEmailAddr() {
	std::cout << "Email adress: ";
	std::getline(std::cin, this->emailAddr);
}

std::string	myContact::getPhoneNum() {
	return this->phoneNum;
}

void    myContact::setPhoneNum() {
	std::cout << "Phone number: ";
	std::getline(std::cin, this->phoneNum);
}

std::tm	myContact::getBirthDate() {
	return this->birthDate;
}

void    myContact::setBirthDate(std::tm birthDate) {
	this->birthDate = birthDate;
}

std::string	myContact::getFavMeal() {
	return this->favMeal;
}

void    myContact::setFavMeal() {
	std::cout << "Favorite meal: ";
	std::getline(std::cin, this->favMeal);
}

std::string	myContact::getUnderwearClr() {
	return this->underwearClr;
}

void    myContact::setUnderwearClr() {
	std::cout << "Underwear color: ";
	std::getline(std::cin, this->underwearClr);
}

std::string	myContact::getDarkestSecret(){
	return this->darkestSecret;
}

void    myContact::setDarkestSecret() {
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->darkestSecret);
}
