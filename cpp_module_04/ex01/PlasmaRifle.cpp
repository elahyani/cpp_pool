/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:54:18 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/08 14:59:24 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	return;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & src) : AWeapon(src)
{
}

PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle & rhs)
{
	if(this != &rhs)
		AWeapon::operator=(rhs);
	return *this;
}

PlasmaRifle::~PlasmaRifle()
{
	return;
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}