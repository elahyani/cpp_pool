/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:09:23 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/08 16:11:25 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	return;
}

PowerFist::PowerFist(const PowerFist & src) : AWeapon(src)
{
}

PowerFist&	PowerFist::operator=(const PowerFist & rhs)
{
	if(this != &rhs)
		AWeapon::operator=(rhs);
	return *this;
}

PowerFist::~PowerFist()
{
	return;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}