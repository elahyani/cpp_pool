#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <iomanip>
# include "myContact.class.hpp"

class Phonebook
{

private:
	myContact	contact[8];
	int			id;

public:
	Phonebook(void);
	~Phonebook(void);
	std::string	takeInfo(std::string label);
	void		addContact(void);
	void		showSpecContact(int j);
	void		showContact(void);
	std::string	truncate_string(std::string str);
};

#endif