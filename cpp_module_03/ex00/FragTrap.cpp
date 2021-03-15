/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:23:15 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/15 12:13:09 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{

}

FragTrap::FragTrap(std::string nm) : name(nm)
{
	
}

FragTrap::FragTrap(const FragTrap & src)
{
	
}

FragTrap::~FragTrap()
{
	
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FRAG-TP <" << this->name << "> attacks <" << target << "> at range, causing <" << this->meleeAttackDamage << "> points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	
}

unsigned int	FragTrap::takeDamage(unsigned int amount)
{
	
}

unsigned int	FragTrap::beRepaired(unsigned int amount)
{
	
}