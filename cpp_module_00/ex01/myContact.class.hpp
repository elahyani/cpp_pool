#ifndef MYCONTACT_CLASS_H
# define MYCONTACT_CLASS_H

# include <iostream>

class myContact
{
	int			index;
	int			postal_addr;
	int			phone_num;
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
		void	setIndex(int i);
		void	setPostalAddr(int ap);
		void	setPhoneNum(int pn);
		void	setFirstName(std::string fn);
		void	setLastName(std::string ln);
		void	setNickname(std::string nn);
		void	setLogin(std::string lg);
		void	setEmailAddr(std::string ea);
		void	setBirthDate(std::string bd);
		void	setFavMeal(std::string fm);
		void	setUnderwearClr(std::string uc);
		void	setDarkestSecret(std::string ds);
	
		int		getIndex();
		int		getPostalAddr();
		int		getPhoneNum();
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