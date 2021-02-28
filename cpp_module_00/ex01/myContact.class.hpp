#ifndef MYCONTACT_CLASS_HPP
# define MYCONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>

class myContact
{

private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_addr;
	std::string	email_addr;
	std::string	phone_num;
	std::string	birth_date;
	std::string	fav_meal;
	std::string	underwear_clr;
	std::string	darkest_secret;

public:
	myContact(void);
	~myContact(void);
	std::string	getFirstName();
	void	setFirstName();
	std::string	getLastName();
	void	setLastName();
	std::string	getNickname();
	void	setNickname();
	std::string	getLogin();
	void	setLogin();
	std::string getPostalAddr();
	void	setPostalAddr();
	std::string	getEmailAddr();
	void	setEmailAddr();
	std::string getPhoneNum();
	void	setPhoneNum();
	std::string	getBirthDate();
	void	setBirthDate();
	std::string	getFavMeal();
	void	setUnderwearClr();
	std::string	getUnderwearClr();
	void	setFavMeal();
	std::string	getDarkestSecret();
	void	setDarkestSecret();
};

#endif