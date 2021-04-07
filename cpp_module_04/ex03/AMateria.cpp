/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:21:15 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/07 17:20:59 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria() : _xp(0)
{
}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)
{
}

AMateria::AMateria(const AMateria & src)
{
	*this = src;
}

AMateria&	AMateria::operator=(const AMateria & rhs)
{
	if (this != &rhs)
	{
		this->_xp = rhs._xp;
		this->_type = rhs._type;
	}
	return *this;	
}

AMateria::~AMateria()
{
}

std::string const	& AMateria::getType() const
{
	return this->_type;
}

unsigned int	AMateria::getXP() const
{
	return this->_xp;
}

void	AMateria::use(ICharacter& target)
{
	(void) target;
	this->_xp += 10;
}