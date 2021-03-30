/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:21:39 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/30 12:16:51 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << this->name << ": Glitching weirdness is a term of endearment, right?\n" << std::endl;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armoreDamageReduction = 3;
	usleep(300000);
}

ScavTrap::ScavTrap(std::string nm) : ClapTrap(nm)
{
	std::cout << this->name << ": Glitching weirdness is a term of endearment, right?\n" << std::endl;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->name = nm;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armoreDamageReduction = 3;
	usleep(300000);
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src)
{
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << ": Hehehehe, mwaa ha ha ha, MWAA HA HA HA!\n" << std::endl;
	usleep(300000);
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::cout << "\33[36mYou versus me! Me versus you! Either way!\33[0m" << std::endl;
	const char	*challenges[4] = {
		"🈲 I challenge you to Break the Poneglyph rock...\n",
		"🧟‍♂️ I challenge you to Surpass the maze of zombies..\n",
		"🕺 Dance battle! Or, you know... regular battle...\n",
		"🚩 Care to have a friendly duel? Who gets the flag first wins...\n"
	};
	srand(clock());
	if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		std::cout << this->name << ": " << target << ", " << challenges[rand() % 4] << std::endl;
		return ;
	}
	std::cout << this->name << ":By gosh! my energy is ran out 😩\n" << std::endl;
}

