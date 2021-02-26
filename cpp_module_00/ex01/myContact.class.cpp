#include <iostream>
#include "myContact.class.hpp"

void    myContact::setIndex(int i) {
	index = i;
}
void    myContact::setPostalAddr(int ap) {
	postal_addr = ap;
}
void    myContact::setPhoneNum(int pn) {
	phone_num = pn;
}
void    myContact::setFirstName(std::string fn) {
	first_name = fn;
}
void    myContact::setLastName(std::string ln) {
	last_name = ln;
}
void    myContact::setNickname(std::string nn) {
	nickname = nn;
}
void    myContact::setLogin(std::string lg) {
	login = lg;
}
void    myContact::setEmailAddr(std::string ea) {
	email_addr = ea;
}
void    myContact::setBirthDate(std::string bd) {
	birth_date = bd;
}
void    myContact::setFavMeal(std::string fm) {
	fav_meal = fm;
}
void    myContact::setUnderwearClr(std::string uc) {
	underwear_clr = uc;
}
void    myContact::setDarkestSecret(std::string ds) {
	darkest_secret = ds;
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
