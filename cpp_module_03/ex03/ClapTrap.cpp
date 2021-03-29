/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:23:15 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/29 12:07:18 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "[ClapTrap] " << this->name << ": Let's get this party started!" << std::endl;
	usleep(100000);
}

ClapTrap::ClapTrap(std::string nm) : name(nm)
{
	std::cout << "[ClapTrap] " << this->name << ": Let's get this party started!\n" << std::endl;
	usleep(100000);
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] " << this->name << ": Don't tell me that wasn't awesome!\n" << std::endl;
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
	if (this->hitPoints < amount)
		this->hitPoints = 0;
	else
		this->hitPoints = this->hitPoints - amount + this->armoreDamageReduction;
	std::cout << this->name << "=> Hit Points left:  " << this->hitPoints << std::endl;
	std::cout << this->name << "=> Energy Points left:  " << this->energyPoints << "\n" << std::endl;
	if (this->hitPoints == 0)
		std::cout << "\33[31m" << this->name << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\33[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		if (this->hitPoints + amount > this->maxHitPoints || this->energyPoints + amount > this->maxEnergyPoints)
		{
			if (this->hitPoints + amount > this->maxHitPoints)
				this->hitPoints = this->maxHitPoints;
			if (this->energyPoints + amount > this->maxEnergyPoints)
			this->energyPoints = this->maxEnergyPoints;
		}
		else
		{
			this->hitPoints += amount;
			this->energyPoints += amount;
			std::cout << "Can I just say... yeehaw! " << this->name << " has been repaired by <[" << amount << "]HP & EP>" << std::endl;
		}
	}
	std::cout << this->name << "=> Hit Points left:  " << this->hitPoints << std::endl;
	std::cout << this->name << "=> Energy Points left:  " << this->energyPoints << "\n" << std::endl;
}
