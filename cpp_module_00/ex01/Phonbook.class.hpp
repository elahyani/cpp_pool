/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonbook.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:53:42 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/11 15:53:44 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include <ctime>
# include "myContact.class.hpp"

class Phonebook
{

private:
	myContact	contact[8];
	int			id;

public:
	Phonebook(void);
	~Phonebook(void);
	void		addContact(void);
	void		showSpecContact(int j);
	void		showContact(void);
	std::string	truncate_string(std::string str);
};

#endif