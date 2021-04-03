/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:23:15 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/03 13:12:35 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->name = "DEFAULT";
	std::cout << this->name << ": Unce! Unce! Unce! Unce! Ooo, oh check me out. Unce! Unce! Unce! Unce! Oh, come on get down..\n" << std::endl;
	usleep(300000);
}

ClapTrap::ClapTrap(std::string nm) : name(nm)
{
	std::cout << this->name << ": Unce! Unce! Unce! Unce! Ooo, oh check me out. Unce! Unce! Unce! Unce! Oh, come on get down..\n" << std::endl;
	usleep(300000);
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << ": This time it'll be awesome, I promise!\n" << std::endl;
	usleep(300000);
}

void	ClapTrap::setName(std::string nm)
{
	this->name = nm;
}

std::string	ClapTrap::getName(void) const
{
	return this->name;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	this->name = rhs.getName();
	this->hitPoints = rhs.hitPoints;
	this->maxHitPoints = rhs.maxHitPoints;
	this->energyPoints = rhs.energyPoints;
	this->maxEnergyPoints = rhs.maxEnergyPoints;
	this->level = rhs.level;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangedAttackDamage = rhs.rangedAttackDamage;
	this->armoreDamageReduction = rhs.armoreDamageReduction;
	return *this;
}

bool	ClapTrap::isdead()
{
	if (this->hitPoints == 0)
		return true;
	return false;
}

unsigned int	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "FRAG-TP Ratattattattatta! Pew-pew-pewpew! <\33[1;32m" 
	<< this->name << "\33[0m> attacks <\33[1;33m" << target << "\33[0m> at range, causing <\33[1;36m"
	<< this->rangedAttackDamage << "\33[0m> points of damage!" << std::endl;
	return this->rangedAttackDamage;
}

unsigned int	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "FRAG-TP Heyyaaaaah <\33[1;32m" 
	<< this->name << "\33[0m> attacks <\33[1;33m" << target << "\33[0m> at melee, causing <\33[1;36m"
	<< this->meleeAttackDamage << "\33[0m> points of damage!" << std::endl;
	return this->meleeAttackDamage;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->armoreDamageReduction)
		std::cout << this->name << ": HA HA HA HA HA, you're not good enough" << std::endl;
	else
	{
		amount -= this->armoreDamageReduction;
		if (this->hitPoints < amount)
			this->hitPoints = 0;
		else
			this->hitPoints = this->hitPoints - amount;
	}
	std::cout << this->name << "=> Hit Points left:  " << this->hitPoints << std::endl;
	std::cout << this->name << "=> Energy Points left:  " << this->energyPoints << "\n" << std::endl;
	if (this->hitPoints == 0)
		std::cout << "\33[31m" << this->name << ": 😵 I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\33[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		if (this->hitPoints + amount > this->maxHitPoints)
			this->hitPoints = this->maxHitPoints;
		else
			this->hitPoints += amount;
		if (this->energyPoints + amount > this->maxEnergyPoints)
			this->energyPoints = this->maxEnergyPoints;
		else
			this->energyPoints += amount;
		std::cout << "\033[0;31;2;1mCan I just say... yeehaw! <" << this->name << "> has been repaired by <" << amount << ">HP & EP\33[0m" << std::endl;
	}
	std::cout << this->name << "=> Hit Points left:  " << this->hitPoints << std::endl;
	std::cout << this->name << "=> Energy Points left:  " << this->energyPoints << "\n" << std::endl;
}
