/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 13:51:33 by hel               #+#    #+#             */
/*   Updated: 2021/03/03 14:27:39 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main()
{
    Zombie      *zombie = new Zombie;
    Zombie      *zombie2 = new Zombie;
    ZombieEvent *zombieEvent = new ZombieEvent;

    zombie->setZombieName("Fido");
    zombie->setZombieType("Blue Walkers");
    zombie->announce();
    delete  zombie;
    std::cout << "--------------------------------------------" << std::endl;
    zombieEvent->setZombieType("Runners");
    zombie2 = zombieEvent->newZombie("Eddie");
    zombie2->announce();
    delete zombie2;
    std::cout << "--------------------------------------------" << std::endl;
    zombieEvent->randomChump();
    delete zombieEvent;
    return (0);
}