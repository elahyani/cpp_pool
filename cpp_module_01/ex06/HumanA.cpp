/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:48:02 by hel               #+#    #+#             */
/*   Updated: 2021/03/10 17:54:18 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string hName, Weapon &club) : name(hName), weapon(club)
{
    return ;
}

HumanA::~HumanA()
{
    return ;
}

std::string HumanA::getName() const
{
    return this->name;
}

void    HumanA::setWeapon(Weapon weapon)
{
    weapon.setType(weapon.getType());
}

void    HumanA::attack() const
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}