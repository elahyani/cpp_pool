/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:41:31 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/29 17:41:59 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

// SuperTrap::SuperTrap() : ClapTrap()
// {
// 	std::cout  << "[SuperTrap] " << this->name << ": oh shit! here we go again\n" << std::endl;
// 	this->hitPoints = 60;
// 	this->maxHitPoints = 60;
// 	this->energyPoints = 120;
// 	this->maxEnergyPoints = 120;
// 	this->level = 1;
// 	this->meleeAttackDamage = 60;
// 	this->rangedAttackDamage = 5;
// 	this->armoreDamageReduction = 0;
// 	usleep(100000);
// }

SuperTrap::SuperTrap(std::string nm) : ClapTrap(nm), FragTrap(nm), NinjaTrap(nm)
{
	std::cout << "\n\n------------" << this->FragTrap::hitPoints <<  "------------\n\n" <<std::endl;
	std::cout << "[SuperTrap] " << this->name << ": oh shit! here we go again..\n" << std::endl;
	this->hitPoints = this->FragTrap::hitPoints;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armoreDamageReduction = 0;
	usleep(100000);
}

SuperTrap::SuperTrap(const SuperTrap& src) : ClapTrap(src)
{
}

SuperTrap::~SuperTrap()
{
	
}