/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:21:39 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/21 19:27:11 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

unsigned int	ScavTrap::maxHitPoints = 100;
unsigned int	ScavTrap::maxEnergyPoints = 50;
unsigned int	ScavTrap::meleeAttackDamage = 20;
unsigned int	ScavTrap::rangedAttackDamage = 15;
unsigned int	ScavTrap::armoreDamageReduction = 3;

ScavTrap::ScavTrap(void)
{
	std::cout << this->name << ": Glitching weirdness is a term of endearment, right?\n" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->level = 1;
	sleep(1);
}

ScavTrap::ScavTrap(std::string nm) : name(nm)
{
	std::cout << this->name << ": Glitching weirdness is a term of endearment, right?\n" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->level = 1;
	sleep(1);
}

ScavTrap::ScavTrap(const ScavTrap & src)
{
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << ": Hehehehe, mwaa ha ha ha, MWAA HA HA HA!" << std::endl;
}

void	ScavTrap::setName(std::string nm)
{
	this->name = nm;
}

std::string	ScavTrap::getName(void) const
{
	return this->name;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
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

bool	ScavTrap::isdead()
{
	if (this->hitPoints == 0)
		return true;
	return false;
}

unsigned int	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "FRAG-TP Everybody, dance time! Da-da-da-dun-daaa! <\33[1;32m"
	<< this->name << "\33[0m> attacks <\33[1;33m" << target << "\33[0m> at range, causing <\33[1;36m"
	<< this->rangedAttackDamage << "\33[0m> points of damage!" << std::endl;
	return this->rangedAttackDamage;
}

unsigned int	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "FRAG-TP Take that! <\33[1;32m" 
	<< this->name << "\33[0m> attacks <\33[1;33m" << target << "\33[0m> at melee, causing <\33[1;36m"
	<< this->meleeAttackDamage << "\33[0m> points of damage!" << std::endl;
	return this->meleeAttackDamage;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints < amount)
		this->hitPoints = 0;
	else
		this->hitPoints = this->hitPoints - amount + this->armoreDamageReduction;
	std::cout << this->name << "=> Hit Points left: " << this->hitPoints << std::endl;
	std::cout << this->name << "=> Energy Points left: " << this->energyPoints << "\n" << std::endl;
	if (this->hitPoints == 0)
		std::cout << "\33[31m" << this->name << ": Is that what people look like inside?\33[0m" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		if (this->hitPoints + amount > this->maxHitPoints)
			this->hitPoints = this->maxHitPoints;
		else
			this->hitPoints += amount;
			std::cout << "Sweet life juice! " << this->name << " has been repaired by <" << amount << "HP>" << std::endl;
	}
	std::cout << this->name << "=> Hit Points left: " << this->hitPoints << std::endl;
	std::cout << this->name << "=> Energy Points left: " << this->energyPoints << "\n" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::cout << "\33[36mYou versus me! Me versus you! Either way!\33[0m" << std::endl;
	const char	*challenges[4] = {
		"You wanna fight with me?! Put 'em up!.. Put 'em up?",
		"A million baddies, and you wanna hit me? Aww!",
		"Dance battle! Or, you know... regular battle.",
		"Care to have a friendly duel?"
	};
	srand(clock());
	std::cout << this->name << ": Heeeey " << target << " " << challenges[rand() % 4] << std::endl;
}
