/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:15:04 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/07 17:23:51 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "iostream"
# include "string"

# include "ICharacter.hpp"
class ICharacter;
class	AMateria
{
protected:
	unsigned int	_xp;
	std::string		_type;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria & src);
	AMateria&	operator=(const AMateria & rhs);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};

#endif