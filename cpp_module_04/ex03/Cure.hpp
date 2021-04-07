/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:27:43 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/07 14:54:52 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "iostream"
# include "string"

# include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	Cure(std::string const & type);
	Cure(const Cure & src);
	Cure&	operator=(const Cure & rhs);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif