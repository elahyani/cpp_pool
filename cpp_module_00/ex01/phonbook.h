#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "myContact.class.hpp"

void		phonebook_header();
void		addContact(myContact contact[8], int i);
void		showSpecContact(myContact contact[8]);
void		showContact(myContact contact[8], int i, int j, int done);
std::string	truncate_string(std::string str);
#endif