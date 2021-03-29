/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:40:53 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/29 13:08:11 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	std::cout  << "[NinjaTrap] " << this->name << ": oh shit! here we go again\n" << std::endl;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armoreDamageReduction = 0;
	usleep(100000);
}

NinjaTrap::NinjaTrap(std::string nm) : ClapTrap(nm)
{
	std::cout << "[NinjaTrap] " << this->name << ": oh shit! here we go again..\n" << std::endl;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armoreDamageReduction = 0;
	usleep(100000);
}

NinjaTrap::NinjaTrap(const NinjaTrap& src) : ClapTrap(src)
{
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "[NinjaTrap] " << this->name << ": well, ladies and gentelmen, finish your drink and piss off...\n" << std::endl;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

void	NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	if (trap.isdead())
		return ;
	if (this->energyPoints >= 20)
	{
		std::cout << "BANG! Clink clink, Wirrrrrrrrrrr... Click, krrrrr... <" <<
		this->name << "> attacks <" << trap.getName() << "> causing <" << 20 << "> points of damage!" << std::endl;
		this->energyPoints -= 20;
		trap.takeDamage(20);
	}
	else
		std::cout << "Oops, my energy is out of requ for another shoebox attack, time to ruuuuuuun 🏃🏼‍♂️🏃🏼‍♂️🏃🏼‍♂️" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	if (trap.isdead())
		return ;
	if (this->energyPoints >= 20)
	{
		std::cout << "booofffttt! piaauuuuuuu! booooofffft! piaaauuuuuuuuuu! boooffft! piauuuu! <" <<
		this->name << "> attacks <" << trap.getName() << "> causing <" << 30 << "> points of damage!" << std::endl;
		this->energyPoints -= 20;
		trap.takeDamage(30);
	}
	else
		std::cout << "Oops, my energy is out of requ for another shoebox attack, time to ruuuuuuun 🏃🏼‍♂️🏃🏼‍♂️🏃🏼‍♂️" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	if (trap.isdead())
		return ;
	if (this->energyPoints >= 20)
	{
		std::cout << "khadak! pffft! khadak! pfffffft! khadak! pffffft! <" <<
		this->name << "> attacks <" << trap.getName() << "> causing <" << 40 << "> points of damage!" << std::endl;
		this->energyPoints -= 20;
		trap.takeDamage(40);
	}
	else
		std::cout << "Oops, my energy is out of requ for another shoebox attack, time to ruuuuuuun 🏃🏼‍♂️🏃🏼‍♂️🏃🏼‍♂️" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	if (trap.isdead())
		return ;
	if (this->energyPoints >= 20)
	{
		std::cout << "dhak! dhak! dhak! dhak! dhuck! dhuck! dhuck! dhadak! dhadak! <" <<
		this->name << "> attacks <" << trap.getName() << "> causing <" << 60 << "> points of damage!" << std::endl;
		this->energyPoints -= 20;
		trap.takeDamage(60);
	}
	else
		std::cout << "Oops, my energy is out of requ for another shoebox attack, time to ruuuuuuun 🏃🏼‍♂️🏃🏼‍♂️🏃🏼‍♂️" << std::endl;
}
