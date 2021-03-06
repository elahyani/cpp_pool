/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:52:20 by hel               #+#    #+#             */
/*   Updated: 2021/03/05 18:25:16 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string hName) : name(hName)
{
    return ;
}

HumanB::~HumanB()
{
    return ;
}

std::string HumanB::getName() const
{
    return this->name;
}

void    HumanB::setWeapon(Weapon &weapon)
{
   this->weapon = &weapon;
}

void    HumanB::attack() const
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}