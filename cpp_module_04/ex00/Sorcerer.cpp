/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:40:43 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/08 11:20:42 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"


Sorcerer::Sorcerer()
{
	return ;
}

Sorcerer::Sorcerer(std::string nm, std::string ttl) : name(nm), title(ttl)
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & src)
{
	*this = src;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer & rhs)
{
	if (this != &rhs)
	{	
		this->setName(rhs.getName());
		this->setTitle(rhs.getTitle());
	}
	return  *this;
}

void	Sorcerer::setName(std::string nm)
{
	this->name = nm;
}

void	Sorcerer::setTitle(std::string ttl)
{
	this->title = ttl;
}

std::string	Sorcerer::getName(void) const
{
	return this->name;
}

std::string	Sorcerer::getTitle(void) const
{
	return this->title;
}

void	Sorcerer::introduce(void) const
{
	std::cout << "I am " << this->name << ", " << this->title << ", and I like ponies!" << std::endl;
}

std::ostream&	operator<<(std::ostream& o, const Sorcerer& s)
{
	o << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!\n";
	return o;
}

void	Sorcerer::polymorph(Victim const & src) const
{
	src.getPolymorphed();
}