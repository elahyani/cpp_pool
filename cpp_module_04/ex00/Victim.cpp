/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:17:41 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/04 15:56:34 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{

}

Victim::Victim(std::string nm) : name(nm)
{
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim & src)
{
	*this = src;
}

Victim&	Victim::operator=(const Victim & rhs)
{
	this->setName(rhs.getName());
	return *this;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

void	Victim::setName(std::string nm)
{
	this->name = nm;
}

std::string	Victim::getName(void) const
{
	return this->name;
}

void	Victim::introduce(void) const
{
	std::cout << "I'm " << this->name << " and I like otters!" << std::endl;
}

void	Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&	operator<<(std::ostream& o, const Victim& v)
{
	o << "I'm " << v.getName() << " and I like otters!\n";
	return o;
}