/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:51:06 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/12 17:22:10 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria	*materia[3];
	int			len;
	Character();

public:
	Character(std::string const & name);
	Character(const Character & src);
	Character&	operator=(const Character & rhs);
	~Character();

	std::string	const & getName() const;
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
};


#endif