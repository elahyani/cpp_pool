#ifndef MYCONTACT_CLASS_HPP
# define MYCONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>
class myContact
{

private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	login;
	std::string	postalAddr;
	std::string	emailAddr;
	std::string	phoneNum;
	std::tm	birthDate;
	std::string	favMeal;
	std::string	underwearClr;
	std::string	darkestSecret;

public:
	myContact(void);
	~myContact(void);
	void	setFirstName();
	void	setLastName();
	void	setNickname();
	void	setLogin();
	void	setPostalAddr();
	void	setEmailAddr();
	void	setPhoneNum();
	void	setBirthDate(std::tm);
	void	setUnderwearClr();
	void	setFavMeal();
	void	setDarkestSecret();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getLogin();
	std::string getPostalAddr();
	std::string	getEmailAddr();
	std::string getPhoneNum();
	std::tm	getBirthDate();
	std::string	getFavMeal();
	std::string	getUnderwearClr();
	std::string	getDarkestSecret();
};

#endif