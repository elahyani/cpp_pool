/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:23:15 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/18 18:25:22 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

unsigned int	FragTrap::maxHitPoints = 100;
unsigned int	FragTrap::maxEnergyPoints = 100;
unsigned int	FragTrap::meleeAttackDamage = 30;
unsigned int	FragTrap::rangedAttackDamage = 20;
unsigned int	FragTrap::armoreDamageReduction = 5;

FragTrap::FragTrap(void)
{
	// std::cout << this->name << "Let's get this party started!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->level = 1;
	
}

FragTrap::FragTrap(std::string nm) : name(nm)
{
	// std::cout << this->name << ": Let's get this party started!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->level = 1;
}

FragTrap::FragTrap(const FragTrap & src)
{
	*this = src;
}

FragTrap::~FragTrap()
{
	// std::cout << this->name << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
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
	if (this->hitPoints < amount)
	{
		this->hitPoints = 0;
		// std::cout << this->name << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	}
	else
		this->hitPoints = this->hitPoints - amount + this->armoreDamageReduction;
	if (this->hitPoints > 0)
		std::cout << this->name << " still have " << this->hitPoints << " of hit points\n" << std::endl;
	else
		std::cout << "\n" << this->name << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints + amount > 100)
		this->hitPoints = 100;
	else
		this->hitPoints += amount;
	std::cout << "\n" << this->name << " has been repaired by <" << amount <<
	"> hit points, and current hit points is <" << this->hitPoints  << ">\n" << std::endl;
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	unsigned int	(FragTrap::*attacks[5])(std::string const &) = {
		&FragTrap::attack1,
		&FragTrap::attack2,
		&FragTrap::attack3,
		&FragTrap::attack4,
		&FragTrap::attack5
	};

	srand(clock());
	if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		return (this->*attacks[rand() % 5])(target);
	}
	std::cout << this->name << ": Damn! am out of energy." << std::endl;
	return 0;
}

unsigned int	FragTrap::attack1(std::string const & target)
{
	std::cout << "FRAG-TP <" << this->name << "> attacks1 <" << target << "> at range, causing <"
	<< 5 << "> points of damage!" << std::endl;
	return 5;
}

unsigned int	FragTrap::attack2(std::string const & target)
{
	
	std::cout << "FRAG-TP <" << this->name << "> attacks2 <" << target << "> at range, causing <"
	<< 12 << "> points of damage!" << std::endl;
	return 12;
}
unsigned int	FragTrap::attack3(std::string const & target)
{
	std::cout << "FRAG-TP <" << this->name << "> attacks3 <" << target << "> at range, causing <"
	<< 10 << "> points of damage!" << std::endl;
	return 10;
}
unsigned int	FragTrap::attack4(std::string const & target)
{
	std::cout << "FRAG-TP <" << this->name << "> attacks4 <" << target << "> at range, causing <"
	<< 15 << "> points of damage!" << std::endl;
	return 15;
}
unsigned int	FragTrap::attack5(std::string const & target)
{
	std::cout << "FRAG-TP <" << this->name << "> attacks5 <" << target << "> at range, causing <"
	<< 9 << "> points of damage!" << std::endl;
	return 9;
}
