/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:26:52 by hel               #+#    #+#             */
/*   Updated: 2021/03/11 15:51:49 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
}

Zombie::~Zombie()
{
    return ;
}

void    Zombie::setZombieName(std::string name)
{
    this->name = name;
}

void    Zombie::setZombieType(std::string type)
{
    this->type = type;
}

std::string Zombie::getZombieName()
{
    return this->name;
}

std::string Zombie::getZombieType()
{
    return this->type;
}

void    Zombie::announce()
{
    std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
    return ;
}