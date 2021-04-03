/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:40:53 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/02 10:03:20 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	std::cout << this->name << ": oh shit! here we go again\n" << std::endl;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armoreDamageReduction = 0;
	usleep(300000);
}

NinjaTrap::NinjaTrap(std::string nm) : ClapTrap(nm)
{
	std::cout << this->name << ": oh shit! here we go again..\n" << std::endl;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armoreDamageReduction = 0;
	usleep(300000);
}

NinjaTrap::NinjaTrap(const NinjaTrap& src) : ClapTrap(src)
{
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->name << ": well, ladies and gentelmen, finish your drink and piss off...\n" << std::endl;
	usleep(300000);
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
		std::cout << "BANG! Clink clink, Wirrrrrrrrrrr... Click, krrrrr... <\33[1;32m" <<
		this->name << "\33[0m> attacks <\33[1;33m" << trap.getName() << "\33[0m> causing <\33[1;36m" << 20 << "\33[0m> points of damage!" << std::endl;
		this->energyPoints -= 20;
		trap.takeDamage(20);
	}
	else
		std::cout << this->name << ": Oops, my energy is out of requ for another shoebox attack, time to ruuuuuuun 🏃🏼‍♂️🏃🏼‍♂️🏃🏼‍♂️" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	if (trap.isdead())
		return ;
	if (this->energyPoints >= 20)
	{
		std::cout << "booofffttt! piaauuuuuuu! booooofffft! piaaauuuuuuuuuu! boooffft! piauuuu! <\33[1;32m" <<
		this->name << "\33[0m> attacks <\33[1;33m" << trap.getName() << "\33[0m> causing <\33[1;36m" << 30 << "\33[0m> points of damage!" << std::endl;
		this->energyPoints -= 20;
		trap.takeDamage(30);
	}
	else
		std::cout << this->name << ": Oops, my energy is out of requ for another shoebox attack, time to ruuuuuuun 🏃🏼‍♂️🏃🏼‍♂️🏃🏼‍♂️" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	if (trap.isdead())
		return ;
	if (this->energyPoints >= 20)
	{
		std::cout << "khadak! pffft! khadak! pfffffft! khadak! pffffft! <\33[1;32m" <<
		this->name << "\33[0m> attacks <\33[1;33m" << trap.getName() << "\33[0m> causing <\33[1;36m" << 40 << "\33[0m> points of damage!" << std::endl;
		this->energyPoints -= 20;
		trap.takeDamage(40);
	}
	else
		std::cout << this->name << ": Oops, my energy is out of requ for another shoebox attack, time to ruuuuuuun 🏃🏼‍♂️🏃🏼‍♂️🏃🏼‍♂️" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	if (trap.isdead())
		return ;
	if (this->energyPoints >= 20)
	{
		std::cout << "dhak! dhak! dhak! dhak! dhuck! dhuck! dhuck! dhadak! dhadak! <\33[1;32m" <<
		this->name << "\33[0m> attacks <\33[1;33m" << trap.getName() << "\33[0m> causing <\33[1;36m" << 60 << "\33[0m> points of damage!" << std::endl;
		this->energyPoints -= 20;
		trap.takeDamage(60);
	}
	else
		std::cout << this->name << ": Oops, my energy is out of requ for another shoebox attack, time to ruuuuuuun 🏃🏼‍♂️🏃🏼‍♂️🏃🏼‍♂️" << std::endl;
}
