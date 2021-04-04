/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:32:48 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/04 18:18:20 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{

private:
	int			_apcost;
	std::string	_name;
	AWeapon	*weapon;

public:
	Character();
	Character(std::string const & name);
	Character(const Character & src);
	Character&	operator=(const Character & rhs);
	~Character();

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const getName() const;
	std::string const getWeaponName() const;
	int		getAPcost() const;
};

std::ostream&	operator<<(std::ostream& o, Character & c);

#endif