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
#include <string>

myContact::myContact() {
	return ;
}

myContact::~myContact() {
	return ;
}

void    myContact::setFirstName(std::string fn) {
	// std::cout << "First name: ";
	// std::getline(std::cin, fn);
	this->first_name = fn;
}

void    myContact::setLastName(std::string ln) {
	// std::cout << "Last name: ";
	// std::getline(std::cin, ln);
	this->last_name = ln;
}

void    myContact::setNickname(std::string nn) {
	// std::cout << "Nickname: ";
	// std::getline(std::cin, nn);
	this->nickname = nn;
}

void    myContact::setLogin(std::string lg) {
	// std::cout << "Login: ";
	// std::getline(std::cin, lg);
	this->login = lg;
}

void    myContact::setPostalAddr(std::string pa) {
	// std::cout << "Postal adress: ";
	// std::getline(std::cin, pa);
	this->postal_addr = pa;
}

void    myContact::setEmailAddr(std::string ea) {
	// std::cout << "Email adress: ";
	// std::getline(std::cin, ea);
	this->email_addr = ea;
}

void    myContact::setPhoneNum(std::string pn) {
	// std::cout << "Phone number: ";
	// std::getline(std::cin, pn);
	this->phone_num = pn;
}

void    myContact::setBirthDate(std::string bd) {
	// std::cout << "Birthday date (dd/mm/yy): ";
	// std::getline(std::cin, bd);
	this->birth_date = bd;
}

void    myContact::setFavMeal(std::string fm) {
	// std::cout << "Favorite meal: ";
	// std::getline(std::cin, fm);
	this->fav_meal = fm;
}

void    myContact::setUnderwearClr(std::string uc) {
	// std::cout << "Underwear color: ";
	// std::getline(std::cin, uc);
	this->underwear_clr = uc;
}

void    myContact::setDarkestSecret(std::string ds) {
	// std::cout << "Darkest secret: ";
	// std::getline(std::cin, ds);
	this->darkest_secret = ds;
}

std::string	myContact::getFirstName() {
	return this->first_name;
}

std::string	myContact::getLastName() {
	return this->last_name;
}

std::string	myContact::getPostalAddr() {
	return this->postal_addr;
}

std::string	myContact::getPhoneNum() {
	return this->phone_num;
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

std::string	myContact::getDarkestSecret(){
	return this->darkest_secret;
}
