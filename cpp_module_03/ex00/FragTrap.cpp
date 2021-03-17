/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:23:15 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/17 18:32:55 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string nm) : name(nm)
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100; // relatedt to vaulthunter_dot_exe fct
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armoreDamageReduction = 5;
}

FragTrap::FragTrap(const FragTrap & src)
{
}

FragTrap::~FragTrap()
{
	
}

void	FragTrap::setName(std::string nm)
{
	this->name = nm;
}

std::string	FragTrap::getName(void) const
{
	return this->name;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	return *this;
}

unsigned int	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FRAG-TP <" << this->name << "> attacks <" << target << "> at range, causing <"
	<< this->rangedAttackDamage << "> points of damage!" << std::endl;
	return this->rangedAttackDamage;
}

unsigned int	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FRAG-TP <" << this->name << "> attacks <" << target << "> at melee, causing <"
	<< this->meleeAttackDamage << "> points of damage!" << std::endl;
	return this->meleeAttackDamage;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints - amount < 0)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount - this->armoreDamageReduction;
	std::cout << this->name << " still have " << this->hitPoints << " of hit points" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints + amount > 100)
		this->hitPoints = 100;
	else
		this->hitPoints += amount;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	
}



