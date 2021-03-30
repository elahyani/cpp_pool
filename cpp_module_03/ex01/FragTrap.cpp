/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:23:15 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/30 12:39:38 by elahyani         ###   ########.fr       */
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
	std::cout << this->name << "Let's get this party started!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->level = 1;
	usleep(300000);
}

FragTrap::FragTrap(std::string nm) : name(nm)
{
	std::cout << this->name << ": Let's get this party started!\n" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->level = 1;
	usleep(300000);
}

FragTrap::FragTrap(const FragTrap & src)
{
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << ": Don't tell me that wasn't awesome!\n" << std::endl;
	usleep(300000);
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

bool	FragTrap::isdead()
{
	if (this->hitPoints == 0)
		return true;
	return false;
}

unsigned int	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FRAG-TP Ratattattattatta! Pew-pew-pewpew! <\33[1;32m" 
	<< this->name << "\33[0m> attacks <\33[1;33m" << target << "\33[0m> at range, causing <\33[1;36m"
	<< this->rangedAttackDamage << "\33[0m> points of damage!" << std::endl;
	return this->rangedAttackDamage;
}

unsigned int	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FRAG-TP Heyyaaaaah <\33[1;32m" 
	<< this->name << "\33[0m> attacks <\33[1;33m" << target << "\33[0m> at melee, causing <\33[1;36m"
	<< this->meleeAttackDamage << "\33[0m> points of damage!" << std::endl;
	return this->meleeAttackDamage;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		if (this->hitPoints + amount > this->maxHitPoints)
			this->hitPoints = this->maxHitPoints;
		else
			this->hitPoints += amount;
			std::cout << "Can I just say... yeehaw! " << this->name << " has been repaired by <" << amount << "HP>" << std::endl;
	}
	std::cout << this->name << "=> Hit Points left:  " << this->hitPoints << std::endl;
	std::cout << this->name << "=> Energy Points left:  " << this->energyPoints << "\n" << std::endl;
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::cout << "\33[36mLook out everybody, things are about to get awesome!\33[0m" << std::endl;
	unsigned int	(FragTrap::*attacks[5])(std::string const &) = {
		&FragTrap::GomuGomuNoPistol,
		&FragTrap::DemonSlayerSword,
		&FragTrap::SantoryuOugiSanzenSekai,
		&FragTrap::SpritBomb,
		&FragTrap::Rasengan
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

unsigned int	FragTrap::GomuGomuNoPistol(std::string const & target)
{
	std::cout << "🤜🤜🤜 Gumo Gumo no pistolyyyyyy <\33[1;32m" 
	<< this->name << "\33[0m> attacks <\33[1;33m" << target << "\33[0m>, causing <\33[1;36m"
	<< 9 << "\33[0m> points of damage!" << std::endl;
	return 9;
}

unsigned int	FragTrap::DemonSlayerSword(std::string const & target)
{
	std::cout << "🔪 Demon Slayer Sword <\33[1;32m" 
	<< this->name << "\33[0m> attacks <\33[1;33m" << target << "\33[0m>, causing <\33[1;36m"
	<< 20 << "\33[0m> points of damage!" << std::endl;
	return 20;
}

unsigned int	FragTrap::SantoryuOugiSanzenSekai(std::string const & target)
{
	std::cout << "🗡 🗡 🗡  Santoryu ougi sanzen sekai <\33[1;32m" 
	<< this->name << "\33[0m> attacks <\33[1;33m" << target << "\33[0m>, causing <\33[1;36m"
	<< 15 << "\33[0m> points of damage!" << std::endl;
	return 15;
}

unsigned int	FragTrap::SpritBomb(std::string const & target)
{
	std::cout << "💥 Sprit Boooooomb <\33[1;32m" 
	<< this->name << "\33[0m> attacks <\33[1;33m" << target << "\33[0m>, causing <\33[1;36m"
	<< 25 << "\33[0m> points of damage!" << std::endl;
	return 25;
}

unsigned int	FragTrap::Rasengan(std::string const & target)
{
	std::cout << "🌐 Raaaaasennnngan <\33[1;32m" 
	<< this->name << "\33[0m> attacks <\33[1;33m" << target << "\33[0m> causing <\33[1;36m"
	<< 10 << "\33[0m> points of damage!" << std::endl;
	return 10;
}
