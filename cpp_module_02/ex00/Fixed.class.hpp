/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:26:56 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/13 18:14:03 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>

class	Fixed
{
private:

	int					fixedPoint;
	static const int	fractionalBits = 8;

public:

	Fixed(void) : fixedPoint(0) {
		std::cout << "Default Constructor called" << std::endl;
	}
	Fixed(const Fixed& src) : fixedPoint(src.fixedPoint){
		std::cout << "Copy Constructor called" << std::endl;
		*this = src;
	}
	~Fixed(void){
		std::cout << "Destructor called" << std::endl;
	}

	Fixed&	operator=(const Fixed& rhs){
		std::cout << "Assignation operator called" << std::endl;
		this->setRawBits(rhs.getRawBits());
		return *this;
	}

	void	setRawBits(int const raw){
		this->fixedPoint = raw << this->fractionalBits;
	}
	int		getRawBits(void) const{
		std::cout << "getRawBits member function called" << std::endl;
		return this->fixedPoint >> this->fractionalBits;
	}
};

std::ostream&	operator<<(std::ostream& o, const Fixed& i) {
	o << i.getRawBits();
	return o;
}

#endif