#ifndef MYCONTACT_CLASS_HPP
# define MYCONTACT_CLASS_HPP

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
	void	setFirstName(std::string);
	void	setLastName(std::string);
	void	setNickname(std::string);
	void	setLogin(std::string);
	void	setPostalAddr(std::string);
	void	setEmailAddr(std::string);
	void	setPhoneNum(std::string);
	void	setBirthDate(std::string);
	void	setUnderwearClr(std::string);
	void	setFavMeal(std::string);
	void	setDarkestSecret(std::string);
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getLogin();
	std::string getPostalAddr();
	std::string	getEmailAddr();
	std::string getPhoneNum();
	std::string	getBirthDate();
	std::string	getFavMeal();
	std::string	getUnderwearClr();
	std::string	getDarkestSecret();
};

#endif