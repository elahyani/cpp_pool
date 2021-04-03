/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:26:36 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/31 13:41:15 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int Constructor called " << std::endl;
	this->fixedPoint = (int)n << this->fractionalBits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float Constructor called " << std::endl;
	this->fixedPoint = roundf(f * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPoint = rhs.fixedPoint;
	return *this;
}

float	Fixed::toFloat(void) const
{
	return (float)this->fixedPoint / (1 << this->fractionalBits);
}

int		Fixed::toInt(void) const
{
	return (int)this->fixedPoint >> this->fractionalBits;
}

std::ostream&	operator<<(std::ostream& o, const Fixed& i)
{
	o << i.toFloat();
	return o;
}
