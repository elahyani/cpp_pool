/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:12:58 by hel               #+#    #+#             */
/*   Updated: 2021/03/04 13:40:14 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    this->nbOfZombies = N;
    this->zombie = new Zombie[N];
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        zombie[i].setZombieName(getRandomName(5));
        zombie[i].setZombieType("Walkers");
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] zombie ;
}

std::string ZombieHorde::getRandomName(int len)
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string rname;

    for (int i = 0; i < len; i++) {
        rname += alphabet[rand() % 26];
    }
    rname += '\0';
    return rname;
}

void    ZombieHorde::announce()
{
    for (int i = 0; i < nbOfZombies; i++) {
        zombie[i].announce();
    }
}