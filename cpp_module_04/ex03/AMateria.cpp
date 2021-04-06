/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:21:15 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/06 16:29:47 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria() : _xp(0)
{
}

AMateria::AMateria(const AMateria & src)
{
	*this = src;
}

AMateria&	AMateria::operator=(const AMateria & rhs)
{
	return *this;	
}

AMateria::~AMateria()
{
}

std::string const	& AMateria::getType() const
{
}

unsigned int	AMateria::getXP() const
{
}

void	AMateria::use(ICharacter& target)
{
	this->_xp += 10;
}