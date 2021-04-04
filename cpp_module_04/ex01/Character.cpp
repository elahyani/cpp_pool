/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:36:51 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/04 18:19:42 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const & name)
{
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
	if (this->_apcost + 10 >= 40)
		return ;
	this->_apcost += 10;
}

void	Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (this->weapon->getName().empty())
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	if (enemy->getHP() == 0)
		delete enemy;
	enemy->takeDamage(this->weapon->getDamage());
}

std::string	const	Character::getName() const
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

std::ostream&	operator<<(std::ostream& o, Character & c){
	if (c.getWeaponName().empty())
		o << c.getName() << " has " << c.getAPcost() << " AP and is unramed\n";
	else
		o << c.getName() << " has " << c.getAPcost() << "AP and wields a " << c.getWeaponName() << std::endl;
	return o;
}