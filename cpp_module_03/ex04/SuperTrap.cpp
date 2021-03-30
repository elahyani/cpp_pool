/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:41:31 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/30 13:14:08 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	std::cout << this->name << ": It's time to phase you suckers out..\n" << std::endl;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 60;
	this->maxEnergyPoints = 60;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 20;
	this->armoreDamageReduction = 5;
	usleep(300000);
}

SuperTrap::SuperTrap(std::string nm) : ClapTrap(nm), FragTrap(nm), NinjaTrap(nm)
{
	std::cout << this->name << ": It's time to phase you suckers out..\n" << std::endl;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 60;
	this->maxEnergyPoints = 60;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 20;
	this->armoreDamageReduction = 5;
	usleep(300000);
}

SuperTrap::SuperTrap(const SuperTrap& src) : ClapTrap(src), FragTrap(src), NinjaTrap(src)
{
}

SuperTrap::~SuperTrap()
{
	std::cout << this->name << ": Ready to go on where you are, friend..\n" << std::endl;
	usleep(300000);
}

SuperTrap&	SuperTrap::operator=(const SuperTrap& rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

unsigned int	SuperTrap::rangedAttack(std::string const & target)
{
	return this->FragTrap::rangedAttack(target);
}

unsigned int	SuperTrap::meleeAttack(std::string const & target)
{
	return this->NinjaTrap::meleeAttack(target);
}
