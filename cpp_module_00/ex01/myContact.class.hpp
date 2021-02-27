#ifndef MYCONTACT_CLASS_HPP
# define MYCONTACT_CLASS_HPP

# include <iostream>

class myContact
{
	int	index;
	int	postal_addr;
	int	phone_num;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	email_addr;
	std::string	birth_date;
	std::string	fav_meal;
	std::string	underwear_clr;
	std::string	darkest_secret;
	public:
		myContact();
		void    setIndex();
		void	setPostalAddr();
		void	setPhoneNum();
		void	setFirstName();
		void	setLastName();
		void	setNickname();
		void	setLogin();
		void	setEmailAddr();
		void	setBirthDate();
		void	setFavMeal();
		void	setUnderwearClr();
		void	setDarkestSecret();
		int getIndex();
		int getPostalAddr();
		int getPhoneNum();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getLogin();
		std::string	getEmailAddr();
		std::string	getBirthDate();
		std::string	getFavMeal();
		std::string	getUnderwearClr();
		std::string	getDarkestSecret();
};

#endif