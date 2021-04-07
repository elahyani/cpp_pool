/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:45:41 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/07 19:08:12 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(std::string const & type) : AMateria("ice")
{
	this->_type = type;
}

Ice::Ice(const Ice & src) : AMateria(src)
{
}

Ice&	Ice::operator=(const Ice & rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

Ice::~Ice()
{
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
	AMateria::use(target);
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}