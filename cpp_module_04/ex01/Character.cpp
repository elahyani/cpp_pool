/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:36:51 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/05 16:01:03 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_apcost = 40;
}

Character::Character(std::string const & name) : _name(name)
{
	this->_apcost = 40;
	weapon = NULL;
}

Character::Character(const Character & src)
{
	*this = src;
}

Character&	Character::operator=(const Character & rhs)
{
	this->_apcost = rhs._apcost;
	this->_name = rhs._name;
	return *this;
}

void	Character::recoverAP()
{
	if (this->_apcost + 10 <= 40)
		this->_apcost += 10;
}

void	Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (enemy != NULL)
	{
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
		this->weapon->attack();
		this->_apcost -= this->weapon->getAPCost();
		enemy->takeDamage(this->weapon->getDamage());
		if (enemy->getHP() == 0)
		{
			delete enemy;
			enemy = NULL;
		}
	}
}

std::string	const &	Character::getName() const
{
	return this->_name;
}

std::string	const Character::getWeaponName() const
{
	return this->weapon->getName();
}

int		Character::getAPcost() const
{
	return this->_apcost;
}

AWeapon *Character::getWeapon()
{
	return (this->weapon);
}

std::ostream&	operator<<(std::ostream& o, Character & c)
{
	if (c.getWeapon())
		o << c.getName() << " has " << c.getAPcost() << " AP and wields a " << c.getWeaponName() << std::endl;
	else
		o << c.getName() << " has " << c.getAPcost() << " AP and is unarmed\n";
	return o;
}