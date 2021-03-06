/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:30:31 by hel               #+#    #+#             */
/*   Updated: 2021/03/03 14:22:58 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    return ;
}

ZombieEvent::~ZombieEvent()
{
    return ;
}

void    ZombieEvent::setZombieType(std::string type)
{
   this->ztype = type;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    Zombie  *zombie = new Zombie;
    
    zombie->setZombieName(name);
    zombie->setZombieType(this->ztype);
    return (zombie);
    
}

std::string ZombieEvent::getRandomName(int len)
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz0123456789";
    std::string rname;

    for (int i = 0; i < len; i++) {
        rname += alphabet[rand() % 26];
    }
    rname += '\0';
    return rname;
}

void    ZombieEvent::randomChump()
{
    Zombie  *zombie = new Zombie;
    srand(time(0));
    std::string name;

    name = getRandomName(5);
    zombie->setZombieName(name);
    zombie->setZombieType("Ghouls");
    zombie->announce();
}