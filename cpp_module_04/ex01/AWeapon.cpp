/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:34:07 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/05 13:36:28 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(const AWeapon & src)
{
	*this = src;
}

AWeapon& AWeapon::operator=(const AWeapon & rhs)
{
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return *this;
}

AWeapon::~AWeapon()
{
}

std::string const &	AWeapon::getName() const
{
	return this->_name;
}

int	AWeapon::getAPCost() const{
	return this->_apcost;
}

int	AWeapon::getDamage() const
{
	return this->_damage;
}