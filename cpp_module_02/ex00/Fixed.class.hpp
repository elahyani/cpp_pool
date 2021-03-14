/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:26:56 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/14 12:21:12 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class	Fixed
{

private:

	int					fixedPoint;
	static const int	fractionalBits = 8;

public:

	Fixed(void);
	Fixed(const Fixed& src);
	~Fixed(void);

	Fixed&	operator=(const Fixed& rhs);

	void	setRawBits(int const raw);
	int		getRawBits(void) const;

};

#endif
