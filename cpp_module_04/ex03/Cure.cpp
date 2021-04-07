/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:29:37 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/07 17:29:45 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(std::string const & type) : AMateria("cure")
{
	this->_type = type;
}

Cure::Cure(const Cure & src) : AMateria(src)
{
}

Cure&	Cure::operator=(const Cure & rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

Cure::~Cure()
{
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " <<  target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}