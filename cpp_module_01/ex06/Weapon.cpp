/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:36:05 by hel               #+#    #+#             */
/*   Updated: 2021/03/05 17:28:20 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    return ;
}

Weapon::Weapon(std::string wType) : type(wType)
{
    return;
}

Weapon::~Weapon()
{
    return;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string &Weapon::getType()
{
    return this->type;
}