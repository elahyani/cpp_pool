#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "myContact.class.hpp"

class Phonebook
{

private:
	myContact	contact[8];
	int			index;

public:
	Phonebook(void);
	~Phonebook(void);
	void		addContact();
	void		showSpecContact(int j);
	void		showContact();
	std::string	takeInfo();
	std::string	truncate_string(std::string str);
};

#endif