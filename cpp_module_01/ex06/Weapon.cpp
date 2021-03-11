/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:36:05 by hel               #+#    #+#             */
/*   Updated: 2021/03/11 15:53:09 by elahyani         ###   ########.fr       */
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