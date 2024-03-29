/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:14:30 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/08 14:58:17 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	return;
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	return;
}

Enemy::Enemy(const Enemy & src)
{
	*this = src;
}

Enemy&	Enemy::operator=(const Enemy & rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();	
	}
	return *this;
}

Enemy::~Enemy()
{
	return;
}

std::string	const &	Enemy::getType() const
{
	return this->_type;
}

int		Enemy::getHP() const
{
	return this->_hp;
}

void	Enemy::takeDamage(int amount)
{
	if (amount > 0)
	{
		if (this->_hp - amount < 0)
			this->_hp = 0;
		else
			this->_hp -= amount;
	}
}