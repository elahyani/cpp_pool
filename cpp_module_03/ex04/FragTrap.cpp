/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:23:15 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/01 15:39:00 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << this->name << ": Let's get this party started!\n" << std::endl;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armoreDamageReduction = 5;
	usleep(300000);
}

FragTrap::FragTrap(std::string nm) : ClapTrap(nm)
{
	std::cout << this->name << ": Let's get this party started!\n" << std::endl;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armoreDamageReduction = 5;
	usleep(300000);
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src)
{
}

FragTrap::~FragTrap()
{
	std::cout << this->name << ": Don't tell me that wasn't awesome!\n" << std::endl;
	usleep(300000);
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
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
	<< 30 << "\33[0m> points of damage!" << std::endl;
	return 30;
}

unsigned int	FragTrap::SantoryuOugiSanzenSekai(std::string const & target)
{
	std::cout << "🗡 🗡 🗡  Santoryu ougi sanzen sekai <\33[1;32m" 
	<< this->name << "\33[0m> attacks <\33[1;33m" << target << "\33[0m>, causing <\33[1;36m"
	<< 50 << "\33[0m> points of damage!" << std::endl;
	return 50;
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
	<< 13 << "\33[0m> points of damage!" << std::endl;
	return 13;
}