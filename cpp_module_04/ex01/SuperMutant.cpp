/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:23:16 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/04 18:04:05 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & src) : Enemy(src)
{
}

SuperMutant&	SuperMutant::operator=(const SuperMutant & rhs)
{
	Enemy::operator=(rhs);
	return *this;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int amount)
{
	amount -= 3;
	Enemy::takeDamage(amount);
}