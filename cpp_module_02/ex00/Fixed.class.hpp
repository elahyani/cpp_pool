/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:26:56 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/11 17:36:16 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class	Fixed
{
	private:
		int					fixedPoint;
		static const int	factBits;

	public:
		Fixed(int fixedPoint = 0);
		Fixed(void);
		~Fixed(void);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
};

#endif