#include <iostream>
#include "myContact.class.hpp"

myContact::myContact() {
	this->index++;	
	return;
}

void    myContact::setIndex() {
	index++;
}
void    myContact::setPostalAddr() {
	std::cout << "Postal adress: ";
	std::cin >> postal_addr;
}
void    myContact::setPhoneNum() {
	std::cout << "Phone number: ";
	std::cin >> phone_num;
}
void    myContact::setFirstName() {
	std::cout << "First name: ";
	std::cin >> first_name;
}
void    myContact::setLastName() {
	std::cout << "Last name: ";
	std::cin >> last_name;
}
void    myContact::setNickname() {
	std::cout << "Nickname: ";
	std::cin >> nickname;
}
void    myContact::setLogin() {
	std::cout << "Login: ";
	std::cin >> login;
}
void    myContact::setEmailAddr() {
	std::cout << "Email adress: ";
	std::cin >> email_addr;
}
void    myContact::setBirthDate() {
	std::cout << "Birthday date: ";
	std::cin >> birth_date;
}
void    myContact::setFavMeal() {
	std::cout << "Favorite meal: ";
	std::cin >> fav_meal;
}
void    myContact::setUnderwearClr() {
	std::cout << "Underwear color: ";
	std::cin >> underwear_clr;
}
void    myContact::setDarkestSecret() {
	std::cout << "Darkest secret: ";
	std::cin >> darkest_secret;
}

int	myContact::getIndex() {
	return index;
}
int	myContact::getPostalAddr() {
	return postal_addr;
}
int	myContact::getPhoneNum() {
	return phone_num;
}
std::string	myContact::getFirstName() {
	return first_name;
}
std::string	myContact::getLastName() {
	return last_name;
}
std::string	myContact::getNickname() {
	return nickname;
}
std::string	myContact::getLogin() {
	return login;
}
std::string	myContact::getEmailAddr() {
	return email_addr;
}
std::string	myContact::getBirthDate() {
	return birth_date;
}
std::string	myContact::getFavMeal() {
	return fav_meal;
}
std::string	myContact::getUnderwearClr() {
	return underwear_clr;
}
std::string	myContact::getDarkestSecret() {
	return darkest_secret;
}
